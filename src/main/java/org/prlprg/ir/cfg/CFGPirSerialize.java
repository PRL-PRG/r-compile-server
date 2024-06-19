package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import com.google.common.primitives.ImmutableIntArray;
import java.io.Reader;
import java.io.Writer;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import java.util.Optional;
import java.util.function.Supplier;
import java.util.logging.Logger;
import java.util.stream.IntStream;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.prlprg.bc.Bc;
import org.prlprg.bc.BcCode;
import org.prlprg.bc.ConstPool;
import org.prlprg.ir.cfg.PirType.NativeType;
import org.prlprg.ir.cfg.PirType.RType_;
import org.prlprg.ir.cfg.StmtData.Call_;
import org.prlprg.ir.closure.Closure;
import org.prlprg.ir.closure.ClosureVersion;
import org.prlprg.ir.closure.ClosureVersion.CallContext;
import org.prlprg.ir.closure.Promise;
import org.prlprg.ir.closure.Promise.Properties;
import org.prlprg.ir.closure.Promise.Properties.Property;
import org.prlprg.ir.type.REffect;
import org.prlprg.ir.type.REffects;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.Troolean;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.parseprint.EnumSerialCaseIs;
import org.prlprg.parseprint.ParseException;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;
import org.prlprg.primitive.BuiltinId;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.IsTypeCheck;
import org.prlprg.primitive.Logical;
import org.prlprg.rshruntime.BcPosition;
import org.prlprg.rshruntime.FeedbackOrigin;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXPType;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.Pair;
import org.prlprg.util.Reflection;
import org.prlprg.util.Streams;
import org.prlprg.util.StringCase;
import org.prlprg.util.Strings;

interface CFGPirSerialize extends CFGQuery, CFGIntrinsicMutate {
  /**
   * Parses <a href="https://github.com/reactorlabs/rir/blob/master/documentation/pir.md">PIR debug
   * representation</a> into multiple CFGs, throwing away in-between text.
   *
   * @param cfgFactory Creates CFGs e.g. in a {@link org.prlprg.ir.closure.ClosureVersion
   *     ClosureVersion} and/or with already-added {@link CFGObserver}s.
   */
  static Stream<CFG> manyFromPIR(Reader pirReader, Supplier<CFG> cfgFactory) {
    var logger = Logger.getLogger("org.prlprg.ir.cfg.CFGSerialize.manyFromPIR");
    var parser = new Parser(pirReader).withContext(new PirCFGParseContext(cfgFactory));
    var scanner = parser.scanner();

    return Streams.untilNull(
        () -> {
          if (scanner.position().column() != 1 || !scanner.nextCharsAre("BB0")) {
            var garbage = scanner.readUntil("\nBB0\n", true);
            if (!garbage.isEmpty()) {
              logger.fine("Garbage: " + garbage);
            }
            if (!scanner.isAtEof()) {
              scanner.assertAndSkip('\n');
            }
          }

          if (scanner.isAtEof()) {
            return null;
          }

          return parser.parse(CFG.class);
        });
  }

  /**
   * Serializes the CFG into <a
   * href="https://github.com/reactorlabs/rir/blob/master/documentation/pir.md">PIR debug
   * representation</a>.
   */
  default void toPir(Writer writer) {
    new Printer(writer).withContext(new PirCFGPrintContext()).print(this);
  }

  /**
   * Serializes the CFG into <a
   * href="https://github.com/reactorlabs/rir/blob/master/documentation/pir.md">PIR debug
   * representation</a>.
   */
  default String toPir() {
    return Printer.use(printer -> printer.withContext(new PirCFGPrintContext()).print(this));
  }
}

class PirCFGParseContext {
  private final Supplier<CFG> cfgFactory;

  PirCFGParseContext(Supplier<CFG> cfgFactory) {
    this.cfgFactory = cfgFactory;
  }

  @ParseMethod(SkipWhitespace.NONE)
  private CFG parseCFG(Parser p) {
    if (!p.scanner().nextCharsAre("BB0\n")) {
      throw p.scanner().fail("expected \"BB0\\n\" to start CFG");
    }

    var cfg = cfgFactory.get();
    var bbs = new LazyBBList(cfg);
    var pirIdToNode = new PirIdToNodeMap();
    var bbCtx = new PirBBParseContext(bbs, pirIdToNode);
    var bbP = p.withContext(bbCtx);

    while (p.scanner().nextCharsAre("BB")) {
      bbP.parse(BB.class);
    }

    bbCtx.patchDelayed();
    var freeBBs = new CFGIterator.Dfs(cfg);
    freeBBs.forEachRemaining(_ -> {});
    for (var bbId : freeBBs.remainingBBIds()) {
      var bb = cfg.get(bbId);
      if (bb.numChildren() == 0) {
        cfg.remove(bb);
      }
    }

    cfg.batchSubst(pirIdToNode::patchDefinedAfterUse);

    return cfg;
  }
}

class LazyBBList {
  private final CFG cfg;
  private final List<BB> bbs = new ArrayList<>();

  LazyBBList(CFG cfg) {
    this.cfg = cfg;
    bbs.add(cfg.entry());
  }

  BB get(int index) {
    while (index >= bbs.size()) {
      bbs.add(cfg.addBB());
    }
    return bbs.get(index);
  }
}

class PirBBParseContext {
  private final LazyBBList bbs;
  private final PirIdToNodeMap pirIdToNode;
  private final List<PirInstrOrPhiParseContext> instrCtxs = new ArrayList<>();

  PirBBParseContext(LazyBBList bbs, PirIdToNodeMap pirIdToNode) {
    this.bbs = bbs;
    this.pirIdToNode = pirIdToNode;
  }

  @ParseMethod(SkipWhitespace.NONE)
  private BB parseBB(Parser p) {
    var logger = Logger.getLogger("org.prlprg.ir.cfg.PirBBParseContext.parseBB");
    var s = p.scanner();

    s.assertAndSkip("BB");
    int bbIndex = s.readUInt();
    var garbage = s.readUntil('\n');
    if (!garbage.isEmpty()) {
      logger.fine("Garbage: " + garbage);
    }
    s.assertAndSkip('\n');

    var bb = bbs.get(bbIndex);
    var instrCtx = new PirInstrOrPhiParseContext(bb, bbs, pirIdToNode);
    var instrP = p.withContext(instrCtx);

    while (s.nextCharsAre("  ")) {
      instrP.parse(InstrOrPhi.class);
    }

    instrCtxs.add(instrCtx);

    return bb;
  }

  void patchDelayed() {
    for (var instrCtx : instrCtxs) {
      instrCtx.patchDelayed();
    }
  }
}

@EnumSerialCaseIs(StringCase.PASCAL)
class PirInstrOrPhiParseContext {
  private final BB bb;
  private final LazyBBList bbs;
  private final PirIdToNodeMap pirIdToNode;
  private final ArgContext argContext = new ArgContext();
  private final List<Pair<Phi<Node>, List<Phi.Input<Node>>>> delayedPhiInputs = new ArrayList<>();

  PirInstrOrPhiParseContext(BB bb, LazyBBList bbs, PirIdToNodeMap pirIdToNode) {
    this.bb = bb;
    this.bbs = bbs;
    this.pirIdToNode = pirIdToNode;
  }

