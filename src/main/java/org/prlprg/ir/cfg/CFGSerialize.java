package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Formatter;
import java.util.HashMap;
import java.util.Map;
import java.util.function.Function;
import java.util.function.Predicate;
import java.util.function.Supplier;
import java.util.stream.IntStream;
import javax.annotation.Nullable;
import org.prlprg.ir.type.REffects;
import org.prlprg.ir.type.RType;
import org.prlprg.util.Strings;

interface CFGSerialize extends CFGQuery, CFGIntrinsicMutate {

  /**
   * Parses <a href="https://github.com/reactorlabs/rir/blob/master/documentation/pir.md">PIR debug
   * representation</a> into multiple CFGs.
   *
   * @param cfgFactory Creates CFGs e.g. in a {@link org.prlprg.ir.closure.ClosureVersion
   *     ClosureVersion} and/or with already-added {@link CFGObserver}s.
   */
  static ImmutableList<CFG> manyFromPIR(String pirString, Supplier<CFG> cfgFactory) {
    return Arrays.stream(pirString.splitWithDelimiters("^BB0$", 0))
        .map(s -> CFGSerialize.fromPIR(s, cfgFactory))
        .collect(ImmutableList.toImmutableList());
  }

  /**
   * Parses <a href="https://github.com/reactorlabs/rir/blob/master/documentation/pir.md">PIR debug
   * representation</a> into a single CFG.
   *
   * @param cfgFactory Creates CFGs e.g. in a {@link org.prlprg.ir.closure.ClosureVersion
   *     ClosureVersion} and/or with already-added {@link CFGObserver}s.
   */
  static CFG fromPIR(String pirString, Supplier<CFG> cfgFactory) {
    var bbStrings = pirString.splitWithDelimiters("^BB", 0);
    var numBbs = bbStrings.length;
    var bbIndices =
        Arrays.stream(bbStrings)
            .map(
                bbString ->
                    Integer.parseUnsignedInt(
                        bbString,
                        "BB".length(),
                        Math.min(bbString.indexOf(' '), bbString.indexOf('\n')),
                        10))
            .toList();
    var bbInstrOrPhiStrings =
        Arrays.stream(bbStrings)
            .map(bbString -> bbString.lines().filter(l -> l.startsWith("  ")).toList())
            .toList();

    var pirIdToNode = new HashMap<String, Node>();
    for (var global : Node.GLOBALS) {
      pirIdToNode.put(global.id().name(), global);
    }

    var cfg = cfgFactory.get();
    var bbs = IntStream.range(0, numBbs).mapToObj(i -> cfg.addBB("BB" + i)).toList();
    for (int i = 0; i < numBbs; i++) {
      var bb = bbs.get(bbIndices.get(i));
      for (var instrOrPhiString : bbInstrOrPhiStrings.get(i)) {
        new CFGSerializeInstrOrPhiParser(
                bb, instrOrPhiString, j -> bbs.get(bbIndices.get(j)), pirIdToNode)
            .parse();
      }
    }
    return cfg;
  }

  /**
   * Serializes the CFG into <a
   * href="https://github.com/reactorlabs/rir/blob/master/documentation/pir.md">PIR debug
   * representation</a>.
   */
  default String toPir() {
    // Map BBs to indices in BFS order, like PIR does
    var bfs = new CFGIterator.Bfs((CFG) this);
    var bbToIdx = new HashMap<BB, Integer>(numBBs());
    var bbs = new ArrayList<BB>(numBBs());
    while (bfs.hasNext()) {
      bbToIdx.put(bfs.next(), bbs.size());
      bbs.add(bfs.next());
    }
    for (var id : bfs.remainingBBIds()) {
      var bb = get(id);
      bbToIdx.put(bb, bbs.size());
      bbs.add(bb);
    }

    var nodeToPirId = new HashMap<Node, String>();
    for (var global : Node.GLOBALS) {
      nodeToPirId.put(global, global.id().name());
    }

    var sb = new StringBuilder();
    var f = new Formatter(sb);
    for (var i = 0; i < numBBs(); i++) {
      var bb = bbs.get(i);

      f.format("BB%4d", i);
      if (!bb.predecessors().isEmpty()) {
        f.format("<- [%s]", Strings.join(",", bbToIdx::get, bb.predecessors()));
      }
      sb.append('\n');

      var j = 0;
      for (var instrOrPhi : bb) {
        nodeToPirId.put(instrOrPhi, CFGSerializeInstrOrPhiPrinter.idOf(instrOrPhi, i, j));
        new CFGSerializeInstrOrPhiPrinter(instrOrPhi, sb, f, bbToIdx, nodeToPirId).print();
        j++;
      }
    }
    return sb.toString();
  }
}

