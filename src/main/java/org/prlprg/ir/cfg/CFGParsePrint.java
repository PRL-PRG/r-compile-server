package org.prlprg.ir.cfg;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.annotation.Nullable;
import org.prlprg.ir.cfg.Phi.Input;
import org.prlprg.ir.closure.Closure;
import org.prlprg.ir.closure.ClosureVersion;
import org.prlprg.ir.closure.Promise;
import org.prlprg.parseprint.ClassProvidingContext;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.parseprint.HasSEXPParseContext;
import org.prlprg.sexp.parseprint.HasSEXPPrintContext;
import org.prlprg.sexp.parseprint.SEXPParseContext;
import org.prlprg.sexp.parseprint.SEXPPrintContext;

/** CFG's syntax is inspired by <a href="https://mlir.llvm.org/docs/LangRef/">MLIR</a>. */
public interface CFGParsePrint {
  @ParseMethod
  private static CFG parse(Parser p) {
    var s = p.scanner();

    var cfg = new CFG();

    var ctx = new CFGParseOrPrintContext(p.context(), cfg);
    var cfgP = p.withContext(ctx);
    while (!s.isAtEof()) {
      if (s.nextCharIs('^')) {
        // BB (it adds itself when parsed)
        cfgP.parse(BB.class);
      } else if (s.trySkip("//")) {
        // Comment
        s.readPastEndOfLine();
      } else {
        // Not a BB or comment = end of CFG
        break;
      }
    }

    ctx.commitPatches();

    return cfg;
  }

  @PrintMethod
  private static void print(CFG cfg, Printer p) {
    var w = p.writer();

    var cfgP = p.withContext(new CFGParseOrPrintContext(p.context(), cfg));
    var iter = new CFGIterator.Bfs(cfg);
    // Always has at least one BB: the entry.
    cfgP.print(iter.next());
    iter.forEachRemaining(
        bb -> {
          w.write('\n');
          cfgP.print(bb);
        });

    if (!iter.remainingBBIds().isEmpty()) {
      w.write("\n// !!! Free BBs:");
      for (var bbId : iter.remainingBBIds()) {
        w.write('\n');
        cfgP.print(cfg.get(bbId));
      }
    }
  }
}

class CFGParseOrPrintContext implements HasSEXPParseContext, HasSEXPPrintContext {
  private final @Nullable Object outerContext;
  private final SEXPParseContext sexpParseContext;
  private final SEXPPrintContext sexpPrintContext;
  private final CFG cfg;

  /**
   * Node IDs that have been referenced but not yet defined, and the placeholder nodes currently in
   * those references.
   *
   * <p>Once the node is defined, we stage a replacement for the placeholder to be replaced with the
   * real node, and remove the ID from the set. If the node is never defined and we finished parsing
   * the CFG, we raise an error.
   */
  private final Map<NodeId<?>, InvalidNode> pendingPatchNodes = new HashMap<>();

  private final BatchSubst patchSubst = new BatchSubst();
  private final Map<Phi<Node>, List<Phi.Input<Node>>> delayedPhiInputs = new HashMap<>();

  CFGParseOrPrintContext(@Nullable Object outerContext, CFG cfg) {
    this.outerContext = outerContext;
    this.sexpParseContext =
        outerContext instanceof HasSEXPParseContext h
            ? h.sexpParseContext()
            : new SEXPParseContext();
    this.sexpPrintContext =
        outerContext instanceof HasSEXPPrintContext h
            ? h.sexpPrintContext()
            : new SEXPPrintContext();
    this.cfg = cfg;
  }

  @Override
  public SEXPParseContext sexpParseContext() {
    return sexpParseContext;
  }

  public SEXPPrintContext sexpPrintContext() {
    return sexpPrintContext;
  }

  @ParseMethod
  private BB parseBB(Parser p) {
    var s = p.scanner();

    var id = p.parse(BBId.class);
    var bb = cfg.contains(id) ? cfg.get(id) : cfg.addBBWithId(id);

    var bbP = p.withContext(new BBContext(bb));

    // Phis
    if (s.trySkip('(')) {
      while (!s.trySkip(')')) {
        bbP.parse(Phi.class);
        if (s.trySkip(')')) {
          break;
        }
        s.assertAndSkip(',');
      }
    }

    // Instructions (statements and jump)
    s.assertAndSkip(':');
    @Nullable Instr instr;
    do {
      instr = bbP.parseOptional(Instr.class).orElse(null);
      s.assertAndSkip(';');
    } while (!(instr instanceof Jump) && instr != null);

    return bb;
  }