  @ParseMethod(SkipWhitespace.NONE)
  private InstrOrPhi parseInstrOrPhi(Parser p1) {
    var logger = Logger.getLogger("org.prlprg.ir.cfg.PirInstrOrPhiParseContext.parseInstrOrPhi");
    var p = p1.withContext(argContext);
    var s = p.scanner();

    s.assertAndSkip("  ");
    if (s.trySkip("goto BB")) {
      var targetBBIndex = s.readUInt();
      var targetBB = bbs.get(targetBBIndex);

      s.assertAndSkip('\n');

      return bb.addJump("", new JumpData.Goto(targetBB));
    }

    var pirType = p.parse(PirType.class);
    s.readUntilColumn(19);
    // "(real|complex)$-" is exactly at column 19
    s.trySkip(' ');
    var pirId = p.parse(PirId.class);
    s.skipWhitespace(false);
    if (!pirId.isAnonymous()) {
      s.assertAndSkip("= ");
    }

    var constantOrAlias = tryParseConstantOrAliasInsteadOfInstr(p, pirId);
    if (constantOrAlias != null) {
      if (!s.isAtEof()) {
        s.assertAndSkip('\n');
      }
      // Add a no-op here since other instructions will refer to the string directly.
      return bb.append(pirId.name() + "_became_" + constantOrAlias, new StmtData.NoOp());
    }

    String instrTypeName = s.readWhile(c -> !Character.isWhitespace(c) && c != '<');
    var pirEffectsStr = s.readUntilColumn(51);
    logger.fine("PIR Effects: " + pirEffectsStr);
    s.skipWhitespace(false);
    InstrOrPhi instr;
    try {
      instr = parseInstrOrPhi(p, instrTypeName, pirType);
    } catch (ParseException e) {
      throw e.whileParsing(instrTypeName);
    }

    var typeFeedbackStr = s.readUntil('\n', true);
    // ???: Should we be storing this type feedback? Not implemented in our `Instr` yet.
    if (!typeFeedbackStr.isEmpty()) {
      logger.fine("Type feedback: " + typeFeedbackStr);
    }

    if (!s.isAtEof()) {
      s.assertAndSkip('\n');
    }

    if (!pirId.isAnonymous()) {
      pirIdToNode.put(pirId, instr);
    }
    return instr;
  }

  /**
   * Sometimes PIR assigns a constant or alias to a variable.
   *
   * <p>Presumably this is before an optimization pass which inlines them.
   */
  private @Nullable String tryParseConstantOrAliasInsteadOfInstr(Parser p, PirId pirId) {
    var s = p.scanner();
    if (s.nextCharIs('%') || s.nextCharIs('e')) {
      var alias = pirIdToNode.get(p.parse(PirId.class));
      pirIdToNode.put(pirId, alias);
      return "alias";
    } else if (s.nextCharIs('"')) {
      var str = s.readQuoted('"');
      pirIdToNode.put(pirId, Constant.string(str));
      return "constant_string";
    } else if (s.nextCharIs('-') || s.nextCharSatisfies(Character::isDigit)) {
      var num = s.readDouble();
      var isInt = s.trySkip('L');
      pirIdToNode.put(pirId, isInt ? Constant.integer((int) num) : Constant.real(num));
      return isInt ? "constant_integer" : "constant_real";
    } else if (s.trySkip("NA")) {
      pirIdToNode.put(pirId, Constant.real(Constants.NA_REAL));
      return "constant_missing";
    } else if (s.trySkip("true") || s.trySkip("opaqueTrue")) {
      pirIdToNode.put(pirId, Constant.logical(Logical.TRUE));
      return "constant_logical_true";
    } else if (s.trySkip("false") || s.trySkip("opaqueFalse")) {
      pirIdToNode.put(pirId, Constant.logical(Logical.FALSE));
      return "constant_logical_false";
    } else if (s.trySkip("na-lgl")) {
      pirIdToNode.put(pirId, Constant.logical(Logical.NA));
      return "constant_logical_na";
    } else if (s.trySkip("nil")) {
      pirIdToNode.put(pirId, new Constant(SEXPs.NULL));
      return "constant_null";
    } else if (s.trySkip("missingArg")) {
      pirIdToNode.put(pirId, new Constant(SEXPs.MISSING_ARG));
      return "constant_missing";
    } else if (s.trySkip("function(")) {
      s.readUntilEndOfLine();
      pirIdToNode.put(pirId, new InvalidNode("bytecode_stub"));
      return "constant_bytecode";
    }

    for (var deoptType : org.prlprg.rshruntime.DeoptReason.Type.values()) {
      var deoptTypeName =
          StringCase.convert(deoptType.name(), StringCase.SCREAMING_SNAKE, StringCase.PASCAL);
      if (s.nextCharsAre(deoptTypeName + '@')) {
        pirIdToNode.put(
            pirId, new ConstantDeoptReason(p.parse(org.prlprg.rshruntime.DeoptReason.class)));
        return "constant_deopt_reason";
      }
    }

    // REACH: Other constants which can be assigned to variables?
    return null;
  }

