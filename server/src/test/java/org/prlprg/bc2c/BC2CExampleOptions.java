package org.prlprg.bc2c;


import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;

import java.util.ArrayList;
import java.util.List;
import java.util.function.Function;
import org.prlprg.sexp.SEXP;
import org.prlprg.examples.RExampleOption;

class BC2CExampleOptions {
  boolean compilePromises = false;
  boolean saveSnapshot = true;
  ArrayList<BC2CExampleExtraCheck> extraChecks = new ArrayList<>();

  BC2CExampleOptions(boolean isDirect, List<RExampleOption> rawOptions) {
    for (var option : rawOptions) {
      if (option.isDirect() && !isDirect) {
        continue;
      }

      switch (option.name()) {
        case "compilePromises" -> {
          option.expectNoArgs();
          compilePromises = true;
        }
        case "dontSaveSnapshot" -> {
          option.expectNoArgs();
          saveSnapshot = false;
        }
        case "fastArith" -> {
          option.expectNoArgs();
          extraChecks.add(fastArith());
        }
        case "fastMath1" -> {
          option.expectNoArgs();
          extraChecks.add(fastMath1());
        }
        case "fastUnary" -> {
          option.expectNoArgs();
          extraChecks.add(fastUnary());
        }
        case "fastRelop" -> {
          option.expectNoArgs();
          extraChecks.add(fastRelop());
        }
        case "fastSubset" -> {
          option.expectNoArgs();
          extraChecks.add(fastSubset());
        }
        case "slowSubset" -> {
          option.expectNoArgs();
          extraChecks.add(slowSubset());
        }
        case "fastSubassign" -> {
          option.expectNoArgs();
          extraChecks.add(fastSubassign());
        }
        case "slowSubassign" -> {
          option.expectNoArgs();
          extraChecks.add(slowSubassign());
        }
        case "dispatchedSubset" -> {
          option.expectNoArgs();
          extraChecks.add(dispatchedSubset());
        }
        case "dispatchedSubassign" -> {
          option.expectNoArgs();
          extraChecks.add(dispatchedSubassign());
        }
        case "isq" -> {
          option.expectNoArgs();
          extraChecks.add(isq());
        }
        case "noIsq" -> {
          option.expectNoArgs();
          extraChecks.add(noIsq());
        }
        case "isqFor" -> {
          var arg = option.expectOneArg();
          if (arg.asScalarInteger().isEmpty()) {
            fail("Expected integer scalar for isqFor");
          }
          extraChecks.add(isqFor(arg.asScalarInteger().get()));
        }
        case "returns" -> {
          var arg = option.expectOneArg();
          extraChecks.add(returns(arg));
        }
        default -> option.failUnknown();
      }
    }
  }

  private BC2CExampleExtraCheck fastArith() {
    return noSlow(PerformanceCounters::slowArith, "Expected fast arithmetics");
  }

  private BC2CExampleExtraCheck fastMath1() {
    return noSlow(PerformanceCounters::slowArith, "Expected fast math1");
  }

  private BC2CExampleExtraCheck fastUnary() {
    return noSlow(PerformanceCounters::slowUnary, "Expected fast math1");
  }

  private BC2CExampleExtraCheck fastRelop() {
    return noSlow(PerformanceCounters::slowRelop, "Expected fast relop");
  }

  private BC2CExampleExtraCheck noSlow(Function<PerformanceCounters, Integer> metric, String message) {
    return (r) -> assertEquals(0, metric.apply(r.pc()), message);
  }

  private BC2CExampleExtraCheck fastSubset() {
    return (r) -> {
      assertEquals(0, r.pc().slowSubset(), "Expected fast subset");
      assertEquals(0, r.pc().dispatchedSubset(), "Expected no dispatched subset");
    };
  }

  private BC2CExampleExtraCheck slowSubset() {
    return (r) -> assertEquals(1, r.pc().slowSubset(), "Expected slow subset");
  }

  private BC2CExampleExtraCheck slowSubassign() {
    return (r) -> assertEquals(1, r.pc().slowSubassign(), "Expected slow subassign");
  }

  private BC2CExampleExtraCheck fastSubassign() {
    return (r) -> {
      assertEquals(0, r.pc().slowSubassign(), "Expected fast subassign");
      assertEquals(0, r.pc().dispatchedSubassign(), "Expected no dispatched subassign");
    };
  }

  private BC2CExampleExtraCheck dispatchedSubset() {
    return (r) -> assertEquals(1, r.pc().dispatchedSubset(), "Expected dispatched subset");
  }

  private BC2CExampleExtraCheck dispatchedSubassign() {
    return (r) -> assertEquals(1, r.pc().dispatchedSubassign(), "Expected dispatched subassign");
  }

  private BC2CExampleExtraCheck isq() {
    return (r) -> assertEquals(1, r.pc().isq(), "Expected isq");
  }

  private BC2CExampleExtraCheck noIsq() {
    return (r) -> assertEquals(0, r.pc().isq(), "Expected no isq");
  }

  private BC2CExampleExtraCheck isqFor(int count) {
    return (r) -> assertEquals(count, r.pc().isqFor(), "Expected isqFor " + count + " times");
  }

  private BC2CExampleExtraCheck returns(SEXP expected) {
    return (r) -> assertEquals(expected, r.value(), "Expected to return " + expected);
  }
}