class CFGSerializeInstrOrPhiParser {
  private final BB bb;
  private final String instrString;
  private final Function<Integer, BB> getBB;
  private final Map<String, Node> pirIdToNode;
  private int index = 0;

  CFGSerializeInstrOrPhiParser(
      BB bb, String instrString, Function<Integer, BB> getBB, Map<String, Node> pirIdToNode) {
    this.bb = bb;
    this.instrString = instrString;
    this.getBB = getBB;
    this.pirIdToNode = pirIdToNode;

    assert instrString.startsWith("  ") : "All parsed instructions start with 2 spaces";
    assert instrString
            .chars()
            .noneMatch(c -> c != ' ' && !Character.isWhitespace(instrString.charAt(index)))
        : "didn't expect PIR instruction to contain non-space whitespace";
    index = 2;
  }

  void parse() {
    if (trySkip("goto BB")) {
      var targetBBIndex = lexUInt();
      var targetBB = getBB.apply(targetBBIndex);
      bb.addJump("", new JumpData.Goto(targetBB));
      return;
    }

    var rType = parseType();
    var pirId = parsePirId();
    parseEquals();
    var instrTypeName = parseInstrTypeName();
    var effects = parseEffects();
    var instr = parseArgs(instrTypeName, pirId, rType, effects);

    lexUntilWhitespace();
    assert index == instrString.length() : "Expected EOL after parsing instruction";

    pirIdToNode.put(pirId, instr);
  }

  private @Nullable RType parseType() {
    // TODO actually parse type, for now we just skip
    lexUntil(Character::isDigit);
    index--;
    return null;
  }

  private String parsePirId() {
    skipWhitespace();
    var id = lexUntilWhitespace();
    assert id.startsWith("%") || id.startsWith("e");
    return id;
  }

  private void parseEquals() {
    skipWhitespace();
    assertAndSkip("=");
  }

  private String parseInstrTypeName() {
    skipWhitespace();
    return lexUntilWhitespace();
  }

  private REffects parseEffects() {
    // TODO actually parse effects, for now we just skip
    // We take advantage of the fact that PIR pads everything before here, and everything before
    // here never exceeds its padding, more than, at most (if there are >100 BBs), 1 character.
    // (Implicit here is that there will never be >1000 BBs, or >100 instructions in a BB).
    index = 50;
    return REffects.ARBITRARY;
  }

  private InstrOrPhi parseArgs(
      String instrTypeName, String pirId, @Nullable RType rType, REffects effects) {
    var name = pirId.substring(1);
    skipWhitespace();

    var instrOrPhi =
        switch (instrTypeName) {
          case "Phi" -> {
            // PIR phi nodes are always `RType` values (PIR's equivalent of `RValue`)
            var phi = bb.addPhi(RValue.class, name);
            do {
              var argPirId = lexUntil(':');
              assertAndSkip(":BB");
              var argBBIndex = lexUInt();
              var argNode = (RValue) pirIdToNode.get(argPirId);
              var argBB = getBB.apply(argBBIndex);

              bb.addPhiInput(phi, argBB, argNode);

              skipWhitespace();
            } while (trySkip(", "));
            yield phi;
          }
          case "LdArg" -> {
            var argIndex = lexUInt();
            yield bb.append(name, new StmtData.LdArg(argIndex));
          }
          default ->
              throw new UnsupportedOperationException(
                  "Unhandled instruction type: " + instrTypeName);
        };

    // rType is null if the instruction corresponds to a `NativeType`
    // (PIR's equivalent of not `RValue`). Otherwise we know it's an `RValue` and can assert the
    // type. Note that it may be a subset due to different type calculations.
    if (rType != null) {
      var rValue = (RValue) instrOrPhi;
      assert rValue.type().isSubsetOf(rType)
          : "Expected type of "
              + rValue
              + " to be a subset of "
              + rType
              + ", but found "
              + rValue.type();
    }
    //noinspection RedundantIfStatement
    if (instrOrPhi instanceof Instr instr) {
      assert instr.effects().isSubsetOf(effects)
          : "Expected effects of " + instr + " to be " + effects + ", but found " + instr.effects();
    }

    return instrOrPhi;
  }

  private int lexUInt() {
    return Integer.parseUnsignedInt(lexUntilWhitespace(), 10);
  }

  private String lexUntilWhitespace() {
    return lexUntil(' ');
  }