  private InstrOrPhi parseInstrOrPhi(Parser p, String instrTypeName, PirType pirType) {
    var s = p.scanner();

    if (instrTypeName.equals("Phi")) {
      Map<BB, Node> inputs = new HashMap<>();
      do {
        var argPirId = p.parse(PirId.class);
        s.assertAndSkip(":BB");
        var argBBIndex = s.readUInt();
        var argNode = pirIdToNode.get(argPirId);
        var argBB = bbs.get(argBBIndex);

        inputs.put(argBB, argNode);

        s.skipWhitespace(false);
      } while (s.trySkip(", "));

      // Java's type system is bad, idk why the casts are necessary but they are.
      @SuppressWarnings("unchecked")
      var inputClass =
          inputs.values().stream()
              .map(i -> (Object) i.getClass())
              .reduce(
                  (c1, c2) ->
                      Phi.commonInputSuperclass(
                          (Class<? extends Node>) c1, (Class<? extends Node>) c2))
              .map(c -> (Class<? extends Node>) c)
              .orElseThrow(() -> s.fail("phi needs at least one input"));
      var inputsNow =
          bb.predecessors().stream()
              .filter(inputs::containsKey)
              .map(pred -> new Phi.Input<>(pred, inputs.get(pred)))
              .toList();
      var delayedInputs =
          inputs.entrySet().stream()
              .filter(e -> !bb.predecessors().contains(e.getKey()))
              .map(e -> new Phi.Input<>(e.getKey(), e.getValue()))
              .toList();

      var phi = bb.addPhi(inputClass, inputsNow);
      delayedPhiInputs.add(Pair.of(phi, delayedInputs));
      return phi;
    }

    var data =
        switch (instrTypeName) {
          case "LdArg" -> {
            var index = s.readUInt();
            var type = ((PirType.RType_) pirType).type();
            yield new StmtData.LdArg(index, type);
          }
          case "StVar", "StArg" -> {
            var varName = p.parse(RegSymSXP.class);
            s.assertAndSkip(", ");
            var r = p.parse(RValue.class);
            s.assertAndSkip(", ");
            var env = p.parse(RValue.class);
            yield new StmtData.StVar(varName, r, env, instrTypeName.equals("StArg"));
          }
          case "Is" -> {
            var value = p.parse(RValue.class);
            s.assertAndSkip(", ");
            var typeCheck = p.parse(IsTypeCheck.class);
            yield new StmtData.GnuRIs(typeCheck, value);
          }
          case "IsType" -> {
            var value = p.parse(RValue.class);
            s.assertAndSkip(" isA ");
            var type = p.parse(RType.class);
            yield new StmtData.IsType(type, value);
          }
          case "CastType" -> {
            if (!s.trySkip("up ") && !s.trySkip("dn ")) {
              throw s.fail("expected \"up\" or \"dn\"");
            }
            if (!(pirType instanceof PirType.RType_(var rType))) {
              throw s.fail("can't CastType a native PIR type");
            }
            var value = p.parse(RValue.class);
            yield new StmtData.CastType(rType, value);
          }
          case "Force", "Force!" -> {
            // ???: `Force!` is for instructions which force promises that we know are strict (just
            // unwraps them). However, wouldn't that already be encoded in the promise's type? And
            // it uses the type for effects inference.
            //
            // Currently there's no `strict` field in `Force` instructions in the Java compiler,
            // instead it's a method. But maybe there's a good reason for them being separate?
            var promise = p.parse(RValue.class);
            s.assertAndSkip(", ");
            var frameStateOrEnv =
                s.nextCharSatisfies(Character::isWhitespace) ? null : p.parse(Node.class);
            FrameState frameState = null;
            RValue env = null;
            if (s.trySkip(", ")) {
              frameState = (FrameState) frameStateOrEnv;
              env = p.parse(RValue.class);
            } else if (frameStateOrEnv instanceof FrameState f) {
              frameState = f;
            } else {
              env = (RValue) frameStateOrEnv;
            }
            yield new StmtData.Force(promise, frameState, env == null ? StaticEnv.ELIDED : env);
          }
          case "MkCls" -> {
            var cls = p.parse(Closure.class);
            s.assertAndSkip(", ");
            p.parse(RValue.class); // env
            yield new StmtData.MkCls(cls);
          }
          case "MkArg" -> {
            p.parse(RValue.class);
            s.assertAndSkip(", ");
            s.readUntil(',');
            s.assertAndSkip(", ");
            // If the next character is whitespace, the env is null (I assume same as elided).
            if (!s.nextCharSatisfies(Character::isWhitespace)) {
              p.parse(RValue.class);
            }
            yield new StmtData.MkProm(stubPromise());
          }
          case "MkEnv", "(MkEnv)" -> {
            var isStub = instrTypeName.equals("(MkEnv)");
            var names = ImmutableList.<RegSymSXP>builder();
            var values = ImmutableList.<RValue>builder();
            var missingness = ImmutableList.<Boolean>builder();
            RValue parent;
            int context;
            while (true) {
              var name1 = p.parse(RegSymSXP.class);
              var missing = s.trySkip("(miss)");
              s.assertAndSkip("=");
              var value = p.parse(RValue.class);
              s.assertAndSkip(", ");

              if (s.trySkip("context ")) {
                if (!name1.toString().equals("parent") || missing) {
                  throw s.fail("expected the last key/value pair to be \"parent=<env>\"");
                }
                parent = value;
                context = s.readInt();
                break;
              }

              names.add(name1);
              missingness.add(missing);
              values.add(value);
            }

            yield new StmtData.MkEnv(
                parent, names.build(), values.build(), missingness.build(), context, isStub);
          }
          case "FrameState" -> {
            var location = p.parse(BcPosition.class);
            var inPromise = s.trySkip("(pr)");
            s.assertAndSkip(": ");
            var stack =
                p.parseList(RValue.class, SkipWhitespace.ALL_EXCEPT_NEWLINES).stream()
                    .map(e -> (Node) e)
                    .collect(ImmutableList.toImmutableList());
            s.assertAndSkip(", env=");
            var env = p.parse(RValue.class);
            var inlined = s.trySkip(", next=") ? p.parse(FrameState.class) : null;
            yield new StmtData.FrameState(location, inPromise, stack, env, inlined);
          }
          case "DotsList" -> {
            var names = ImmutableList.<Optional<RegSymSXP>>builder();
            var values = ImmutableList.<RValue>builder();
            do {
              var nameAndValue = parseNameAndValue(p);
              names.add(nameAndValue.first());
              values.add(nameAndValue.second());
            } while (s.trySkip(", "));
            yield new StmtData.DotsList(names.build(), values.build());
          }
          case "Call" -> {
            var fun = p.parse(RValue.class);
            var callArgs = parseCallArgs(p);
            var fs = s.trySkip(", ") ? p.parse(FrameState.class) : null;
            yield new StmtData.Call(stubLangSxp(), fun, callArgs, StaticEnv.NOT_CLOSED, fs);
          }
          case "NamedCall" -> {
            var fun = p.parse(RValue.class);
            var namedCallArgs = parseNamedCallArgs(p);
            var fs = s.trySkip(", ") ? p.parse(FrameState.class) : null;
            yield new StmtData.NamedCall(
                stubLangSxp(),
                fun,
                namedCallArgs.first(),
                namedCallArgs.second(),
                StaticEnv.NOT_CLOSED,
                fs);
          }
          case "StaticCall" -> {
            var clsName = s.readUntil('(');
            var callArgs = parseCallArgs(p);
            var fs = s.trySkip(", ") ? p.parse(FrameState.class) : null;
            yield new StmtData.StaticCall(
                stubLangSxp(),
                null,
                stubClosureVersion(clsName),
                CallContext.EMPTY,
                callArgs,
                stubArglistOrder(callArgs),
                StaticEnv.NOT_CLOSED,
                fs);
          }
          case "CallBuiltin" -> {
            var builtin = p.parse(BuiltinId.class);
            var callArgs = parseCallArgs(p);
            yield new StmtData.CallBuiltin(stubLangSxp(), builtin, callArgs, StaticEnv.NOT_CLOSED);
          }
          case "CallSafeBuiltin" -> {
            var builtin = p.parse(BuiltinId.class);
            var callArgs = parseCallArgs(p);
            yield new StmtData.CallSafeBuiltin(
                stubLangSxp(), builtin, callArgs, StaticEnv.NOT_CLOSED, ImmutableList.of());
          }
          case "PushContext" -> {
            var allArgs = new ArrayList<RValue>();
            do {
              allArgs.add(p.parse(RValue.class));
            } while (s.trySkip(", "));

            ImmutableList<RValue> ctxArgs;
            try {
              ctxArgs = ImmutableList.copyOf(allArgs.subList(0, allArgs.size() - 3));
            } catch (IllegalArgumentException e) {
              throw s.fail("non-trivial SEXP argument (function) to PushContext");
            }
            var ast = allArgs.get(allArgs.size() - 3);
            var op = allArgs.get(allArgs.size() - 2);
            var sysParent = allArgs.getLast();
            yield new StmtData.PushContext(ast, op, ctxArgs, (ImmutableIntArray) null, sysParent);
          }
          case "Branch" -> {
            var cond = p.parse(RValue.class);
            s.assertAndSkip(" -> BB");
            var trueBBIndex = s.readUInt();
            var trueBB = bbs.get(trueBBIndex);
            s.assertAndSkip(" (if true) | BB");
            var falseBBIndex = s.readUInt();
            var falseBB = bbs.get(falseBBIndex);
            s.assertAndSkip(" (if false)");
            yield new JumpData.Branch(cond, trueBB, falseBB);
          }
          case "Assume", "AssumeNot" -> {
            var invert = instrTypeName.equals("AssumeNot");
            var assumption = p.parse(RValue.class);
            if (invert) {
              assumption =
                  bb.append(
                      "assumeInvert",
                      new StmtData.Not(Optional.empty(), assumption, StaticEnv.ELIDED));
            }
            s.assertAndSkip(", ");
            var checkpoint = p.parse(Checkpoint.class);
            s.assertAndSkip(" (");
            var deoptReason = p.parse(org.prlprg.rshruntime.DeoptReason.class);
            s.assertAndSkip(")");
            checkpoint.addAssumption(assumption, deoptReason);
            yield new StmtData.NoOp();
          }
          case "Checkpoint" -> {
            // REACH: Add assumptions (tests and fail reasons) to checkpoint
            s.assertAndSkip("-> BB");
            var passBBIndex = s.readUInt();
            var passBB = bbs.get(passBBIndex);
            s.assertAndSkip(" (default) | BB");
            var failBBIndex = s.readUInt();
            var failBB = bbs.get(failBBIndex);
            s.assertAndSkip(" (if assume failed)");

            yield new JumpData.Checkpoint(ImmutableList.of(), ImmutableList.of(), passBB, failBB);
          }
          case "Deopt" -> {
            var frameState = p.parse(FrameState.class);
            DeoptReason deoptReason = null;
            RValue deoptTrigger = null;
            if (s.trySkip(", ")) {
              deoptReason = p.parse(DeoptReason.class);
              s.assertAndSkip(", ");
              deoptTrigger = p.parse(RValue.class);
            }
            var escapedEnv = s.trySkip("   !");
            yield new JumpData.Deopt(frameState, deoptReason, deoptTrigger, escapedEnv);
          }
          case "Return" -> {
            var value = s.nextCharIs('\n') ? new Constant(SEXPs.NULL) : p.parse(RValue.class);
            yield new JumpData.Return(value);
          }
          default -> {
            var clazz =
                switch (instrTypeName) {
                  case "Nop" -> StmtData.NoOp.class;
                  case "Missing" -> StmtData.IsMissing.class;
                  case "UpdatePromise" -> StmtData.StrictifyProm.class;
                  case "Plus" -> StmtData.UPlus.class;
                  case "Minus" -> StmtData.UMinus.class;
                  case "ChkFunction" -> StmtData.ChkFun.class;
                  default -> InstrData.CLASSES.get(instrTypeName);
                };
            if (clazz == null) {
              throw s.fail(
                  "PIR instruction doesn't correspond to a known Java-compiler instruction: "
                      + instrTypeName);
            }

            var components = clazz.getRecordComponents();
            var args = new Object[components.length];
            var first = true;
            for (var i = 0; i < components.length; i++) {
              if (first) {
                // ASTs aren't stored in PIR
                var name = components[i].getName();
                if (name.equals("ast")) {
                  args[i] = stubLangSxp();
                  continue;
                } else if (name.equals("ast1")) {
                  args[i] = Optional.empty();
                  continue;
                }
              }

              if (i == components.length - 1 && components[i].isAnnotationPresent(IsEnv.class)) {
                // This is the last argument and it's an env

                if (s.nextCharSatisfies(c -> c == -1 || Character.isWhitespace(c))) {
                  // null env; I assume this works the same as elided.
                  args[i] = StaticEnv.ELIDED;
                  continue;
                }

                if (first) {
                  // PIR instructions with no non-env arguments and an env have a leading comma, due
                  // to the way they are printed and it wasn't worth the effort to fix.
                  s.assertAndSkip(", ");
                }
              }

              if (first) {
                first = false;
              } else {
                s.assertAndSkip(", ");
              }
              args[i] = p.parse(components[i].getGenericType(), SkipWhitespace.ALL_EXCEPT_NEWLINES);
            }

            yield Reflection.construct(clazz, args);
          }
        };

    return switch (data) {
      case StmtData<?> stmt -> bb.append("", stmt);
      case JumpData<?> jump -> bb.addJump("", jump);
    };
  }

