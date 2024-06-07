package org.prlprg.ir.cfg;

import java.util.ArrayList;
import javax.annotation.Nullable;
import org.prlprg.parseprint.ClassProvidingContext;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/** CFG's syntax is inspired by <a href="https://mlir.llvm.org/docs/LangRef/">MLIR</a>. */
public interface CFGParsePrint {
  private static CFG parse(Parser p) {
    var s = p.scanner();

    var cfg = new CFG();

    s.assertAndSkip("CFG(nextBBDisambiguator=");
    cfg.setNextBBDisambiguator(s.readUInt());
    s.assertAndSkip(", nextInstrOrPhiDisambiguator=");
    cfg.setNextInstrOrPhiDisambiguator(s.readUInt());
    s.assertAndSkip("):\n");

    var cfgP = p.withContext(new CFGParseOrPrintContext(cfg));
    while (!s.isAtEof()) {
      if (s.trySkip("//")) {
        // Comment
        s.readPastEndOfLine();
      } else if (s.nextCharIs('^')) {
        // BB (it adds itself when parsed)
        cfgP.parse(BB.class);
      } else {
        throw s.fail("Expected BB or comment");
      }
    }

    return cfg;
  }

  @PrintMethod
  private static void print(CFG cfg, Printer p) {
    var w = p.writer();

    w.write("CFG(nextBBDisambiguator=");
    p.print(cfg.nextBBDisambiguatorWithoutIncrementing());
    w.write(", nextInstrOrPhiDisambiguator=");
    p.print(cfg.nextInstrOrPhiDisambiguatorWithoutIncrementing());
    w.write("):\n");

    var cfgP = p.withContext(new CFGParseOrPrintContext(cfg));
    var iter = new CFGIterator.Bfs(cfg);
    iter.forEachRemaining(cfgP::print);

    if (!iter.remainingBBIds().isEmpty()) {
      w.write("// !!! Free BBs:\n");
      for (var bbId : iter.remainingBBIds()) {
        cfgP.print(cfg.get(bbId));
      }
    }
  }
}

class CFGParseOrPrintContext {
  private final CFG cfg;

  CFGParseOrPrintContext(CFG cfg) {
    this.cfg = cfg;
  }

  @ParseMethod
  private BB parseBB(Parser p) {
    var s = p.scanner();

    var id = p.parse(BBId.class);
    var bb = cfg.addBBWithId(id);

    var bbP = p.withContext(new BBParseOrPrintContext(cfg, bb));

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
    Instr instr;
    do {
      instr = bbP.parse(Instr.class);
      s.assertAndSkip(';');
    } while (!(instr instanceof Jump) && !s.trySkip("null;"));

    return bb;
  }

  @PrintMethod
  private void printBB(BB bb, Printer p) {
    var w = p.writer();
    var bbP = p.withContext(new BBParseOrPrintContext(cfg, bb));

    p.print(bb.id());

    // Phis
    if (!bb.phis().isEmpty()) {
      w.write("(\n    ");
      var first = true;
      for (var phi : bb.phis()) {
        if (first) {
          first = false;
        } else {
          w.write(",\n    ");
        }
        bbP.print(phi);
      }
      w.write(')');
    }

    // Instructions (statements and jump)
    w.write(":\n");
    // Statements
    for (var stmt : bb.stmts()) {
      w.write("  ");
      bbP.print(stmt);
      w.write(";\n");
    }
    // Jump
    w.write("  ");
    if (bb.jump() != null) {
      bbP.print(bb.jump());
    } else {
      w.write("null");
    }
    w.write(";\n");
  }
}

class BBParseOrPrintContext {
  private final CFG cfg;
  private final @Nullable BB bb;
  private final DataContext dataContext = new DataContext();

  public BBParseOrPrintContext(CFG cfg, @Nullable BB bb) {
    this.cfg = cfg;
    this.bb = bb;
  }

  @ParseMethod
  private Phi<?> parsePhi(Parser p) {
    if (bb == null) {
      throw new UnsupportedOperationException("Can't parse phis or instructions without `bb`");
    }
    var s = p.scanner();

    // Cast is OK because we parsed, so it has no assigned class.
    @SuppressWarnings("unchecked")
    var id = (NodeId<? extends Phi<? extends Node>>) p.parse(NodeId.class);

    var inputP = p.withContext(dataContext);
    var inputs = new ArrayList<Phi.Input<?>>();
    s.assertAndSkip(" = φ(");
    while (!s.trySkip(')')) {
      inputs.add(inputP.parse(Phi.Input.class));
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

    return bb.addPhiWithId(id, clazz, inputs);
  }

  @PrintMethod
  private void printPhi(Phi<?> phi, Printer p) {
    var w = p.writer();

    p.print(phi.id());

    var inputP = p.withContext(dataContext);
    w.write(" = φ(");
    boolean[] first = {true};
    phi.streamInputs()
        .forEach(
            input -> {
              if (first[0]) {
                first[0] = false;
              } else {
                w.write(", ");
              }
              inputP.print(input);
            });
    w.write(')');
  }

  @ParseMethod
  private Instr parseInstr(Parser p) {
    if (bb == null) {
      throw new UnsupportedOperationException("Can't parse phis or instructions without `bb`");
    }
    var s = p.scanner();

    TokenToCreateNewInstr token;
    if (s.nextCharIs('%')) {
      @SuppressWarnings("unchecked")
      var id = (NodeId<? extends Instr>) p.parse(NodeId.class);
      token = new CreateInstrWithExistingId(id);
      s.assertAndSkip('=');
    } else {
      // ID doesn't matter
      token = new CreateInstrWithNewId("");
    }

    var data = p.withContext(dataContext).parse(InstrData.class);
    return switch (data) {
      case StmtData<?> stmtData -> bb.insertAtWithToken(bb.stmts().size(), token, stmtData);
      case JumpData<?> jumpData -> bb.addJumpWithToken(token, jumpData);
    };
  }

  @PrintMethod
  private void printInstr(Instr instr, Printer p) {
    var w = p.writer();

    if (!instr.returns().isEmpty()) {
      p.print(instr.id());
      w.write(" = ");
    }

    p.withContext(dataContext).print(instr.data());
  }

  private class DataContext implements ClassProvidingContext {
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

    // These four methods override all parsers for nodes when they are parsed in this context, so we
    // can call e.g. `p.parse(RValue.class)` and it dispatches this.
    @ParseMethod
    private BB parseBB(Parser p) {
      return cfg.get(p.parse(BBId.class));
    }

    @PrintMethod
    private void printBB(BB bb, Printer p) {
      p.print(bb.id());
    }

    @ParseMethod
    private Node parseNode(Parser p) {
      return cfg.get((NodeId<?>) p.parse(NodeId.class));
    }

    @PrintMethod
    private void printNode(Node node, Printer p) {
      p.print(node.id());
    }

    @Override
    public @Nullable Class<?> getClass(String className) {
      return InstrData.CLASSES.get(className);
    }
  }
}
