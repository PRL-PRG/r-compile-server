package org.prlprg.fir.analyze.cfg;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.variable.Variable;

class CfgReachabilityTest {
  /// The block jumps to itself, so its last statement may run before its first one.
  @Test
  void laterStatementReachesEarlierOneInSelfLoop() {
    var module =
        parseModule(
            """
            fun main() {
              () -~> V {
                goto L0(<int 0>);
              L0(i: I):
                j: I = `+`< I,I --> I >(i, 1);
                l: L = `<`< I,I --> L >(j, 10);
                c: B = naToTrue< L --> B >(l);
                if c then L0(j) else L1();
              L1():
                return <int 0>;
              }
            }
            """);
    var cfg =
        Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline().body();
    var loop = Objects.requireNonNull(cfg.bb("L0"));
    var exit = Objects.requireNonNull(cfg.bb("L1"));
    var reachability = new CfgReachability(cfg);

    assertTrue(reachability.isReachable(loop, 1, loop, 0));
    assertFalse(reachability.isReachable(exit, 0, loop, 0));
  }
}
