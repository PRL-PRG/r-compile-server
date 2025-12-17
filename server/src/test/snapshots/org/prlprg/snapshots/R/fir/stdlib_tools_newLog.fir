fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3256563282;
    st newLog = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3256563282(filename) {
  (reg filename:*) -+> V { var filename:*, reg filename_isMissing:L, reg filename_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg filename1:*, reg filename2:V, reg nzchar:cls, reg r2:V, reg c:L, reg file:cls, reg filename3:*, reg filename4:V, reg p:p(V +), reg r4:V, reg r5:V, reg new_env:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg emptyenv:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg con:*, reg con1:V, reg l:*, reg c1:L, reg con3:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r11:V, reg filename5:*, reg filename6:V, reg l3:*, reg c2:L, reg filename8:V, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r12:V, reg l6:*, reg c3:L, reg r14:S, reg l8:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r17:V, reg l9:*, reg c4:L, reg r19:I, reg l11:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r22:V, reg l12:*, reg c5:L, reg r24:I, reg l14:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r27:V, reg l15:*, reg c6:L, reg r29:I, reg l17:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r32:V, reg Log:*, reg Log1:V |
    mkenv;
    filename_isMissing = missing.0(filename);
    if filename_isMissing then L0("") else L0(filename);
  L0(filename_orDefault):
    st filename = filename_orDefault;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L1(r1):
    c = `as.logical`(r1);
    if c then L8() else L2();
  L4():
    filename1 = ld filename;
    check L6() else D0();
  L5():
    r = dyn base(<sym filename>);
    goto L1(r);
  D0():
    deopt 2 [filename1];
  L2():
    goto L3(0);
  L3(r5):
    st con = r5;
    new_env = ldf `new.env`;
    check L12() else D4();
  L6():
    filename2 = force? filename1;
    checkMissing(filename2);
    nzchar = ldf nzchar in base;
    r2 = dyn nzchar(filename2);
    check L7() else D1();
  L8():
    file = ldf file;
    check L9() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D4():
    deopt 15 [];
  L7():
    goto L1(r2);
  L9():
    p = prom<V +>{
      filename3 = ld filename;
      filename4 = force? filename3;
      checkMissing(filename4);
      return filename4;
    };
    r4 = dyn file(p, "wt");
    check L10() else D3();
  L12():
    p1 = prom<V +>{
      sym1 = ldf emptyenv;
      base1 = ldf emptyenv in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      emptyenv = ldf emptyenv in base;
      r8 = dyn emptyenv();
      goto L0(r8);
    L2():
      r6 = dyn base1();
      goto L0(r6);
    };
    r10 = dyn new_env[parent](p1);
    check L13() else D5();
  D3():
    deopt 10 [r4];
  D5():
    deopt 18 [r10];
  L10():
    goto L3(r4);
  L13():
    st Log = r10;
    con = ld con;
    check L14() else D6();
  D6():
    deopt 20 [con];
  L14():
    con1 = force? con;
    checkMissing(con1);
    l = ld Log;
    c1 = `is.object`(l);
    if c1 then L16() else L17(con1, l);
  L15(dx1):
    st Log = dx1;
    filename5 = ld filename;
    check L19() else D7();
  L16():
    dr = tryDispatchBuiltin.0("$<-", l, con1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(con1, dr);
  L17(con3, l2):
    r11 = `$<-`(l2, <sym con>, con1);
    goto L15(r11);
  D7():
    deopt 25 [filename5];
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(dx);
  L19():
    filename6 = force? filename5;
    checkMissing(filename6);
    l3 = ld Log;
    c2 = `is.object`(l3);
    if c2 then L21() else L22(filename6, l3);
  L20(dx3):
    st Log = dx3;
    l6 = ld Log;
    c3 = `is.object`(l6);
    if c3 then L25() else L26("*", l6);
  L21():
    dr2 = tryDispatchBuiltin.0("$<-", l3, filename6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L23() else L22(filename6, dr2);
  L22(filename8, l5):
    r12 = `$<-`(l5, <sym filename>, filename6);
    goto L20(r12);
  L23():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L20(dx2);
  L24(dx5):
    st Log = dx5;
    l9 = ld Log;
    c4 = `is.object`(l9);
    if c4 then L29() else L30(0, l9);
  L25():
    dr4 = tryDispatchBuiltin.0("$<-", l6, "*");
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L27() else L26("*", dr4);
  L26(r14, l8):
    r17 = `$<-`(l8, <sym stars>, "*");
    goto L24(r17);
  L27():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L24(dx4);
  L28(dx7):
    st Log = dx7;
    l12 = ld Log;
    c5 = `is.object`(l12);
    if c5 then L33() else L34(0, l12);
  L29():
    dr6 = tryDispatchBuiltin.0("$<-", l9, 0);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L31() else L30(0, dr6);
  L30(r19, l11):
    r22 = `$<-`(l11, <sym errors>, 0);
    goto L28(r22);
  L31():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L28(dx6);
  L32(dx9):
    st Log = dx9;
    l15 = ld Log;
    c6 = `is.object`(l15);
    if c6 then L37() else L38(0, l15);
  L33():
    dr8 = tryDispatchBuiltin.0("$<-", l12, 0);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L35() else L34(0, dr8);
  L34(r24, l14):
    r27 = `$<-`(l14, <sym warnings>, 0);
    goto L32(r27);
  L35():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L32(dx8);
  L36(dx11):
    st Log = dx11;
    Log = ld Log;
    check L40() else D8();
  L37():
    dr10 = tryDispatchBuiltin.0("$<-", l15, 0);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L39() else L38(0, dr10);
  L38(r29, l17):
    r32 = `$<-`(l17, <sym notes>, 0);
    goto L36(r32);
  D8():
    deopt 50 [Log];
  L39():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L36(dx10);
  L40():
    Log1 = force? Log;
    checkMissing(Log1);
    popenv;
    return Log1;
  }
}