fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `format.factor` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg format:cls, reg structure:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg as_character:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg names:cls, reg r6:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x5:*, reg x6:V, reg dim:cls, reg r10:V, reg p2:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg x7:*, reg x8:V, reg dimnames:cls, reg r14:V, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg ddd1:dots?, reg r18:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    format = ldf format;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p4 = prom<V +>{
      structure = ldf structure;
      p = prom<V +>{
        sym = ldf `as.character`;
        base = ldf `as.character` in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        as_character = ldf `as.character` in base;
        r2 = dyn as_character(x2);
        goto L0(r2);
      L2():
        r = dyn base(<sym x>);
        goto L0(r);
      };
      p1 = prom<V +>{
        sym1 = ldf names;
        base1 = ldf names in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r5):
        return r5;
      L1():
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        names = ldf names in base;
        r6 = dyn names(x4);
        goto L0(r6);
      L2():
        r4 = dyn base1(<sym x>);
        goto L0(r4);
      };
      p2 = prom<V +>{
        sym2 = ldf dim;
        base2 = ldf dim in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r9):
        return r9;
      L1():
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        dim = ldf dim in base;
        r10 = dyn dim(x6);
        goto L0(r10);
      L2():
        r8 = dyn base2(<sym x>);
        goto L0(r8);
      };
      p3 = prom<V +>{
        sym3 = ldf dimnames;
        base3 = ldf dimnames in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r13):
        return r13;
      L1():
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        dimnames = ldf dimnames in base;
        r14 = dyn dimnames(x8);
        goto L0(r14);
      L2():
        r12 = dyn base3(<sym x>);
        goto L0(r12);
      };
      r16 = dyn structure[, names, dim, dimnames](p, p1, p2, p3);
      return r16;
    };
    ddd1 = ld `...`;
    r18 = dyn format[, `...`](p4, ddd1);
    check L1() else D1();
  D1():
    deopt 4 [r18];
  L1():
    popenv;
    return r18;
  }
}