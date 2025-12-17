fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4143059066;
    st `.Rd_available_xref_targets` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4143059066(aliases) {
  (reg aliases:*) -+> V { var aliases:*, reg unique:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg unlist:cls, reg aliases1:*, reg aliases2:V, reg p:p(V +), reg r3:V, reg sub:cls, reg basename:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg aliases3:*, reg aliases4:V, reg names:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg c:cls, reg r11:V, reg p3:p(V +), reg r13:V |
    mkenv;
    st aliases = aliases;
    unique = ldf unique;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      unlist = ldf unlist;
      p = prom<V +>{
        aliases1 = ld aliases;
        aliases2 = force? aliases1;
        checkMissing(aliases2);
        return aliases2;
      };
      r3 = dyn unlist[, `use.names`](p, FALSE);
      sub = ldf sub;
      p2 = prom<V +>{
        basename = ldf basename;
        p1 = prom<V +>{
          sym1 = ldf names;
          base1 = ldf names in base;
          guard1 = `==`.4(sym1, base1);
          if guard1 then L1() else L2();
        L0(r5):
          return r5;
        L1():
          aliases3 = ld aliases;
          aliases4 = force? aliases3;
          checkMissing(aliases4);
          names = ldf names in base;
          r6 = dyn names(aliases4);
          goto L0(r6);
        L2():
          r4 = dyn base1(<sym aliases>);
          goto L0(r4);
        };
        r8 = dyn basename(p1);
        return r8;
      };
      r10 = dyn sub("\\.[Rr]d", "", p2);
      c = ldf c in base;
      r11 = dyn c(r3, r10);
      goto L0(r11);
    L2():
      r = dyn base(<lang unlist(aliases, use.names=FALSE)>, <lang sub("\\.[Rr]d", "", basename(names(aliases)))>);
      goto L0(r);
    };
    r13 = dyn unique(p3);
    check L1() else D1();
  D1():
    deopt 3 [r13];
  L1():
    popenv;
    return r13;
  }
}