  private String lexUntil(char c) {
    var start = index;
    while (instrString.charAt(index) != c) {
      index++;
    }
    return instrString.substring(start, index);
  }

  private String lexUntil(Predicate<Character> charPredicate) {
    var start = index;
    while (!charPredicate.test(instrString.charAt(index))) {
      index++;
    }
    return instrString.substring(start, index);
  }

  private boolean trySkip(String s) {
    if (nextCharsAre(s)) {
      index += s.length();
      return true;
    }
    return false;
  }

  private void assertAndSkip(String s) {
    assert nextCharsAre(s)
        : "Expected next characters to be \""
            + s
            + "\", but found \""
            + instrString.substring(index)
            + "\"";
    index += s.length();
  }

  private void skipWhitespace() {
    while (instrString.charAt(index) == ' ') {
      index++;
    }
  }

  private boolean nextCharsAre(String s) {
    return instrString.regionMatches(index, s, 0, s.length());
  }
}

class CFGSerializeInstrOrPhiPrinter {
  private final InstrOrPhi instrOrPhi;
  private final StringBuilder sb;
  private final Formatter f;
  private final Map<BB, Integer> bbToIdx;
  private final Map<Node, String> nodeToPirId;

  static String idOf(InstrOrPhi instrOrPhi, int bbIndex, int instrIndex) {
    return (instrOrPhi instanceof Env ? "e" : "%") + bbIndex + "." + instrIndex;
  }

  CFGSerializeInstrOrPhiPrinter(
      InstrOrPhi instrOrPhi,
      StringBuilder sb,
      Formatter f,
      Map<BB, Integer> bbToIdx,
      Map<Node, String> nodeToPirId) {
    this.instrOrPhi = instrOrPhi;
    this.sb = sb;
    this.f = f;
    this.bbToIdx = bbToIdx;
    this.nodeToPirId = nodeToPirId;
  }

  void print() {
    sb.append("  ");
    if (instrOrPhi instanceof Jump j && j.data() instanceof JumpData.Goto(var next)) {
      sb.append("goto BB").append(bbToIdx.get(next));
    } else {
      printType();
      printPirId();
      sb.append(" = ");
      printInstrTypeName();
      printEffects();
      printArgs();
    }
    sb.append('\n');
  }

  private void printType() {
    var typeStr =
        switch (instrOrPhi) {
            // case CheckpointInstr i -> "cp";
            // case FrameStateInstr i -> "fs";
          case Instr i when i.returns().isEmpty() -> "void";
            // TODO: Print types in PIR's format, not ours
          case RValue r -> r.type();
          default ->
              throw new UnsupportedOperationException("Unhandled instruction to print PIR type of");
        };
    f.format("%16s", typeStr);
  }

  private void printPirId() {
    f.format("%5s", nodeToPirId.get(instrOrPhi));
  }

  private void printInstrTypeName() {
    var name =
        switch (instrOrPhi) {
          case Phi<?> ignored -> "Phi";
          case Stmt i when i.data() instanceof StmtData.StVar s && s.isArg() -> "StArg";
            // These namings in PIR are very confusing, so they are different in the Java compiler
          case Stmt i when i.data() instanceof StmtData.IsMissing -> "Missing";
          case Stmt i when i.data() instanceof StmtData.MkProm -> "MkArg";
          case Stmt i when i.data() instanceof StmtData.StrictifyProm -> "UpdatePromise";
          case Stmt i when i.data() instanceof StmtData.GnuRIs -> "Is";
          case Instr i -> i.data().getClass().getSimpleName();
        };
    f.format("%20s", name);
  }

  private void printEffects() {
    var effects =
        switch (instrOrPhi) {
          case Phi<?> ignored -> "";
            // TODO: Print effects in PIR's format, not ours
          case Instr i -> i.effects();
        };
    f.format("%5s", effects);
  }

  private void printArgs() {
    switch (instrOrPhi) {
      case Phi<?> p -> {
        for (var input : p.inputs()) {
          sb.append(nodeToPirId.get(input.node()))
              .append(":BB")
              .append(bbToIdx.get(input.incomingBb()));
        }
      }
      case Instr i -> printDataArgs(i.data());
    }
  }

  private void printDataArgs(InstrData<?> data) {
    switch (data) {
      case StmtData.LdVar(var name, var env) -> f.format("%s, %s", name, env);
      case StmtData.StVar(var name, var value, var env, var ignored) ->
          f.format("%s, %s, %s", name, value, env);
      case StmtData.LdArg(var idx) -> f.format("%d", idx);
      default ->
          throw new UnsupportedOperationException("Unhandled instruction to print PIR args of");
    }
  }
}
