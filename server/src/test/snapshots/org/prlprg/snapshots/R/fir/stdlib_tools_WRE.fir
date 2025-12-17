fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st WRE = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg apidata:*, reg apidata1:V, reg c:L, reg apidata3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg apidata4:*, reg apidata5:V, reg c3:L, reg apidata7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r5:V, reg c4:V, reg c5:L, reg system_file:cls, reg r6:V, reg l:*, reg c6:L, reg r8:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r11:V, reg apidata8:*, reg apidata9:V, reg c7:L, reg apidata11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r12:V, reg r13:V, reg c8:L, reg l3:*, reg c9:L, reg r15:S, reg l5:*, reg dr8:V, reg dc4:L, reg dx8:V, reg r17:S, reg dx9:V, reg r18:V, reg r19:V, reg readLines:cls, reg apidata12:*, reg apidata13:V, reg c10:L, reg apidata15:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r21:V, reg p:p(V +), reg r23:V, reg l6:*, reg c11:L, reg r25:V, reg l8:*, reg dr12:V, reg dc6:L, reg dx12:V, reg r27:V, reg dx13:V, reg r28:V, reg apidata16:*, reg apidata17:V, reg c12:L, reg apidata19:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r30:V |
    mkenv;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    c2 = `as.logical`(r1);
    if c2 then L15() else L1();
  L8():
    apidata = ld apidata;
    check L10() else D0();
  L9():
    r = dyn base(<lang `$`(apidata, wrelines)>);
    goto L0(r);
  D0():
    deopt 1 [apidata];
  L1():
    goto L7();
  L7():
    apidata16 = ld apidata;
    check L49() else D7();
  L10():
    apidata1 = force? apidata;
    checkMissing(apidata1);
    c = `is.object`(apidata1);
    if c then L12() else L13(apidata1);
  L15():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  D7():
    deopt 42 [apidata16];
  L2(r4):
    c5 = `as.logical`(r4);
    if c5 then L23() else L3();
  L11(dx1):
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L12():
    dr = tryDispatchBuiltin.1("$", apidata1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(dr);
  L13(apidata3):
    r2 = `$`(apidata3, <sym wrelines>);
    goto L11(r2);
  L16():
    apidata4 = ld apidata;
    check L18() else D1();
  L17():
    r3 = dyn base1(<lang `$`(apidata, wreloc)>);
    goto L2(r3);
  L49():
    apidata17 = force? apidata16;
    checkMissing(apidata17);
    c12 = `is.object`(apidata17);
    if c12 then L51() else L52(apidata17);
  D1():
    deopt 6 [apidata4];
  L3():
    goto L6();
  L6():
    readLines = ldf readLines;
    check L42() else D5();
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L18():
    apidata5 = force? apidata4;
    checkMissing(apidata5);
    c3 = `is.object`(apidata5);
    if c3 then L20() else L21(apidata5);
  L23():
    system_file = ldf `system.file`;
    check L24() else D2();
  L50(dx15):
    popenv;
    return dx15;
  L51():
    dr14 = tryDispatchBuiltin.1("$", apidata17);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L53() else L52(dr14);
  L52(apidata19):
    r30 = `$`(apidata19, <sym wrelines>);
    goto L50(r30);
  D2():
    deopt 11 [];
  D5():
    deopt 34 [];
  L19(dx3):
    c4 = `==`(dx3, NULL);
    goto L2(c4);
  L20():
    dr2 = tryDispatchBuiltin.1("$", apidata5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L22() else L21(dr2);
  L21(apidata7):
    r5 = `$`(apidata7, <sym wreloc>);
    goto L19(r5);
  L24():
    r6 = dyn system_file[package, ]("tools", "wre.txt");
    check L25() else D3();
  L42():
    p = prom<V +>{
      apidata12 = ld apidata;
      apidata13 = force? apidata12;
      checkMissing(apidata13);
      c10 = `is.object`(apidata13);
      if c10 then L1() else L2(apidata13);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", apidata13);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(apidata15):
      r21 = `$`(apidata15, <sym wreloc>);
      goto L0(r21);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r23 = dyn readLines(p);
    check L43() else D6();
  L53():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L50(dx14);
  D3():
    deopt 15 [r6];
  D6():
    deopt 36 [r23];
  L22():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L19(dx2);
  L25():
    l = ld apidata;
    c6 = `is.object`(l);
    if c6 then L27() else L28(r6, l);
  L43():
    l6 = ld apidata;
    c11 = `is.object`(l6);
    if c11 then L45() else L46(r23, l6);
  L26(dx5):
    st apidata = dx5;
    apidata8 = ld apidata;
    check L30() else D4();
  L27():
    dr4 = tryDispatchBuiltin.0("$<-", l, r6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L29() else L28(r6, dr4);
  L28(r8, l2):
    r11 = `$<-`(l2, <sym wreloc>, r6);
    goto L26(r11);
  L44(r27, dx13):
    st apidata = dx13;
    goto L7();
  L45():
    dr12 = tryDispatchBuiltin.0("$<-", l6, r23);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L47() else L46(r23, dr12);
  L46(r25, l8):
    r28 = `$<-`(l8, <sym wrelines>, r23);
    goto L44(r25, r28);
  D4():
    deopt 19 [apidata8];
  L29():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L26(dx4);
  L30():
    apidata9 = force? apidata8;
    checkMissing(apidata9);
    c7 = `is.object`(apidata9);
    if c7 then L32() else L33(apidata9);
  L47():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L44(r23, dx12);
  L31(dx7):
    r13 = `==`(dx7, "");
    c8 = `as.logical`(r13);
    if c8 then L35() else L4();
  L32():
    dr6 = tryDispatchBuiltin.1("$", apidata9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L34() else L33(dr6);
  L33(apidata11):
    r12 = `$`(apidata11, <sym wreloc>);
    goto L31(r12);
  L4():
    goto L5(NULL);
  L5(r19):
    goto L6();
  L34():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L31(dx6);
  L35():
    l3 = ld apidata;
    c9 = `is.object`(l3);
    if c9 then L37() else L38("https://svn.r-project.org/R/trunk/doc/manual/R-exts.texi", l3);
  L36(r17, dx9):
    st apidata = dx9;
    goto L5(r17);
  L37():
    dr8 = tryDispatchBuiltin.0("$<-", l3, "https://svn.r-project.org/R/trunk/doc/manual/R-exts.texi");
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L39() else L38("https://svn.r-project.org/R/trunk/doc/manual/R-exts.texi", dr8);
  L38(r15, l5):
    r18 = `$<-`(l5, <sym wreloc>, "https://svn.r-project.org/R/trunk/doc/manual/R-exts.texi");
    goto L36(r15, r18);
  L39():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L36("https://svn.r-project.org/R/trunk/doc/manual/R-exts.texi", dx8);
  }
}