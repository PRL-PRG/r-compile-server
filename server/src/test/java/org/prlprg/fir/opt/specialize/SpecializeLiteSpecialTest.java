package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.GlobalModules.BUILTINS;

import java.util.List;
import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.check.Checker;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.AbstractionOptimizationUnitTest;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Printer;

class SpecializeLiteSpecialTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new Specialize(new SpecializeLiteSpecial());
  }

  @Test
  void symbolsBoundToValues_passedDirectly() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I), reg ri:v1(I)) -+> V {
              mkenv;
              st x = rv;
              st i = ri;
              r: V = `[`< V,V,miss,miss -+> V >(<sym x>, <sym i>, <missing>, <missing>);
              popenv;
              return r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");
    assertTrue(Checker.checkAll(abstraction, Checker.Exclude.CAPTURE), "the result should check");

    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("<sym "), "no symbol should be left; printed:\n" + printed);
    assertFalse(printed.contains("force"), "a value needs no force; printed:\n" + printed);
    assertTrue(
        printed.contains(
            "r: v1(I) = `[`< v(I),v1(I),miss,miss --> v1(I) >(rv, ri, <missing>, <missing>)"),
        "the specialized version should be called with the values; printed:\n" + printed);
  }

  @Test
  void symbolsBoundToPromises_forcedInArgumentOrder() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:p(v(I) -), reg ri:p(v1(I) -)) -+> V {
              mkenv;
              st x = rv;
              st i = ri;
              r: V = `[`< V,V,miss,miss -+> V >(<sym x>, <sym i>, <missing>, <missing>);
              popenv;
              return r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");
    assertTrue(Checker.checkAll(abstraction, Checker.Exclude.CAPTURE), "the result should check");

    var printed = Printer.toString(abstraction);
    assertTrue(
        printed.contains("val: v(I) = force rv;\n  val1: v1(I) = force ri;"),
        "each promise should be forced, in the order it's passed; printed:\n" + printed);
    assertTrue(
        printed.contains(
            "r: v1(I) = `[`< v(I),v1(I),miss,miss --> v1(I) >(val, val1, <missing>, <missing>)"),
        "the specialized version should be called with the forced values; printed:\n" + printed);
  }

  @Test
  void symbolBoundToUnknownValue_unchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:V) -+> V {
              mkenv;
              st x = rv;
              st i = rv;
              r: V = `[`< V,V,miss,miss -+> V >(<sym x>, <sym i>, <missing>, <missing>);
              popenv;
              return r;
            }
            """);

    assertFalse(run(abstraction), "an unknown value only dispatches to the baseline");

    var printed = Printer.toString(abstraction);
    assertTrue(
        printed.contains("(<sym x>, <sym i>, <missing>, <missing>)"),
        "the symbols should be left alone; printed:\n" + printed);
  }

  @Test
  void unboundSymbol_unchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            () -+> V {
              mkenv;
              r: V = `[`< V,V,miss,miss -+> V >(<sym x>, <sym i>, <missing>, <missing>);
              popenv;
              return r;
            }
            """);

    assertFalse(run(abstraction), "a symbol with no known origin can't be evaluated here");

    var printed = Printer.toString(abstraction);
    assertTrue(
        printed.contains("(<sym x>, <sym i>, <missing>, <missing>)"),
        "the symbols should be left alone; printed:\n" + printed);
  }

  @Test
  void notALiteSpecial_unchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v1(I)) -+> V {
              mkenv;
              st x = rv;
              st y = rv;
              r: V = `+`< V,V -+> V >(<sym x>, <sym y>);
              popenv;
              return r;
            }
            """);

    assertFalse(run(abstraction), "`+` isn't a special, so it never takes a symbol to evaluate");

    var printed = Printer.toString(abstraction);
    assertTrue(
        printed.contains("(<sym x>, <sym y>)"),
        "the symbols should be left alone; printed:\n" + printed);
  }

  @Test
  void alreadyEvaluated_unchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg rv:v(I), reg ri:v1(I)) --> v1(I) {
              r: v1(I) = `[`< v(I),v1(I),miss,miss --> v1(I) >(rv, ri, <missing>, <missing>);
              return r;
            }
            """);

    assertFalse(run(abstraction), "a call with no symbol arguments has nothing to evaluate");
  }

  @Test
  void builtins_markTheLiteSpecials() {
    for (var name : List.of("[", "[[", "[<-", "[[<-", "rep")) {
      var function = Objects.requireNonNull(BUILTINS.localFunction(Variable.named(name)));
      assertTrue(
          function.userProperties().liteSpecial(), "`" + name + "` should be a lite special");
    }
    assertFalse(
        Objects.requireNonNull(BUILTINS.localFunction(Variable.named("+")))
            .userProperties()
            .liteSpecial(),
        "`+` is a builtin, not a special");
  }

  @Test
  void property_roundTrips() {
    var module =
        ParseUtil.parseModule(
            """
            @strict
            @liteSpecial
            fun f(x) {
              (reg x:*@!) -+> V { ... }
            }
            """);

    var function = Objects.requireNonNull(module.localFunction(Variable.named("f")));
    assertTrue(function.userProperties().strict(), "`@strict` should be parsed");
    assertTrue(function.userProperties().liteSpecial(), "`@liteSpecial` should be parsed");

    var printed = Printer.toString(module);
    assertTrue(
        printed.contains("@strict\n@liteSpecial\nfun f"),
        "both properties should be printed back; printed:\n" + printed);
  }
}