  /** The given printer must have {@link ArgContext}. */
  private ImmutableList<RValue> parseCallArgs(Parser p) {
    var s = p.scanner();
    var args = ImmutableList.<RValue>builder();

    s.assertAndSkip('(');
    if (!s.trySkip(')')) {
      do {
        args.add(p.parse(RValue.class));
      } while (s.trySkip(", "));
      s.assertAndSkip(')');
    }

    return args.build();
  }

  /** The given printer must have {@link ArgContext}. */
  private Pair<ImmutableList<Optional<String>>, ImmutableList<RValue>> parseNamedCallArgs(
      Parser p) {
    var s = p.scanner();
    var names = ImmutableList.<Optional<String>>builder();
    var args = ImmutableList.<RValue>builder();

    s.assertAndSkip('(');
    if (!s.trySkip(')')) {
      do {
        var nameAndValue = parseNameAndValue(p);
        names.add(nameAndValue.first().map(RegSymSXP::name));
        args.add(nameAndValue.second());
      } while (s.trySkip(", "));
      s.assertAndSkip(')');
    }

    return Pair.of(names.build(), args.build());
  }

  /** The given printer must have {@link ArgContext}. */
  private Pair<Optional<RegSymSXP>, RValue> parseNameAndValue(Parser p) {
    var s = p.scanner();
    var nameAndValue = s.readUntil(c -> c == -1 || c == '\n' || c == ',' || c == ')' || c == '<');

    var equalsIdx = nameAndValue.indexOf('=');
    String nameString;
    String valueString;
    if (equalsIdx != -1) {
      nameString = nameAndValue.substring(0, equalsIdx);
      valueString = nameAndValue.substring(equalsIdx + 1).stripTrailing();
    } else {
      nameString = null;
      valueString = nameAndValue;
    }

    RegSymSXP name;
    RValue value;
    try {
      name =
          nameString == null ? null : Parser.fromString(nameString, RegSymSXP.class, p.context());
    } catch (ParseException e) {
      throw s.fail("failed to parse name in name/value pair: " + nameString, e);
    }
    try {
      value = Parser.fromString(valueString, RValue.class, p.context());
    } catch (ParseException e) {
      throw s.fail("failed to parse value in name/value pair: " + valueString, e);
    }

    return Pair.of(Optional.ofNullable(name), value);
  }

  void patchDelayed() {
    for (var delayedPhiInputs : delayedPhiInputs) {
      var phi = delayedPhiInputs.first();
      var inputs = delayedPhiInputs.second();
      for (var input : inputs) {
        phi.setInput(input);
      }
    }
  }

  private LangSXP stubLangSxp() {
    return SEXPs.lang(SEXPs.symbol("stub"), SEXPs.NULL);
  }

  private Closure stubClosure(String name) {
    return new Closure(name, stubBCodeCloSXP());
  }

  private ClosureVersion stubClosureVersion(String name) {
    return stubClosure(name).baselineVersion();
  }

  private Promise stubPromise() {
    return new Promise("stub", stubBCode(), new CFG(), StaticEnv.NOT_CLOSED, Properties.EMPTY);
  }

  private CloSXP stubBCodeCloSXP() {
    return SEXPs.closure(SEXPs.NULL, SEXPs.bcode(stubBCode()), SEXPs.EMPTY_ENV);
  }

  private Bc stubBCode() {
    return new Bc(new BcCode.Builder().build(), new ConstPool.Builder().build());
  }

  private ImmutableIntArray stubArglistOrder(ImmutableList<RValue> callArgs) {
    return ImmutableIntArray.copyOf(IntStream.range(0, callArgs.size())::iterator);
  }

  private class ArgContext {
    // This method overrides all parsers for nodes when they are parsed in this context, so we can
    // call e.g. `p.parse(RValue.class)` and it dispatches this.
    @ParseMethod(SkipWhitespace.NONE)
    private Node parseNodeInInstrOrPhi(Parser p) {
      return pirIdToNode.get(p.parse(PirId.class));
    }

    @ParseMethod(SkipWhitespace.NONE)
    private PirType parsePirType(Parser p) {
      for (var nativeType : PirType.NativeType.values()) {
        if (p.scanner().trySkip(nativeType.pirName())) {
          return nativeType;
        }
      }
      return new PirType.RType_(p.parse(RType.class));
    }

    @SuppressWarnings("StatementWithEmptyBody")
    @ParseMethod(SkipWhitespace.NONE)
    private RType parseRType(Parser p) {
      var s = p.scanner();

      if (!s.nextCharsAre("(cls|spec|blt)") && s.trySkip('(')) {
        if (s.trySkip(')')) {
          return RTypes.NOTHING;
        }

        var type = p.parse(RType.class);
        while (s.trySkip("|")) {
          type = type.union(p.parse(RType.class));
        }
        s.assertAndSkip(')');
        return type;
      }

      RType type;

      // Base type
      if (s.trySkip("(cls|spec|blt)") || s.trySkip("cls|spec|blt")) {
        type = RTypes.ANY_FUN;
      } else if (s.trySkip("miss")) {
        type = RTypes.OF_MISSING;
      } else if (s.trySkip("val?")) {
        type = RTypes.ANY_VALUE;
      } else if (s.trySkip("val")) {
        type = RTypes.ANY_VALUE_NOT_MISSING;
      } else if (s.trySkip("num")) {
        type = RTypes.NUMERIC_OR_LOGICAL;
      } else if (s.trySkip("code")) {
        // This matches lang, bcode, and externalSxp. We can only encode this as ANY_SIMPLE.
        type = RTypes.ANY_SIMPLE;
      } else if (s.trySkip("char")) {
        // Character vectors should never be in the PIR IR, this is an overly broad and maybe buggy
        // PIR type.
        type = RTypes.ANY_SIMPLE;
      } else if (s.trySkip("other")) {
        type = RTypes.ANY_SIMPLE;
      } else if (s.trySkip("_")) {
        type = RTypes.exact(SEXPs.UNBOUND_VALUE);
      } else if (s.trySkip("*dots")) {
        type = RTypes.DOTS_ARG;
      } else {
        SEXPType sexpType;
        try {
          sexpType = p.parse(SEXPType.class);
        } catch (ParseException e) {
          throw s.fail("unrecognized RType: " + s.readWhile(Character::isLetter));
        }
        type =
            sexpType == SEXPType.PROM
                ? RTypes.ANY_PROM
                : sexpType == SEXPType.SYM ? RTypes.ANY_SIMPLE : RTypes.simple(sexpType);
      }

      // Attributes
      if (!s.trySkip('$') && type.primVec() != null) {
        assert type.promise() != null && type.missing() != null;
        type = RTypes.primVec(type.primVec().notScalar(), type.promise(), type.missing());
      }
      if (s.trySkip('#') && type.primVec() != null) {
        assert type.promise() != null && type.missing() != null;
        type = RTypes.primVec(type.primVec().notNAOrNaN(), type.promise(), type.missing());
      }
      if (s.trySkip('^')) {
        type = type.notStrict();
      } else if (s.trySkip('~')) {
        type = type.promiseWrapped();
      }
      if (s.trySkip('-')) {
        // REACH: Remove attributes
      } else if (s.trySkip('_')) {
        // REACH: Add all attributes except notFastVecElt
      } else if (s.trySkip('+')) {
        // REACH: Add all attributes except object
      } else {
        // REACH: Add unknown attributes
      }
      if (s.trySkip(" | miss")) {
        type = type.maybeMissing();
      }

      return type;
    }

