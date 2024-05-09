package org.prlprg.ir.cfg;

import java.util.ArrayList;
import javax.annotation.Nullable;
import org.prlprg.parseprint.ClassProvidingContext;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.InterfaceHiddenMembers;

/** CFG's syntax is inspired by <a href="https://mlir.llvm.org/docs/LangRef/">MLIR</a>. */
@InterfaceHiddenMembers(CFGParsePrintImpl.class)
public interface CFGParsePrint {}

class CFGParsePrintImpl {
  @ParseMethod
  private static CFG parse(Parser p) {
    var s = p.scanner();

    var cfg = new CFG();

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

    s.assertAndSkip('^');
    var name = NodesAndBBIds.readIdName(s);
    var bb = cfg.addBB(name);

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
      w.write('(');
      var first = true;
      for (var phi : bb.phis()) {
        if (first) {
          first = false;
        } else {
          w.write(", ");
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
  private final BB bb;
  private final DataContext dataContext = new DataContext();

  public BBParseOrPrintContext(CFG cfg, BB bb) {
    this.cfg = cfg;
    this.bb = bb;
  }

  @ParseMethod
  private Phi<?> parsePhi(Parser p) {
    var s = p.scanner();

    s.assertAndSkip('φ');
    var name = NodesAndBBIds.readIdName(s);

    var inputP = p.withContext(dataContext);
    var inputs = new ArrayList<Phi.Input<?>>();
    s.assertAndSkip('(');
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

    return bb.addPhi(clazz, name, inputs);
  }

  @PrintMethod
  private void printPhi(Phi<?> phi, Printer p) {
    var w = p.writer();

    w.write("φ");
    w.write(phi.id().name());

    var inputP = p.withContext(dataContext);
    w.write('(');
    var first = true;
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
    var s = p.scanner();

    String name;
    if (s.trySkip('%')) {
      name = NodesAndBBIds.readIdName(s);
      s.assertAndSkip('=');
    } else {
      name = "";
    }

    var data = p.withContext(dataContext).parse(InstrData.class);
    return switch (data) {
      case StmtData<?> stmtData -> bb.append(name, stmtData);
      case JumpData<?> jumpData -> bb.addJump(name, jumpData);
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
