package org.prlprg.fir.opt;
import static org.junit.jupiter.api.Assertions.*;
import org.junit.jupiter.api.Test;
//import org.junit.Test;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.parseprint.ModuleFeedbackParseContext;
import org.prlprg.parseprint.Parser;
import org.prlprg.util.UnionFind;
import org.prlprg.parseprint.Printer;

import java.util.LinkedHashMap;
import java.util.Map;
import java.util.function.Supplier;

//import static org.junit.Assert.assertTrue;

public class GlobalValueNumberingTest implements OptimizationUnitTest{

    public static final class NaiveUnionFind<Register> implements UnionFind<Register> {

        private final Map<Register, Register> parent = new LinkedHashMap<>();

        @Override
        public Register find(Register el) {
            var current = el;
            while (parent.containsKey(current) && !parent.get(current).equals(current)) {
                current = parent.get(current);
            }
            return current;
        }

        @Override
        public boolean unionInto(Register representative, Register other) {
            var keepRoot = find(representative);
            var otherRoot = find(other);
            if (keepRoot.equals(otherRoot)) {
                return false;
            }
            parent.put(otherRoot, keepRoot);
            return true;
        }
        @Override
        public void clear(){ parent.clear(); }


    }
    @Override
    public Optimization optimization() { return new GlobalValueNumbering(NaiveUnionFind::new); }


    private MockModuleFeedback parseFeedback(
            org.prlprg.fir.ir.module.Module module, String feedbackText) {
        return Parser.fromString(
                feedbackText, MockModuleFeedback.class, new ModuleFeedbackParseContext(module));
    }

    @Test
    public void dummyTest() {
        var module =
                ParseUtil.parseModule(
                        """
                                fun f(x) {
                                  (x:*) --> * {
                                    return x;
                                  }
                                  (x:I) --> I {
                                    return x;
                                  }
                                }
                                """);
        var feedback =
                parseFeedback(
                        module,
                        """
                                feedback {
                                  f< * --> * > = 15x []
                                  f< I --> I > = 0x []
                                }
                                """);
        optimization().run( feedback, module);
    }
    @Test
    void lvn_duplicatesInOneBlock_areMerged() {
        var module =
                ParseUtil.parseModule(
                        """
                        fun f(x, y, c) {
                          (x:*, y:*, c:*) --> * { ... }
                          (x:I, y:I, c:B) --> I {
                            a: I = `+`< I,I --> I >(x, y);
                            b: I = `+`< I,I --> I >(x, y);
                            k: I = `-`< I,I --> I >(b, y);
                            m: I = `-`< I,I --> I >(a, y);
                            r: I = `+`< I,I --> I >(k, m);
                            return r;
                          }
                        }
                        """);

        assertTrue(run(module), "optimization should report a change");

        var printed = Printer.toString(module);
        assertFalse(printed.contains("b: I ="), "b should be merged into a:\n" + printed);
        assertFalse(printed.contains("m: I ="), "m should be merged into k:\n" + printed);
        assertTrue(
                printed.contains("r: I = `+`< I,I --> I >(k, k)"), "r should use k twice:\n" + printed);
    }

    /// LVN, nothing to do: the arguments are in a different order, and `-` is a different operation.
    @Test
    void lvn_differentKeys_unchanged() {
        var module =
                ParseUtil.parseModule(
                        """
                        fun f(x, y, c) {
                          (x:*, y:*, c:*) --> * { ... }
                          (x:I, y:I, c:B) --> I {
                            a: I = `+`< I,I --> I >(x, y);
                            b: I = `+`< I,I --> I >(y, x);
                            d: I = `-`< I,I --> I >(x, y);
                            r1: I = `+`< I,I --> I >(a, b);
                            r2: I = `+`< I,I --> I >(r1, d);
                            return r2;
                          }
                        }
                        """);

        assertFalse(run(module), "nothing should be merged");
    }

    /// GVN. The same CFG as in my earlier diagram:
    /// - entry dominates L and J, so d ⇒ a and g ⇒ a.
    /// - L and R are siblings, so e and f must NOT be merged.
    /// - J's immediate dominator is entry, so h can't use e or f.
    /// With LVN only, run() on this should return false.
    @Test
    void gvn_reusesDominatingValues_notSiblings() {
        var module =
                ParseUtil.parseModule(
                        """
                        fun f(x, y, c) {
                          (x:*, y:*, c:*) --> * { ... }
                          (x:I, y:I, c:B) --> I {
                            a: I = `+`< I,I --> I >(x, y);
                            if c then L() else R();
                          L():
                            d: I = `+`< I,I --> I >(x, y);
                            e: I = `-`< I,I --> I >(x, y);
                            t: I = `-`< I,I --> I >(d, e);
                            goto J(t);
                          R():
                            f: I = `-`< I,I --> I >(x, y);
                            goto J(f);
                          J(p: I):
                            g: I = `+`< I,I --> I >(x, y);
                            h: I = `-`< I,I --> I >(x, y);
                            r1: I = `+`< I,I --> I >(g, h);
                            r2: I = `+`< I,I --> I >(r1, p);
                            return r2;
                          }
                        }
                        """);

        assertTrue(run(module), "optimization should report a change");

        var printed = Printer.toString(module);
        assertTrue(printed.contains("t: I = `-`< I,I --> I >(a, e)"), "d ⇒ a:\n" + printed);
        assertTrue(printed.contains("r1: I = `+`< I,I --> I >(a, h)"), "g ⇒ a:\n" + printed);
        assertTrue(printed.contains("e: I ="), "e must stay (sibling of R):\n" + printed);
        assertTrue(printed.contains("f: I ="), "f must stay (sibling of L):\n" + printed);
        assertTrue(printed.contains("h: I ="), "h must stay (L/R don't dominate J):\n" + printed);
    }
}
    //assertTrue(optimization().run(feedback, module));
