fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1881874140;
    st `as.matrix.ftable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1881874140(x, sep, `...`) {
  (reg x:*, reg sep:*, reg ddd:dots) -+> V { var x:*, var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg r6:cls, reg structure:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg unclass:cls, reg r9:V, reg p:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg make_dimnames:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg x5:*, reg x6:V, reg attr:cls, reg r15:V, reg p1:p(V +), reg r17:V, reg make_dimnames1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg x7:*, reg x8:V, reg attr1:cls, reg r20:V, reg p2:p(V +), reg r22:V, reg c1:cls, reg r23:V, reg p3:p(V +), reg r25:V |
    mkenv;
    st x = x;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L0("_") else L0(sep);
  L0(sep_orDefault):
    st sep = sep_orDefault;
    st `...` = ddd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L8() else L2();
  L4():
    x1 = ld x;
    check L6() else D0();
  L5():
    r = dyn base(<sym x>, "ftable");
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2():
    goto L3();
  L3():
    r6 = clos inner4124908876;
    st make_dimnames = r6;
    structure = ldf structure;
    check L12() else D4();
  L6():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "ftable", FALSE);
    check L7() else D1();
  L8():
    stop = ldf stop;
    check L9() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 10 [];
  D4():
    deopt 19 [];
  L7():
    goto L1(r2);
  L9():
    r4 = dyn stop("'x' must be an \"ftable\" object");
    check L10() else D3();
  L12():
    p = prom<V +>{
      sym1 = ldf unclass;
      base1 = ldf unclass in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      unclass = ldf unclass in base;
      r9 = dyn unclass(x4);
      goto L0(r9);
    L2():
      r7 = dyn base1(<sym x>);
      goto L0(r7);
    };
    p3 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      make_dimnames = ldf make_dimnames;
      p1 = prom<V +>{
        sym3 = ldf attr;
        base3 = ldf attr in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r14):
        return r14;
      L1():
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        attr = ldf attr in base;
        r15 = dyn attr(x6, "row.vars");
        goto L0(r15);
      L2():
        r13 = dyn base3(<sym x>, "row.vars");
        goto L0(r13);
      };
      r17 = dyn make_dimnames(p1);
      make_dimnames1 = ldf make_dimnames;
      p2 = prom<V +>{
        sym4 = ldf attr;
        base4 = ldf attr in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r19):
        return r19;
      L1():
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        attr1 = ldf attr in base;
        r20 = dyn attr1(x8, "col.vars");
        goto L0(r20);
      L2():
        r18 = dyn base4(<sym x>, "col.vars");
        goto L0(r18);
      };
      r22 = dyn make_dimnames1(p2);
      c1 = ldf c in base;
      r23 = dyn c1(r17, r22);
      goto L0(r23);
    L2():
      r11 = dyn base2(<lang make_dimnames(attr(x, "row.vars"))>, <lang make_dimnames(attr(x, "col.vars"))>);
      goto L0(r11);
    };
    r25 = dyn structure[, dimnames, `row.vars`, `col.vars`](p, p3, NULL, NULL);
    check L13() else D5();
  D3():
    deopt 12 [r4];
  D5():
    deopt 27 [r25];
  L10():
    goto L3();
  L13():
    popenv;
    return r25;
  }
}
fun inner4124908876(vars) {
  (reg vars:*) -+> V { var vars:*, reg structure:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg do_call:cls, reg paste:*, reg paste1:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg rev:cls, reg expand_grid:cls, reg rev1:cls, reg vars1:*, reg vars2:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg sep:*, reg sep1:V, reg list:cls, reg r13:V, reg c:cls, reg r14:V, reg p4:p(V +), reg r16:V, reg list1:cls, reg r17:V, reg p5:p(V +), reg paste2:cls, reg sep2:*, reg sep3:V, reg p6:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg vars3:*, reg vars4:V, reg names:cls, reg r22:V, reg p7:p(V +), reg r24:V, reg p8:p(V +), reg r26:V |
    mkenv;
    st vars = vars;
    structure = ldf structure;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p5 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      do_call = ldf `do.call`;
      p = prom<V +>{
        paste = ld paste;
        paste1 = force? paste;
        checkMissing(paste1);
        return paste1;
      };
      p4 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L2() else L3();
      L0(r4):
        return r4;
      L2():
        rev = ldf rev;
        p3 = prom<V +>{
          expand_grid = ldf `expand.grid`;
          p2 = prom<V +>{
            rev1 = ldf rev;
            p1 = prom<V +>{
              vars1 = ld vars;
              vars2 = force? vars1;
              checkMissing(vars2);
              return vars2;
            };
            r6 = dyn rev1(p1);
            return r6;
          };
          r8 = dyn expand_grid(p2);
          return r8;
        };
        r10 = dyn rev(p3);
        sym2 = ldf list;
        base2 = ldf list in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L4() else L5();
      L3():
        r3 = dyn base1(<lang rev(expand.grid(rev(vars)))>, <lang list(sep=sep)>);
        goto L0(r3);
      L1(r12):
        c = ldf c in base;
        r14 = dyn c(r10, r12);
        goto L0(r14);
      L4():
        sep = ld sep;
        sep1 = force? sep;
        checkMissing(sep1);
        list = ldf list in base;
        r13 = dyn list(sep1);
        goto L1(r13);
      L5():
        r11 = dyn base2[sep](<sym sep>);
        goto L1(r11);
      };
      r16 = dyn do_call(p, p4);
      list1 = ldf list in base;
      r17 = dyn list1(r16);
      goto L0(r17);
    L2():
      r = dyn base(<lang do.call(paste, c(rev(expand.grid(rev(vars))), list(sep=sep)))>);
      goto L0(r);
    };
    p8 = prom<V +>{
      paste2 = ldf paste;
      p6 = prom<V +>{
        sep2 = ld sep;
        sep3 = force? sep2;
        checkMissing(sep3);
        return sep3;
      };
      p7 = prom<V +>{
        sym3 = ldf names;
        base3 = ldf names in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r21):
        return r21;
      L1():
        vars3 = ld vars;
        vars4 = force? vars3;
        checkMissing(vars4);
        names = ldf names in base;
        r22 = dyn names(vars4);
        goto L0(r22);
      L2():
        r20 = dyn base3(<sym vars>);
        goto L0(r20);
      };
      r24 = dyn paste2[collapse, ](p6, p7);
      return r24;
    };
    r26 = dyn structure[, names](p5, p8);
    check L1() else D1();
  D1():
    deopt 5 [r26];
  L1():
    popenv;
    return r26;
  }
}