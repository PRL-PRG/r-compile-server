fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `as.matrix.check_url_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg lengths:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg p:p(V +), reg r2:V, reg do_call:cls, reg cbind:*, reg cbind1:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r10:V, reg n:*, reg n1:V, reg rep_int:cls, reg r11:V, reg unlist:cls, reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r12:V, reg p2:p(V +), reg r14:V, reg list:cls, reg r15:V, reg lapply:cls, reg x13:*, reg x14:V, reg c3:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg x19:V, reg r17:V, reg c4:cls, reg r18:V, reg r19:V, reg __3:cls, reg r20:V, reg p3:p(V +), reg rep_int1:*, reg rep_int2:V, reg p4:p(V +), reg n2:*, reg n3:V, reg p5:p(V +), reg r24:V, reg c5:cls, reg r25:V, reg p6:p(V +), reg r27:V, reg l:*, reg rownames__:cls, reg r28:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    lengths = ldf lengths;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L1() else L2(x2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x4):
      __ = ldf `[[` in base;
      r = dyn __(x4, "From");
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r2 = dyn lengths(p);
    check L1() else D1();
  D1():
    deopt 3 [r2];
  L1():
    st n = r2;
    do_call = ldf `do.call`;
    check L2() else D2();
  D2():
    deopt 6 [];
  L2():
    p1 = prom<V +>{
      cbind = ld cbind;
      cbind1 = force? cbind;
      checkMissing(cbind1);
      return cbind1;
    };
    p6 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L4() else L5();
    L0(r5):
      return r5;
    L4():
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L6() else L7();
    L5():
      r4 = dyn base(<lang list(URL=rep.int(`[[`(x, "URL"), n), Parent=unlist(`[[`(x, "From")))>, <lang lapply(`[`(x, `-`(c(1, 2))), rep.int, n)>);
      goto L0(r4);
    L1(r7):
      lapply = ldf lapply;
      p3 = prom<V +>{
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        c3 = `is.object`(x14);
        if c3 then L2() else L3(x14);
      L0(dx7):
        return dx7;
      L2():
        dr6 = tryDispatchBuiltin.1("[", x14);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L4() else L3(dr6);
      L3(x16):
        sym3 = ldf c;
        base3 = ldf c in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L5() else L6();
      L1(x19, r17):
        r19 = `-`(<missing>, r17);
        __3 = ldf `[` in base;
        r20 = dyn __3(x19, r19);
        goto L0(r20);
      L4():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      L5():
        c4 = ldf c in base;
        r18 = dyn c4(1, 2);
        goto L1(x16, r18);
      L6():
        r16 = dyn base3(1, 2);
        goto L1(x16, r16);
      };
      p4 = prom<V +>{
        rep_int1 = ld `rep.int`;
        rep_int2 = force? rep_int1;
        checkMissing(rep_int2);
        return rep_int2;
      };
      p5 = prom<V +>{
        n2 = ld n;
        n3 = force? n2;
        checkMissing(n3);
        return n3;
      };
      r24 = dyn lapply(p3, p4, p5);
      c5 = ldf c in base;
      r25 = dyn c5(r7, r24);
      goto L0(r25);
    L6():
      sym2 = ldf `rep.int`;
      base2 = ldf `rep.int` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L8() else L9();
    L7():
      r6 = dyn base1[URL, Parent](<lang rep.int(`[[`(x, "URL"), n)>, <lang unlist(`[[`(x, "From"))>);
      goto L1(r6);
    L2(r9):
      unlist = ldf unlist;
      p2 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        c2 = `is.object`(x10);
        if c2 then L1() else L2(x10);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[[", x10);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(x12):
        __2 = ldf `[[` in base;
        r12 = dyn __2(x12, "From");
        goto L0(r12);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r14 = dyn unlist(p2);
      list = ldf list in base;
      r15 = dyn list(r9, r14);
      goto L1(r15);
    L8():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c1 = `is.object`(x6);
      if c1 then L10() else L11(x6);
    L9():
      r8 = dyn base2(<lang `[[`(x, "URL")>, <sym n>);
      goto L2(r8);
    L3(dx3):
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      rep_int = ldf `rep.int` in base;
      r11 = dyn rep_int(dx3, n1);
      goto L2(r11);
    L10():
      dr2 = tryDispatchBuiltin.1("[[", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L12() else L11(dr2);
    L11(x8):
      __1 = ldf `[[` in base;
      r10 = dyn __1(x8, "URL");
      goto L3(r10);
    L12():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L3(dx2);
    };
    r27 = dyn do_call(p1, p6);
    check L3() else D3();
  D3():
    deopt 9 [r27];
  L3():
    st y = r27;
    l = ld y;
    rownames__ = ldf `rownames<-`;
    check L4() else D4();
  D4():
    deopt 14 [NULL, l, NULL];
  L4():
    r28 = dyn rownames__(l, NULL, NULL);
    check L5() else D5();
  D5():
    deopt 16 [NULL, r28];
  L5():
    st y = r28;
    y = ld y;
    check L6() else D6();
  D6():
    deopt 18 [y];
  L6():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}