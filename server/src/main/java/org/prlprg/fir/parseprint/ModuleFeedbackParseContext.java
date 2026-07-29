package org.prlprg.fir.parseprint;

import java.util.Objects;
import java.util.Optional;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.feedback.TypeFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.primitive.Names;
import org.prlprg.sexp.parseprint.SEXPParseContext;

/// Parses recorded [ModuleFeedback] (specifically [MockModuleFeedback], the serializable
/// implementation).
///
/// Feedback is *about* a module that already exists: it refers to functions, versions, registers
/// and statement positions by name and position, and they must resolve to the actual IR objects.
/// So unlike [ModuleParseContext] this context needs the [Module] the feedback was recorded for.
///
/// [AbstractionFeedbackParseContext] parses the feedback of a single version, and is nested here
/// because it resolves names against the same module (and SEXPs with the same
/// [SEXPParseContext]).
public final class ModuleFeedbackParseContext {
  private final Module module;
  private final SEXPParseContext forSexps = new SEXPParseContext();

  public ModuleFeedbackParseContext(Module module) {
    this.module = module;
  }

  @ParseMethod
  private MockModuleFeedback parseModuleFeedback(Parser p) {
    var s = p.scanner();
    var feedback = new MockModuleFeedback(module);

    s.assertAndSkip("feedback");
    s.assertAndSkip('{');
    while (!s.trySkip('}')) {
      var name = p.parse(NamedVariable.class);
      var fn = module.localFunction(name);
      if (fn == null) {
        throw s.fail("No such function: " + name);
      }
      s.assertAndSkip('<');

      var signature = p.parse(Signature.class);
      var version = fn.guess(signature);
      if (version == null || !version.signature().equals(signature)) {
        throw s.fail("No such version: " + name + "/" + signature);
      }
      s.assertAndSkip('>');

      s.assertAndSkip('=');

      p.withContext(new AbstractionFeedbackParseContext(feedback, version))
          .parse(AbstractionFeedback.class);
    }

    return feedback;
  }

  /// Parses the [AbstractionFeedback] recorded for one version of one of the module's functions.
  public final class AbstractionFeedbackParseContext {
    private final ModuleFeedback moduleFeedback;
    private final Abstraction scope;

    private AbstractionFeedbackParseContext(ModuleFeedback moduleFeedback, Abstraction scope) {
      this.moduleFeedback = moduleFeedback;
      this.scope = scope;
    }

    @ParseMethod
    private AbstractionFeedback parseAbstractionFeedback(Parser p) {
      var s = p.scanner();
      var feedback = moduleFeedback.get(scope);

      feedback.setNumCalls(s.readUInt());
      s.assertAndSkip("x");

      s.assertAndSkip('[');

      while (!s.trySkip(']')) {
        if (s.trySkip("reg ")) {
          parseRegisterFeedback(p, feedback, parseRegister(p));
        } else if (s.trySkip("env ")) {
          feedback.reflectiveEnvs.add(parsePosition(p));
        } else if (s.trySkip("prom ")) {
          feedback.escapingPromises.add(parsePosition(p));
        } else {
          throw s.fail("\"reg\", \"env\", or \"prom\"", s.readIdentifierOrKeyword());
        }
      }

      return feedback;
    }

    /// Parse one register's feedback and assign it. Parses nothing if it has none.
    private void parseRegisterFeedback(Parser p, AbstractionFeedback feedback, Register register) {
      var s = p.scanner();
      var p2 = p.withContext(forSexps);

      if (s.trySkip('!')) {
        feedback.forceCount.put(register, s.readUInt());
      }

      if (s.trySkip('-')) {
        if (s.nextCharsAre("_ ") || s.nextCharsAre("_(")) {
          s.assertAndSkip('_');
          feedback.callees.put(register, Optional.empty());
        } else {
          var calleeName = p2.parse(NamedVariable.class);
          var callee = module.lookupFunction(calleeName);
          if (callee == null) {
            throw s.fail("No such function: " + calleeName);
          }
          feedback.callees.put(register, Optional.of(callee));
        }
      }

      if (s.trySkip('=')) {
        if (s.nextCharsAre("_ ") || s.nextCharsAre("_(")) {
          s.assertAndSkip('_');
          feedback.constants.put(register, Optional.empty());
        } else {
          feedback.constants.put(register, Optional.of(p2.parse(Value.class)));
        }
      }

      if (s.trySkip(':')) {
        feedback.types.put(register, p.parse(TypeFeedback.class));
      }

      s.assertAndSkip("(");
      var times = s.readUInt();
      s.assertAndSkip("x)");
      feedback.setTimes(register, times);
    }

    /// Parse a register reference by name (as printed by [Register]), resolving it to the (single)
    /// register that defines that name in the scope.
    private Register parseRegister(Parser p) {
      var s = p.scanner();
      var name = s.nextCharIs('`') ? Names.read(s, true) : s.readIdentifierOrKeyword();
      return scope
          .streamRegisters()
          .filter(r -> r.name().equals(name))
          .findFirst()
          .orElseThrow(() -> s.fail("a register named '" + name + "' in the scope"));
    }

    /// Parse a statement position: a `bb:index` (or `outer/.../innermost` through enclosing promise
    /// bodies) resolved against the scope's CFG. Inverse of
    /// [ModuleFeedbackPrintContext.AbstractionFeedbackPrintContext]'s `printPosition`.
    private Statement parsePosition(Parser p) {
      var s = p.scanner();
      var cfg =
          Objects.requireNonNull(scope.cfg(), "can't parse a position for a stub abstraction");

      Statement statement;
      while (true) {
        // The entry block's label (`$ENTRY`) starts with `$`, which isn't an identifier char.
        var label = (s.trySkip('$') ? "$" : "") + s.readIdentifierOrKeyword();
        var bb = cfg.bb(label);
        if (bb == null) {
          throw s.fail("position not in CFG: no BB with label \"" + label + "\"");
        }
        s.assertAndSkip(':');
        var index = s.readUInt();
        statement = (Statement) bb.instructions().get(index);

        if (!s.trySkip('/')) {
          break;
        }
        // A `/` means there's a deeper position, so this one must be an enclosing promise.
        if (!(statement.expression() instanceof Promise(_, _, var code, _))) {
          throw s.fail("an enclosing scope position must be a promise, but got: " + statement);
        }
        cfg = code;
      }

      return statement;
    }
  }
}