    @ParseMethod(SkipWhitespace.NONE)
    private SEXPType parseSEXPType(Parser p) {
      var s = p.scanner();
      if (s.trySkip("ast")) {
        // This is redundant to expressions, probably supported to be lang but actually it matches
        // EXPRSXP and code matches LANGSXP
        return SEXPType.EXPR;
      } else if (s.trySkip("raw")) {
        return SEXPType.RAW;
      } else if (s.trySkip("vec")) {
        return SEXPType.VEC;
      } else if (s.trySkip("char")) {
        return SEXPType.CHAR;
      } else if (s.trySkip("real")) {
        return SEXPType.REAL;
      } else if (s.trySkip("complex")) {
        return SEXPType.CPLX;
      } else if (s.trySkip("str")) {
        return SEXPType.STR;
      } else if (s.trySkip("env")) {
        return SEXPType.ENV;
      } else if (s.trySkip("expressions")) {
        // This is redundant to ast
        return SEXPType.EXPR;
      } else if (s.trySkip("list")) {
        return SEXPType.LIST;
      } else if (s.trySkip("prom")) {
        return SEXPType.PROM;
      } else if (s.trySkip("nil")) {
        return SEXPType.NIL;
      } else if (s.trySkip("cls")) {
        return SEXPType.CLO;
      } else if (s.trySkip("spec")) {
        return SEXPType.SPECIAL;
      } else if (s.trySkip("blt")) {
        return SEXPType.BUILTIN;
      } else if (s.trySkip("sym")) {
        return SEXPType.SYM;
      } else if (s.trySkip("int")) {
        return SEXPType.INT;
      } else if (s.trySkip("lgl")) {
        return SEXPType.LGL;
      } else if (s.trySkip("dots")) {
        return SEXPType.DOT;
      } else if (s.trySkip("*dots")) {
        // We can't represent expanded dots, so we encode as symbol (which is technically correct,
        // but
        // it's a special symbol).
        return SEXPType.SYM;
      } else {
        throw s.fail("unrecognized SEXP type: " + s.readUntilWhitespace());
      }
    }

    @ParseMethod
    private IsTypeCheck parseIsTypeCheck(Parser p) {
      var s = p.scanner();
      if (s.trySkip("Factor")) {
        return IsTypeCheck.FACTOR;
      } else if (s.trySkip("NonObject")) {
        return IsTypeCheck.NON_OBJECT;
      } else if (s.trySkip("Vector")) {
        return IsTypeCheck.VECTOR;
      } else if (s.trySkip("NULL")) {
        return IsTypeCheck.NIL;
      } else if (s.trySkip("pairlist")) {
        return IsTypeCheck.LIST;
      } else if (s.trySkip("logical")) {
        return IsTypeCheck.LGL;
      } else if (s.trySkip("integer")) {
        return IsTypeCheck.INT;
      } else if (s.trySkip("double")) {
        return IsTypeCheck.REAL;
      } else if (s.trySkip("complex")) {
        return IsTypeCheck.CPLX;
      } else if (s.trySkip("character")) {
        return IsTypeCheck.STR;
      } else if (s.trySkip("expression")) {
        return IsTypeCheck.EXPR;
      } else if (s.trySkip("list")) {
        return IsTypeCheck.VEC;
      } else if (s.trySkip("raw")) {
        return IsTypeCheck.RAW;
      } else {
        throw s.fail("unrecognized IsTypeCheck: " + s.readJavaIdentifierOrKeyword());
      }
    }

    @ParseMethod
    private RegSymSXP parseRegSymSXP(Parser p) {
      // PIR doesn't escape the symbols.
      // If a symbol has a comma or other common "next item" this workaround doesn't work (in fact
      // it may be impossible to disambiguate), but fortunately that doesn't happen enough to apply
      // to any of the tests, and this is only used for testing purposes.
      return SEXPs.symbol(
          p.scanner()
              .readUntil(
                  c ->
                      c == -1 || c == '\n' || c == ',' || c == '=' || c == ' ' || c == '('
                          || c == '[' || c == ')' || c == ']'));
    }

    @ParseMethod
    private Closure parseClosure(Parser p) {
      return stubClosure(p.scanner().readUntil(','));
    }

    @ParseMethod
    private BcPosition parseBcPosition(Parser p) {
      var s = p.scanner();

      // PIR stores the bytecode address in memory, but we don't
      s.assertAndSkip("0x");
      s.readWhile(Character::isLetterOrDigit);

      return p.withContext(null).parse(BcPosition.class);
    }

    @ParseMethod
    private FeedbackOrigin parseFeedbackOrigin(Parser p) {
      var s = p.scanner();

      // PIR stores the bytecode address in memory, but we don't
      s.assertAndSkip("0x");
      s.readWhile(Character::isLetterOrDigit);

      s.assertAndSkip('[');
      var result = p.withContext(null).parse(FeedbackOrigin.class);
      s.assertAndSkip(']');

      return result;
    }
  }
}

sealed interface PirType {
  static PirType of(InstrOrPhi instrOrPhi) {
    return switch (instrOrPhi) {
      case RValue v -> new RType_(v.type());
      case Checkpoint _ -> NativeType.CHECKPOINT;
      case FrameState _ -> NativeType.FRAME_STATE;
      case DeoptReason _ -> NativeType.DEOPT_REASON;
      case RContext _ -> NativeType.CONTEXT;
      default -> {
        if (instrOrPhi.returns().isEmpty()) {
          yield NativeType.VOID;
        } else {
          throw new UnsupportedOperationException("Unhandled InstrOrPhi: " + instrOrPhi);
        }
      }
    };
  }

  enum NativeType implements PirType {
    VOID("void"),
    CHECKPOINT("cp"),
    FRAME_STATE("fs"),
    DEOPT_REASON("dr"),
    CONTEXT("ct");

    private final String pirName;

    NativeType(String pirName) {
      this.pirName = pirName;
    }

    String pirName() {
      return pirName;
    }
  }

  record RType_(RType type) implements PirType {}
}

class PirCFGPrintContext {
  @PrintMethod
  private void printCFG(CFG self, Printer p) {
    // Map BBs to indices in BFS order, like PIR does
    var bfs = new CFGIterator.Bfs(self);
    var bbToIdx = new HashMap<BB, Integer>(self.numBBs());
    var bbs = new ArrayList<BB>(self.numBBs());
    while (bfs.hasNext()) {
      var bb = bfs.next();
      bbToIdx.put(bb, bbs.size());
      bbs.add(bb);
    }
    for (var id : bfs.remainingBBIds()) {
      var bb = self.get(id);
      bbToIdx.put(bb, bbs.size());
      bbs.add(bb);
    }
    var nodeToPirId = new NodeToPirIdMap();
    var bbCtx = new PirBBPrintContext(bbToIdx, nodeToPirId);
    var bbP = p.withContext(bbCtx);

    for (var i = 0; i < self.numBBs(); i++) {
      var bb = bbs.get(i);
      var j = 0;
      for (var instrOrPhi : bb) {
        var pirId = PirId.of(instrOrPhi, i, j);
        nodeToPirId.put(instrOrPhi, pirId);
        if (!pirId.isAnonymous()) {
          j++;
        }
      }
    }

    for (var i = 0; i < self.numBBs(); i++) {
      var bb = bbs.get(i);
      bbCtx.setCurrentBBIdx(i);
      bbP.print(bb);
    }
  }
}

class PirBBPrintContext {
  private int currentBBIdx = 0;
  private final Map<BB, Integer> bbToIdx;
  private final NodeToPirIdMap nodeToPirId;

  PirBBPrintContext(Map<BB, Integer> bbToIdx, NodeToPirIdMap nodeToPirId) {
    this.bbToIdx = bbToIdx;
    this.nodeToPirId = nodeToPirId;
  }

  void setCurrentBBIdx(int currentBBIdx) {
    this.currentBBIdx = currentBBIdx;
  }

  @PrintMethod
  private void printBB(BB self, Printer p) {
    var w = p.writer();
    var f = w.formatter();

    f.format("BB%-4d", currentBBIdx);
    if (!self.predecessors().isEmpty()) {
      f.format(" <- [%s]", Strings.join(",", bbToIdx::get, self.predecessors()));
    }
    w.write('\n');

    var instrP = p.withContext(new PirInstrOrPhiPrintContext(bbToIdx, nodeToPirId));
    for (var instrOrPhi : self) {
      instrP.print(instrOrPhi);
    }
  }
}