  @PrintMethod
  private void printBB(BB bb, Printer p) {
    var w = p.writer();
    var bbP = p.withContext(new BBContext(bb));

    p.print(bb.id());

    w.runIndented(
        () -> {
          // Phis
          if (!bb.phis().isEmpty()) {
            w.runIndented(
                () -> {
                  w.write("(\n");
                  var first = true;
                  for (var phi : bb.phis()) {
                    if (first) {
                      first = false;
                    } else {
                      w.write(",\n");
                    }
                    bbP.print(phi);
                  }
                  w.write(')');
                });
          }

          // Instructions (statements and jump)
          w.write(":\n");
          // Statements
          for (var stmt : bb.stmts()) {
            bbP.print(stmt);
            w.write(";\n");
          }
          // Jump
          if (bb.jump() != null) {
            bbP.print(bb.jump());
          } else {
            w.write("null");
          }
        });
    w.write(";");
  }

  /**
   * Patch nodes that were referenced before they were defined, and phis that referenced incoming
   * incoming blocks before they became predecessors.
   */
  void commitPatches() {
    for (var phiAndDelayedInputs : delayedPhiInputs.entrySet()) {
      var phi = phiAndDelayedInputs.getKey();
      var delayedInputs = phiAndDelayedInputs.getValue();
      for (var input : delayedInputs) {
        phi.setInput(input);
      }
    }

    // This has to be after the `for` loop.
    patchSubst.commit(cfg);
  }

  class BBContext implements HasSEXPParseContext, HasSEXPPrintContext {
    private final @Nullable BB bb;
    private final DataContext dataContext = new DataContext();

    public BBContext(@Nullable BB bb) {
      this.bb = bb;
    }

    @Override
    public SEXPParseContext sexpParseContext() {
      return sexpParseContext;
    }

    @Override
    public SEXPPrintContext sexpPrintContext() {
      return sexpPrintContext;
    }

    @ParseMethod
    private Phi<?> parsePhi(Parser p) {
      if (bb == null) {
        throw new UnsupportedOperationException("Can't parse phis or instructions without `bb`");
      }
      var s = p.scanner();

      // A newly-created instruction or phi ID's type parameter is allowed to be anything until it
      // gets passed to the `InstrOrPhiImpl` constructor, so the unchecked cast is safe.
      @SuppressWarnings("unchecked")
      var id = (NodeId<? extends Phi<? extends Node>>) p.parse(NodeId.class);
      ensureIdNotTakenByAnonymous(id, p);

      var inputP = p.withContext(dataContext);
      var inputs = new ArrayList<Phi.Input<Node>>();
      s.assertAndSkip("= φ(");
      while (!s.trySkip(')')) {
        @SuppressWarnings("unchecked")
        var input = (Input<Node>) inputP.parse(Phi.Input.class);
        inputs.add(input);
        if (s.trySkip(')')) {
          break;
        }
        s.assertAndSkip(',');
      }

      if (inputs.isEmpty()) {
        throw s.fail(
            "Phis must have at least one input to parse (to be valid, they must have at least two)");
      }
      var clazz = inputs.getFirst().node().getClass();

      var phi = bb.addPhiWithId(id, clazz);

      var delayedInputs = new ArrayList<Input<Node>>(inputs.size());
      for (var input : inputs) {
        if (phi.hasIncomingBB(input.incomingBB())) {
          phi.setInput(input);
        } else {
          delayedInputs.add(input);
        }
      }
      if (!delayedInputs.isEmpty()) {
        delayedPhiInputs.put(phi, delayedInputs);
      }

      patchIfPending(phi);
      return phi;
    }

    @PrintMethod
    private void printPhi(Phi<?> phi, Printer p) {
      var w = p.writer();

      p.print(phi.id());

      var inputP = p.withContext(dataContext);
      w.write(" = φ(");
      boolean first = true;
      for (var input : phi.inputs()) {
        if (first) {
          first = false;
        } else {
          w.write(", ");
        }
        inputP.print(input);
      }
      w.write(')');
    }

