fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4087326356;
    st `.format_perc` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4087326356(probs, digits) {
  (reg probs:*, reg digits:*) -+> V { var probs:*, var digits:*, reg paste:cls, reg format:cls, reg probs1:*, reg probs2:V, reg r:V, reg p:p(V +), reg digits1:*, reg digits2:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st probs = probs;
    st digits = digits;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      format = ldf format;
      p = prom<V +>{
        probs1 = ld probs;
        probs2 = force? probs1;
        checkMissing(probs2);
        r = `*`(100.0, probs2);
        return r;
      };
      p1 = prom<V +>{
        digits1 = ld digits;
        digits2 = force? digits1;
        checkMissing(digits2);
        return digits2;
      };
      r3 = dyn format[, trim, scientific, digits](p, TRUE, FALSE, p1);
      return r3;
    };
    r5 = dyn paste(p2, "%");
    check L1() else D1();
  D1():
    deopt 4 [r5];
  L1():
    popenv;
    return r5;
  }
}