@EnumSerialCaseIs(StringCase.PASCAL)
class PirInstrOrPhiPrintContext {
  private final Map<BB, Integer> bbToIdx;
  private final NodeToPirIdMap nodeToPirId;
  private final ArgContext argContext = new ArgContext();

  PirInstrOrPhiPrintContext(Map<BB, Integer> bbToIdx, NodeToPirIdMap nodeToPirId) {
    this.bbToIdx = bbToIdx;
    this.nodeToPirId = nodeToPirId;
  }

  @PrintMethod
  private void printInstrOrPhi(InstrOrPhi self, Printer p1) {
    var p = p1.withContext(argContext);
    var w = p.writer();
    w.write("  ");

    if (self instanceof Jump j && j.data() instanceof JumpData.Goto g) {
      w.write("goto BB");
      p.print(bbToIdx.get(g.next()));
      w.write('\n');
      return;
    }

    p.print(PirType.of(self));
    w.writeUntilColumn(' ', 19);
    var pirId = nodeToPirId.get(self);
    if (pirId.isAnonymous()) {
      w.writeUntilColumn(' ', 27);
    } else {
      p.print(pirId);
      w.writeUntilColumn(' ', 24, true);
      w.write(" = ");
    }
    printInstrTypeName(self, p);
    if (self instanceof Instr i) {
      w.writeUntilColumn(' ', 45);
      p.print(i.effects());
    }
    w.writeUntilColumn(' ', 51, true);
    printArgs(self, p);

    w.write('\n');
  }

  void printInstrTypeName(InstrOrPhi self, Printer p) {
    var w = p.writer();

    if (self instanceof Phi<?>) {
      w.write("Phi");
      return;
    }
    var data = ((Instr) self).data();

    var baseName =
        switch (data) {
          case StmtData.StVar s when s.isArg() -> "StArg";
          case StmtData.MkEnv e when e.isStub() -> "(MkEnv)";
          case StmtData.Force f when f.isStrict() == YesOrMaybe.YES -> "Force!";
          case StmtData.NoOp _ -> "Nop";
          case StmtData.GnuRIs _ -> "Is";
          case StmtData.IsMissing _ -> "Missing";
          case StmtData.MkProm _ -> "MkArg";
          case StmtData.StrictifyProm _ -> "UpdatePromise";
          case StmtData.UPlus _ -> "Plus";
          case StmtData.UMinus _ -> "Minus";
          case StmtData.ChkFun _ -> "ChkFunction";
          default -> data.getClass().getSimpleName();
        };
    // No feedback, so we only write the base name
    w.write(baseName);
  }

  void printArgs(InstrOrPhi self, Printer p) {
    var w = p.writer();
    if (self instanceof Phi<?> phi) {
      for (var input : phi.inputs()) {
        p.print(nodeToPirId.get(input.node()));
        w.write(":BB");
        p.print(bbToIdx.get(input.incomingBB()));
        w.write(", ");
      }
      return;
    }
    var data = ((Instr) self).data();
    switch (data) {
      case StmtData.LdArg s -> p.print(s.index());
      case StmtData.StVar s -> {
        p.print(s.name());
        w.write(", ");
        p.print(s.value());
        w.write(", ");
        p.print(s.env());
      }
      case StmtData.GnuRIs i -> {
        p.print(i.value());
        w.write(", ");
        p.print(i.typeCheck());
      }
      case StmtData.IsType i -> {
        p.print(i.value());
        w.write(" isA ");
        p.print(i.type());
      }
      case StmtData.CastType c -> {
        w.write(!c.type().isSubsetOf(c.value().type()) ? "up " : "dn ");
        p.print(c.value());
      }
      case StmtData.Force f -> {
        p.print(f.promise());
        w.write(", ");
        if (f.frameState().isPresent()) {
          p.print(f.frameState().get());
          w.write(", ");
        }
        if (f.env() != StaticEnv.ELIDED) {
          p.print(f.env());
        }
      }
      case StmtData.MkCls(var closure) -> {
        p.print(closure.name());
        w.write(", ");
        p.print(closure.env());
      }
      case StmtData.MkProm(var promise) -> {
        var eagerValue = promise.eagerValue();
        p.print(eagerValue == null ? new Constant(SEXPs.UNBOUND_VALUE) : eagerValue);
        w.write(", ");
        p.print("0xinvalid");
        if (promise.properties().flags().contains(Property.NO_REFLECTION)) {
          w.write(" (!refl)");
        }
        w.write(", ");
        p.print(promise.env());
      }
      case StmtData.MkEnv m -> {
        for (var i = 0; i < m.names().size(); i++) {
          p.print(m.names().get(i));
          if (m.missingness().get(i)) {
            w.write("(miss)");
          }
          w.write("=");
          p.print(m.values().get(i));
          w.write(", ");
        }
        w.write("parent=");
        p.print(m.parent());
        w.write(", context");
        p.print(m.context());
      }
      case StmtData.FrameState f -> {
        p.print(f.location());
        if (f.inPromise()) {
          w.write("(pr)");
        }
        w.write(": ");
        p.printAsList(f.stack(), true);
        w.write(", env=");
        p.print(f.env());
        if (f.inlinedNext().isPresent()) {
          w.write(", next=");
          p.print(f.inlinedNext().get());
        }
      }
      case StmtData.PushContext c -> {
        var first = true;
        for (var arg : c.ctxArgs()) {
          if (first) {
            first = false;
          } else {
            w.write(", ");
          }
          p.print(arg);
        }
        w.write(", ");
        p.print(c.ast());
        w.write(", ");
        p.print(c.op());
        w.write(", ");
        p.print(c.sysParent());
      }
      case StmtData.Call c -> {
        p.print(c.fun());
        printCallArgs(c, p);
        if (c.fs().isPresent()) {
          w.write(", ");
          p.print(c.fs().get());
        }
      }
      case StmtData.NamedCall c -> {
        p.print(c.fun());
        printCallArgs(c, p);
        if (c.fs().isPresent()) {
          w.write(", ");
          p.print(c.fs().get());
        }
      }
      case StmtData.StaticCall c -> {
        p.print(c.fun().closure().name());
        // REACH: tryOptimizationDispatch hint
        printCallArgs(c, p);
        if (c.fs().isPresent()) {
          w.write(", ");
          p.print(c.fs().get());
        }
      }
      case StmtData.CallBuiltin c -> {
        p.print(c.fun());
        printCallArgs(c, p);
      }
      case StmtData.CallSafeBuiltin c -> {
        p.print(c.fun());
        printCallArgs(c, p);
      }
      case StmtData.IsEnvStub i -> {
        // This one parses and prints really weird
        // (instruction with no non-env arguments and an env)...
        w.write(", ");
        p.print(i.env());
      }
      case StmtData.LdDots l -> {
        // This too
        w.write(", ");
        p.print(l.env());
      }
      case StmtData.DotsList d -> {
        for (var i = 0; i < d.names().size(); i++) {
          if (d.names().get(i).isPresent()) {
            p.print(d.names().get(i).get());
            w.write("=");
          }
          p.print(d.values().get(i));
          if (i < d.names().size() - 1) {
            w.write(", ");
          }
        }
      }
      case JumpData.Branch b -> {
        p.print(b.condition());
        w.write(" -> BB");
        p.print(bbToIdx.get(b.ifTrue()));
        w.write(" (if true) | BB");
        p.print(bbToIdx.get(b.ifFalse()));
        w.write(" (if false)");
      }
      case JumpData.Checkpoint c -> {
        // REACH: Print assumptions (tests and fail reasons) separately
        w.write("-> BB");
        p.print(bbToIdx.get(c.ifPass()));
        w.write(" (default) | BB");
        p.print(bbToIdx.get(c.ifFail()));
        w.write(" (if assume failed)");
      }
      case JumpData.Deopt d -> {
        p.print(d.frameState());
        if (d.reason().isPresent()) {
          assert d.trigger().isPresent();
          w.write(", ");
          p.print(d.reason().get());
          w.write(", ");
          p.print(d.trigger().get());
        }
        if (d.escapedEnv()) {
          w.write("   !");
        }
      }
      default -> {
        if (!(data instanceof Record r)) {
          throw new AssertionError("InstrData should all be records, this one isn't:" + data);
        }
        var first = true;
        for (var c : data.getClass().getRecordComponents()) {
          if (first && c.getName().equals("ast") || c.getName().equals("ast1")) {
            // ASTs aren't stored in PIR
            continue;
          }

          if (first && c.isAnnotationPresent(IsEnv.class)) {
            // This is the last argument and it's an env, but it's also the first argument.
            // PIR instructions with no non-env arguments and an env have a leading comma, due to
            // the way they are printed and it wasn't worth the effort to fix.
            w.write(", ");
          }

          if (first) {
            first = false;
          } else {
            w.write(", ");
          }
          p.print(Reflection.getComponent(r, c));
        }
      }
    }
  }