    @ParseMethod
    private Instr parseInstr(Parser p) {
      if (bb == null) {
        throw new UnsupportedOperationException("Can't parse phis or instructions without `bb`");
      }
      var s = p.scanner();

      // A newly-created instruction or phi ID's type parameter is allowed to be anything until it
      // gets passed to the `InstrOrPhiImpl` constructor, so the following unchecked casts are safe.
      NodeId<? extends Instr> id = null;
      if (s.nextCharIs('%')) {
        @SuppressWarnings("unchecked")
        var id1 = (NodeId<? extends Instr>) p.parse(NodeId.class);
        id = id1;
        s.assertAndSkip('=');
      }

      var data = p.withContext(dataContext).parse(InstrData.class);

      // This must go after `parse(InstrData.class)`, because the latter may re-assign some `Void`
      // instruction IDs. If it went before, one of those re-assigned IDs may have been assigned to
      // `id`, so it would no longer be free.
      if (id == null) {
        // ID doesn't matter
        id = cfg.<Instr>uniqueInstrOrPhiId();
      } else {
        ensureIdNotTakenByAnonymous(id, p);
      }

      var instr =
          switch (data) {
            case StmtData<?> stmtData -> {
              @SuppressWarnings("unchecked")
              var id1 = (NodeId<? extends Stmt>) id;
              yield bb.insertAtWithId(bb.stmts().size(), id1, stmtData);
            }
            case JumpData<?> jumpData -> {
              @SuppressWarnings("unchecked")
              var id1 = (NodeId<? extends Jump>) id;
              yield bb.addJumpWithId(id1, jumpData);
            }
          };

      patchIfPending(instr);
      return instr;
    }

    @PrintMethod
    private void printInstr(Instr instr, Printer p) {
      var w = p.writer();

      if (!instr.returns().isEmpty()) {
        p.print(instr.id());
        w.write(" = ");
      }

      w.runIndented(() -> p.withContext(dataContext).print(instr.data()));
    }

    /**
     * Edge-case: if `id` doesn't have a name, we could've given it to a `Void` instruction via
     * `CreateInstrWithNewId`. To solve this, we rename the `Void` to update its disambiguator.
     */
    private void ensureIdNotTakenByAnonymous(NodeId<? extends InstrOrPhi> id, Parser p) {
      var s = p.scanner();

      if (cfg.contains(id)) {
        var old = cfg.get(id);
        if (!old.returns().isEmpty()) {
          throw s.fail("Defined the same ID twice: " + id);
        }
        assert InstrOrPhiIdImpl.cast(id).name().isEmpty()
            : "expected ID of `Void` instruction we created to have no name";
        InstrOrPhiImpl.cast(old).setId(cfg.uniqueInstrOrPhiId());
      }
    }

    private void patchIfPending(Node node) {
      if (pendingPatchNodes.containsKey(node.id())) {
        patchSubst.stage(pendingPatchNodes.remove(node.id()), node);
      }
    }

