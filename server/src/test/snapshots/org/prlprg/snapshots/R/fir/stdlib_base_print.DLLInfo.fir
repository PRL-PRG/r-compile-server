fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `print.DLLInfo` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg as_data_frame_list:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg x7:V, reg r1:V, reg c1:cls, reg r2:V, reg __:cls, reg r3:V, reg p:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c2:cls, reg r8:V, reg l:*, reg names__:cls, reg r9:V, reg write_dcf:cls, reg tmp:*, reg tmp1:V, reg p1:p(V +), reg ddd1:dots?, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg x8:*, reg x9:V, reg invisible:cls, reg r14:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    as_data_frame_list = ldf `as.data.frame.list`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L2() else L3(x2);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(x4):
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L5() else L6();
    L1(x7, r1):
      __ = ldf `[` in base;
      r3 = dyn __(x7, r1);
      goto L0(r3);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      c1 = ldf c in base;
      r2 = dyn c1("name", "path", "dynamicLookup");
      goto L1(x4, r2);
    L6():
      r = dyn base("name", "path", "dynamicLookup");
      goto L1(x4, r);
    };
    r5 = dyn as_data_frame_list(p);
    check L3() else D1();
  D1():
    deopt 3 [r5];
  L3():
    st tmp = r5;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L0(r7):
    l = ld tmp;
    names__ = ldf `names<-`;
    check L7() else D3();
  L4():
    c2 = ldf c in base;
    r8 = dyn c2("DLL name", "Filename", "Dynamic lookup");
    check L6() else D2();
  L5():
    r6 = dyn base1("DLL name", "Filename", "Dynamic lookup");
    goto L0(r6);
  D2():
    deopt 11 [r8];
  D3():
    deopt 13 [r7, l, r7];
  L6():
    goto L0(r8);
  L7():
    r9 = dyn names__(l, NULL, r7);
    check L8() else D4();
  D4():
    deopt 15 [r7, r9];
  L8():
    st tmp = r9;
    write_dcf = ldf `write.dcf`;
    check L9() else D5();
  D5():
    deopt 18 [];
  L9():
    p1 = prom<V +>{
      tmp = ld tmp;
      tmp1 = force? tmp;
      checkMissing(tmp1);
      return tmp1;
    };
    ddd1 = ld `...`;
    r11 = dyn write_dcf[, `...`](p1, ddd1);
    check L10() else D6();
  D6():
    deopt 21 [r11];
  L10():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L1(r13):
    popenv;
    return r13;
  L11():
    x8 = ld x;
    check L13() else D7();
  L12():
    r12 = dyn base2(<sym x>);
    goto L1(r12);
  D7():
    deopt 24 [x8];
  L13():
    x9 = force? x8;
    checkMissing(x9);
    invisible = ldf invisible in base;
    r14 = dyn invisible(x9);
    check L14() else D8();
  D8():
    deopt 27 [r14];
  L14():
    goto L1(r14);
  }
}