  /** The given printer must have {@link ArgContext}. */
  private void printCallArgs(Call_<?> c, Printer p) {
    var w = p.writer();
    var names = c.explicitNames();

    w.write("(");
    for (var i = 0; i < c.args().size(); i++) {
      if (names != null && names.get(i).isPresent()) {
        p.print(names.get(i).get());
        w.write("=");
      }
      p.print(c.args().get(i));
      if (i < c.args().size() - 1) {
        w.write(", ");
      }
    }
    w.write(")");
  }

  private class ArgContext {
    // This overrides all printers for nodes when they are printed in this context, so we can call
    // e.g. `p.print(rValue)` and it dispatches this.
    @PrintMethod
    private void printNodeInInstrOrPhi(Node self, Printer p) {
      p.print(nodeToPirId.get(self));
    }

    @PrintMethod
    private void printPirType(PirType self, Printer p) {
      switch (self) {
        case NativeType nativeType -> p.writer().write(nativeType.pirName());
        case RType_(var rType) -> p.print(rType);
      }
    }

    @PrintMethod
    private void printRType(RType self, Printer p) {
      var w = p.writer();

      if (self.isNothing()) {
        w.write("()");
        return;
      }
      assert self.promise() != null && self.attributes() != null;
      var strict = self.strict();
      assert strict.attributes() != null;

      // Base type
      if (self.missing() == Troolean.YES) {
        w.write("miss");
      } else if (Objects.equals(self.exactValue(), SEXPs.UNBOUND_VALUE)) {
        w.write("_");
      } else if (strict.base() != null && strict.base().sexpType() != null) {
        w.write(Objects.requireNonNull(strict.base().sexpType()).toString().toLowerCase());
        if (self.missing() != Troolean.NO) {
          w.write(" | miss");
        }
      } else if (strict.primVec() != null
          && strict.primVec().isNumericOrLogical() == Troolean.YES) {
        w.write("num");
        if (self.missing() != Troolean.NO) {
          w.write(" | miss");
        }
      } else {
        w.write("val");
        if (self.missing() != Troolean.NO) {
          w.write('?');
        }
      }

      // Attributes
      if (strict.primVec() != null) {
        if (strict.primVec().isScalar() == Troolean.YES) {
          w.write('$');
        }
        if (strict.primVec().hasNAOrNaN() == NoOrMaybe.NO) {
          w.write('#');
        }
      }
      if (self.promise().isLazy() != Troolean.NO) {
        w.write('^');
      } else if (self.promise().isPromise() != Troolean.NO) {
        w.write("~");
      }
      if (strict.attributes().isEmpty()) {
        w.write('-');
      } else if (strict.primVec() != null && strict.primVec().fastAccess() == Troolean.YES) {
        w.write('_');
      } else if (strict.attributes().isObject() == Troolean.NO) {
        w.write('+');
      }
    }

    @PrintMethod
    private void printEffects(REffects self, Printer p) {
      var w = p.writer();

      if (self.size() > REffect.values().length / 2) {
        w.write('!');
        self = REffects.ARBITRARY.without(self);
      }
      for (var flag : self) {
        w.write(
            switch (flag) {
              case Visibility -> 'v';
              case Warn -> 'w';
              case Error -> 'e';
              case Reflection -> 'r';
              case LeaksNonEnvArg -> 'l';
              case ChangesContext -> 'C';
              case ReadsEnvArg -> 'R';
              case WritesEnvArg -> 'W';
              case LeaksEnvArg -> 'L';
              case TriggerDeopt -> 'D';
              case SemiArbitrary -> 'X';
            });
      }
    }

    @PrintMethod
    private void parseBcPosition(BcPosition self, Printer p) {
      var w = p.writer();

      // PIR stores the bytecode address in memory, but we don't
      w.write("0xinvalid");

      p.withContext(null).print(self);
    }

    @PrintMethod
    private void parseFeedbackOrigin(FeedbackOrigin self, Printer p) {
      var w = p.writer();

      // PIR stores the bytecode address in memory, but we don't
      w.write("0xinvalid");

      w.write('[');
      p.withContext(null).print(self);
      w.write(']');
    }
  }
}

class PirIdToNodeMap {
  private final HashMap<PirId, Node> localNamed = new HashMap<>();
  private final List<Pair<PirId, Node>> definedAfterUse = new ArrayList<>();

  void put(PirId pirId, Node node) {
    if (!pirId.isLocal()) {
      throw new IllegalArgumentException("PirId must be local");
    }
    if (pirId.isAnonymous()) {
      throw new IllegalArgumentException(
          "PirId must be named (NodeToPirIdMap allows mapping nodes to anonymous pir IDs, but vice versa doesn't make sense)");
    }
    localNamed.put(pirId, node);
  }

  Node get(PirId id) {
    if (localNamed.containsKey(id)) {
      return localNamed.get(id);
    }

    try {
      return id.getGlobal();
    } catch (UnsupportedOperationException e) {
      if (e.getMessage().startsWith("PIR ID not global:")) {
        var node = new InvalidNode("defined_after_use");
        definedAfterUse.add(Pair.of(id, node));
        return node;
      }
      throw e;
    }
  }

  void patchDefinedAfterUse(BatchSubst subst) {
    for (var idAndNode : definedAfterUse) {
      var id = idAndNode.first();
      var node = idAndNode.second();
      if (!localNamed.containsKey(id)) {
        throw new IllegalArgumentException("PIR ID used but not defined: " + id);
      }
      subst.stage(node, localNamed.get(id));
    }
  }
}

class NodeToPirIdMap {
  private final HashMap<Node, PirId> local = new HashMap<>();

  void put(Node node, PirId pirId) {
    if (!pirId.isLocal()) {
      throw new IllegalArgumentException("PirId must be local");
    }
    local.put(node, pirId);
  }

  PirId get(Node node) {
    if (node.cfg() == null) {
      assert !local.containsKey(node)
          : "Global node has a recorded PirId, which only local nodes should have: " + node;
      return PirId.global(node);
    }

    if (local.containsKey(node)) {
      return local.get(node);
    }

    if (node instanceof InstrOrPhi p) {
      return PirId.of(p, 999, 999);
    }

    throw new IllegalArgumentException("Local node not seen before: " + node);
  }
}

abstract sealed class PirId {
  private final String id;
  private final String name;

  static PirId global(Node global) {
    if (global.cfg() != null) {
      throw new IllegalArgumentException("node must be global i.e. not be in a CFG");
    }
    return new GlobalNamed(global);
  }

  static PirId of(InstrOrPhi instrOrPhi, int bbIndex, int instrIndex) {
    return (instrOrPhi instanceof Instr i && i.data() instanceof StmtData.Void)
        ? new PirId.Anonymous()
        : new PirId.Local(
            (instrOrPhi instanceof RValue r && r.isEnv() == Troolean.YES ? "e" : "%")
                + bbIndex
                + "."
                + instrIndex);
  }

  private static final class GlobalNamed extends PirId {
    private final Node node;

    GlobalNamed(Node node) {
      this(node, node.id().name());
    }

    GlobalNamed(Node node, String id) {
      super(id, id);
      this.node = node;
    }

    @Override
    Node getGlobal() {
      return node;
    }
  }

  private static final class GlobalLogical extends PirId {
    private final Logical value;

    GlobalLogical(Logical value) {
      super(
          switch (value) {
            case TRUE -> "true";
            case FALSE -> "false";
            case NA -> "na-lgl";
          },
          "_" + value);
      this.value = value;
    }

    @Override
    Node getGlobal() {
      return Constant.logical(value);
    }
  }

  private static final class GlobalInt extends PirId {
    private final int value;