    private class DataContext
        implements HasSEXPParseContext, HasSEXPPrintContext, ClassProvidingContext {
      @Override
      public SEXPParseContext sexpParseContext() {
        return sexpParseContext;
      }

      @Override
      public SEXPPrintContext sexpPrintContext() {
        return sexpPrintContext;
      }

      @Override
      public @Nullable Class<?> getClass(String className) {
        return InstrData.CLASSES.get(className);
      }

      @ParseMethod
      private InstrData<?> parseInstrData(Parser p) {
        return (InstrData<?>) p.parse(Record.class);
      }

      @ParseMethod
      private Phi.Input<?> parsePhiInput(Parser p) {
        var s = p.scanner();
        var node = p.parse(Node.class);
        s.assertAndSkip(':');
        var incomingBB = p.parse(BB.class);

        return new Phi.Input<>(incomingBB, node);
      }

      @PrintMethod
      private void printPhiInput(Phi.Input<?> input, Printer p) {
        p.print(input.node());
        p.writer().write(':');
        p.print(input.incomingBB());
      }

      // These four methods override all parsers for nodes when they are parsed in this context, so
      // we can call e.g. `p.parse(RValue.class)` and it dispatches this.
      @ParseMethod
      private BB parseBB(Parser p) {
        var id = p.parse(BBId.class);
        return cfg.contains(id) ? cfg.get(id) : cfg.addBBWithId(id);
      }

      @PrintMethod
      private void printBB(BB bb, Printer p) {
        p.print(bb.id());
      }

      @ParseMethod
      private Node parseNode(Parser p, Class<? extends Node> nodeClass) {
        var id = (NodeId<?>) p.parse(NodeId.class);

        // The ID may exist, but in a `Void` instruction that got assigned an "arbitrary" unused ID.
        // If this is the case, we want to rename that instruction and pretend the ID never existed.
        if (!(id instanceof GlobalNodeId<?>) && cfg.contains(id)) {
          var node = cfg.get(id);
          if (node instanceof Instr i && i.returns().isEmpty()) {
            assert InstrOrPhiIdImpl.cast(i.id()).name().isEmpty()
                : "expected ID of `Void` instruction we created to have no name";
            InstrOrPhiImpl.cast(i).setId(cfg.uniqueInstrOrPhiId());
            // `cfg.contains(id)` is now `false`.
          }
        }

        if (id instanceof GlobalNodeId<?> || cfg.contains(id)) {
          return cfg.get(id);
        } else if (pendingPatchNodes.containsKey(id)) {
          return pendingPatchNodes.get(id);
        } else {
          var placeholder = new InvalidNode(id.toString());
          pendingPatchNodes.put(id, placeholder);
          return placeholder;
        }
      }

      @PrintMethod
      private void printNode(Node node, Printer p) {
        p.print(node.id());
      }

      @ParseMethod
      private Closure parseInnerClosure(Parser p) {
        return p.withContext(outerContext).parse(Closure.class);
      }

      @PrintMethod
      private void printInnerClosure(Closure closure, Printer p) {
        p.withContext(outerContext).print(closure);
      }

      @ParseMethod
      private ClosureVersion parseInnerClosureVersion(Parser p) {
        var s = p.scanner();

        var closure = p.parse(Closure.class);
        s.assertAndSkip('#');
        var versionIndex = s.readUInt();

        return closure.getVersion(versionIndex);
      }

      @PrintMethod
      private void printInnerClosureVersion(ClosureVersion version, Printer p) {
        p.print(version.closure());
        p.writer().write('#');
        p.print(version.index());
      }

      @ParseMethod
      private Promise parsePromise(Parser p) {
        return p.withContext(outerContext).parse(Promise.class);
      }

      @PrintMethod
      private void printPromise(Promise promise, Printer p) {
        p.withContext(outerContext).print(promise);
      }

      // region custom `StmtData` and `JumpData`

      // TODO: Implement `ParseMethod` and `PrintMethod` better and fix `ParseMethod`, or revert all
      //  in this region
      // @ParseMethod
      // private InstrData<?> parseInstrData(Parser p) {
      //   var s = p.scanner();
      // }

      /* @ParseMethod
      private Call_<?> parseCallData(Parser p, Class<? extends Call_<?>> clazz) {
        var components = clazz.getRecordComponents();
        RecordComponent ast1Component = null;
        RecordComponent funComponent = null;
        RecordComponent explicitNamesComponent = null;
        RecordComponent argsComponent = null;
        for (var component : components) {
          switch (component.getName()) {
            case "ast1" -> ast1Component = component;
            case "fun" -> funComponent = component;
            case "explicitNames" -> explicitNamesComponent = component;
            case "args" -> argsComponent = component;
          }
        }
        assert ast1Component != null : "Call_ has no `ast1` component";
        assert funComponent != null : "Call_ has no `fun` component";
        assert argsComponent != null : "Call_ has no `args` component";

        var s = p.scanner();

        s.assertAndSkip(clazz.getSimpleName());
        s.assertAndSkip('(');

        var fun = p.parse(RValue.class);
        SymOrLangSXP astFun = null;
        if (s.trySkip('[')) {
          astFun = p.parse(SymOrLangSXP.class);
          s.assertAndSkip(']');
        }

        s.assertAndSkip('(');
        var explicitNames =
            explicitNamesComponent == null ? null : ImmutableList.<Optional<String>>builder();
        var args = ImmutableList.<RValue>builder();
        var astArgs = astFun == null ? null : ImmutableList.<TaggedElem>builder();
        if (!s.trySkip(')')) {
          do {
            var hasExplicitName =
                s.nextCharSatisfies(Names::isValidStartChar) && !NodeId.isNodeIdStart(s);
            String astName = null;
            if (hasExplicitName) {
              if (explicitNames == null) {
                throw s.fail(
                    "`"
                        + clazz.getSimpleName()
                        + "` doesn't have explicit names, but we encountered one");
              }

              astName = Names.read(s, true);
              explicitNames.add(Optional.of(astName));
            } else if (explicitNames != null) {
              explicitNames.add(Optional.empty());
            }

            // If this is `false` then `astName` is the explicit name, hence it's assigned above.
            // But if `true` it gets re-assigned.
            var hasExplicitAstName = s.trySkip('[');
            if (hasExplicitAstName) {
              if (astArgs == null) {
                throw new UnsupportedOperationException(
                    "`"
                        + clazz.getSimpleName()
                        + "` doesn't have an AST, but we encountered an AST name");
              }

              astName = s.nextCharIs(']') ? null : Names.read(s, true);
              s.assertAndSkip(']');
            }

            if (hasExplicitName || astName != null) {
              s.assertAndSkip('=');
            }

            args.add(p.parse(RValue.class));

            SEXP astDefaultValue;
            if (s.trySkip('[')) {
              astDefaultValue = p.parse(SEXP.class);
              s.assertAndSkip(']');
            } else {
              astDefaultValue = SEXPs.MISSING_ARG;
            }

            if (astArgs != null) {
              astArgs.add(new TaggedElem(astName, astDefaultValue));
            }
          } while (s.trySkip(','));
          s.assertAndSkip(')');
        }

        var ast = astFun == null ? null : SEXPs.lang(astFun, astArgs.build());

        var ctorArgs =
            Arrays.stream(components)
                .map(
                    component ->
                        switch (component.getName()) {
                          case "ast1" -> Optional.ofNullable(ast);
                          case "fun" -> fun;
                          case "explicitNames" -> Objects.requireNonNull(explicitNames).build();
                          case "args" -> args.build();
                          default -> {
                            s.assertAndSkip(component.getName());
                            s.assertAndSkip('=');
                            yield p.parse(component.getGenericType(), SkipWhitespace.ALL);
                          }
                        })
                .toArray();
        return Reflection.construct(clazz, ctorArgs);
      }

      @PrintMethod
      private void printCallData(Call_<?> call, Printer p) {
        var clazz = call.getClass();
        var ast = call.ast();
        var fun = call.fun();
        var explicitNames = call.explicitNames();
        var args = call.args();
        var w = p.writer();

        w.write(clazz.getSimpleName());
        w.write('(');

        p.print(fun);
        if (ast != null) {
          w.write('[');
          p.print(ast.fun());
          w.write(']');
        }

        w.write('(');
        for (var i = 0; i < args.size(); i++) {
          if (i > 0) {
            w.write(", ");
          }
          if (explicitNames != null && explicitNames.get(i).isPresent()) {
            var explicitName = explicitNames.get(i).get();
            w.write(Names.quoteIfNecessary(explicitName));
            if (ast != null) {
              var argName = i < ast.args().size() ? ast.argName(i) : null;
              if (argName == null) {
                w.write("[]");
              } else if (!explicitName.equals(argName.name())) {
                w.write('[');
                p.print(argName);
                w.write(']');
              }
            }
            w.write('=');
          } else if (ast != null && i < ast.args().size() && ast.argName(i) != null) {
            w.write('[');
            p.print(Objects.requireNonNull(ast.argName(i)));
            w.write("]=");
          }
          p.print(args.get(i));
          if (ast != null && i < ast.args().size() && ast.arg(i) != SEXPs.MISSING_ARG) {
            w.write('[');
            p.print(ast.arg(i));
            w.write(']');
          }
        }
        w.write(')');

        if (!(call instanceof Record r)) {
          throw new AssertionError("All `StmtData` must be records");
        }
        for (var component : clazz.getRecordComponents()) {
          if (List.of("ast1", "fun", "explicitNames", "args").contains(component.getName())) {
            // Already handled above.
            continue;
          }

          w.write(", ");
          w.write(component.getName());
          w.write('=');
          p.print(Reflection.getComponent(r, component));
        }

        w.write(')');
      }

      @ParseMethod
      private StVar parseStVar(Parser p) {
        var s = p.scanner();

        boolean isArg;
        if (s.trySkip("StArg")) {
          isArg = true;
        } else if (s.trySkip("StVar")) {
          isArg = false;
        } else {
          throw s.fail("`StArg` or `StVar`", s.readJavaIdentifierOrKeyword());
        }

        s.assertAndSkip('(');
        var name = p.parse(RegSymSXP.class);
        s.assertAndSkip("<-");
        var value = p.parse(RValue.class);
        s.assertAndSkip(", env=");
        var env = p.parse(RValue.class);
        s.assertAndSkip(')');

        return new StVar(name, value, env, isArg);
      }

      @PrintMethod
      private void printStVar(StVar stVar, Printer p) {
        var w = p.writer();

        w.write(stVar.isArg() ? "StArg" : "StVar");
        w.write('(');
        p.print(stVar.name());
        w.write(" <- ");
        p.print(stVar.value());
        w.write(", env=");
        p.print(stVar.env());
        w.write(')');
      } */
      // endregion custom `StmtData` and `JumpData`
    }
  }
}