    GlobalInt(int value) {
      super(value + "L", "_" + value + "L");
      this.value = value;
    }

    @Override
    Node getGlobal() {
      return Constant.integer(value);
    }
  }

  private static final class GlobalReal extends PirId {
    private final double value;

    GlobalReal(double value) {
      super(Double.toString(value), "_" + Double.toString(value).replace('.', '_'));
      this.value = value;
    }

    @Override
    Node getGlobal() {
      return Constant.real(value);
    }
  }

  private static final class GlobalString extends PirId {
    private final String value;

    GlobalString(String value) {
      super(Strings.quote(value), "_string");
      this.value = value;
    }

    @Override
    Node getGlobal() {
      return Constant.string(value);
    }
  }

  private static final class GlobalNotFullySerialized extends PirId {
    GlobalNotFullySerialized(String desc) {
      super("<" + desc + ">", "_data");
    }

    @Override
    Node getGlobal() {
      return InvalidNode.todoGlobal();
    }
  }

  private static final class Local extends PirId {
    Local(String id) {
      super(id, id.replace('%', 'n').replace('.', '_'));
    }

    @Override
    boolean isLocal() {
      return true;
    }
  }

  private static final class Anonymous extends PirId {
    Anonymous() {
      super("", "");
    }

    @Override
    boolean isLocal() {
      return true;
    }

    @Override
    boolean isAnonymous() {
      return true;
    }
  }

  // ???: Can more globals be directly referenced in PIR? If so, we'll need more parsers, and also
  // may need to elaborate the representation so that we can fully reconstruct here (and maybe
  // develop some "incomplete" representation to parse them for testing when we can't).

  @ParseMethod(SkipWhitespace.NONE)
  private static PirId parse(Parser p) {
    // This code is really bad, and special-cases all the things that can be encountered where a
    // "PIR node" (e.g. %0.1, e2.3) may be, since these can also be SEXPs, which are printed in a
    // weird way (e.g. single quote is a valid "PIR node").
    var s = p.scanner();
    var sb = new StringBuilder();
    return switch (s.peekChar()) {
      case ',', ' ' -> new PirId.Anonymous();
      case '=' -> {
        s.assertAndSkip('=');
        yield new PirId.GlobalNamed(Constant.symbol("="));
      }
      case '~' -> {
        s.assertAndSkip('~');
        yield new PirId.GlobalNamed(Constant.symbol("="));
      }
      case '<' -> {
        if (s.trySkip("<-")) {
          yield new PirId.GlobalNamed(Constant.symbol("<-"));
        } else if (s.trySkip("<<-")) {
          yield new PirId.GlobalNamed(Constant.symbol("<--"));
        }

        // e.g. `<blt list>`
        s.assertAndSkip('<');
        var desc = s.readUntil('>');
        s.assertAndSkip('>');
        yield new PirId.GlobalNotFullySerialized(desc);
      }
      case '?' -> {
        s.assertAndSkip('?');
        yield new PirId.GlobalNamed(StaticEnv.NOT_CLOSED);
      }
      case '%', 'e' -> {
        if (s.trySkip("elided")) {
          yield new PirId.GlobalNamed(StaticEnv.ELIDED);
        } else if (s.trySkip("expression")) {
          yield new PirId.GlobalNamed(Constant.symbol("expression"));
        } else if (s.nextCharsAre("evalseq")
            || s.nextCharsAre("elNamed")
            || s.nextCharsAre("eval_A")) {
          throw s.fail("non-trivial SEXP constant");
        }

        sb.appendCodePoint(s.readChar());
        sb.append(s.readUInt());
        s.assertAndSkip('.');
        sb.append('.');
        sb.append(s.readUInt());
        yield new PirId.Local(sb.toString());
      }
      case '"' -> {
        var content = p.parse(String.class);
        if (content.contains("\n")) {
          // May be a standalone double quote, which produces weird error messages.
          throw s.fail("non-trivial SEXP constant");
        }
        yield new PirId.GlobalString(content);
      }
      case '-', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' -> {
        if (s.trySkip("-nan")) {
          yield new PirId.GlobalReal(Double.NaN);
        }
        var num = s.readDecimalString();
        var isInteger = false;
        try {
          if (s.trySkip('L')) {
            isInteger = true;
            yield new PirId.GlobalInt(Integer.parseInt(num));
          } else {
            yield new PirId.GlobalReal(Double.parseDouble(num));
          }
        } catch (NumberFormatException e) {
          throw new AssertionError(
              "Unexpected number format for " + (isInteger ? "int" : "real") + ": " + num, e);
        }
      }
      case '(', '{' -> {
        // REACH: these builtins
        var c = s.readChar();
        yield new PirId.GlobalNamed(new InvalidNode("TODO_builtin"), Character.toString(c));
      }
      case '!', '$', '@', '[' -> throw s.fail("non-trivial SEXP constant");
      case -1 -> throw s.fail("PIR ID", "EOF");
      default -> {
        if (s.nextCharsAre("::")
            || s.nextCharIs('.')
            || s.nextCharsAre("is.")
            || s.nextCharsAre("isNamespace")
            || s.nextCharsAre("getNamespace")
            || s.nextCharsAre("packageSlot")
            || s.nextCharsAre("deparse")
            || s.nextCharsAre("list")) {
          // Usually (not guaranteed!) to be `some_fn(...)`.
          var name = s.readUntil('(');
          s.assertAndSkip('(');
          var args = s.readUntil(c -> c == ')' || c == '>');
          var ended = s.trySkip(')');
          if (!ended) {
            s.assertAndSkip('>');
          }
          yield new PirId.GlobalNotFullySerialized(name + '(' + args + (ended ? ')' : "..."));
        } else if (s.trySkip("function")) {
          throw s.fail("non-trivial SEXP constant");
        }

        if (s.trySkip("true") || s.trySkip("opaqueTrue")) {
          yield new PirId.GlobalLogical(Logical.TRUE);
        } else if (s.trySkip("false") || s.trySkip("opaqueFalse")) {
          yield new PirId.GlobalLogical(Logical.FALSE);
        } else if (s.trySkip("na-lgl")) {
          yield new PirId.GlobalLogical(Logical.NA);
        } else if (s.trySkip("NA")) {
          // PIR doesn't store what kind of NA.
          yield new PirId.GlobalReal(Constants.NA_REAL);
        } else if (s.trySkip("nil")) {
          yield new PirId.GlobalNamed(new Constant(SEXPs.NULL));
        } else if (s.trySkip("missingArg")) {
          yield new PirId.GlobalNamed(new Constant(SEXPs.MISSING_ARG));
        }

        for (var deoptType : org.prlprg.rshruntime.DeoptReason.Type.values()) {
          var deoptTypeName =
              StringCase.convert(deoptType.name(), StringCase.SCREAMING_SNAKE, StringCase.PASCAL);
          if (s.nextCharsAre(deoptTypeName + '@')) {
            yield new PirId.GlobalNamed(
                new ConstantDeoptReason(p.parse(org.prlprg.rshruntime.DeoptReason.class)));
          }
        }

        // REACH: other globals, either must be in GlobalNamed if we want to keep the name for the
        //  Java compiler, or explicitly handle above otherwise.

        if (Character.isLetter(s.peekChar())) {
          sb.append(p.parse(RegSymSXP.class).name());
          var name = sb.toString();
          yield new PirId.GlobalNamed(
              Objects.requireNonNull(
                  StaticEnv.ALL.containsKey(name)
                      ? StaticEnv.ALL.get(name)
                      : InvalidNode.todoGlobal()),
              name);
        }

        throw s.fail("unhandled start to PIR ID: " + Strings.quote(s.peekChar()));
      }
    };
  }

  protected PirId(String id, String name) {
    this.id = id;
    this.name = name;
  }

  boolean isLocal() {
    return false;
  }

  boolean isAnonymous() {
    return false;
  }

  Node getGlobal() {
    throw new UnsupportedOperationException("PIR ID not global: " + this);
  }

  /** Convert to PIR name. */
  String name() {
    return name;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof PirId pirId) || pirId instanceof Anonymous) return false;
    assert Objects.equals(name, pirId.name) == Objects.equals(id, pirId.id);
    return Objects.equals(name, pirId.name);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name);
  }

  @Override
  public String toString() {
    return id;
  }

  @PrintMethod
  private void print(Printer p) {
    p.writer().write(id);
  }
}
