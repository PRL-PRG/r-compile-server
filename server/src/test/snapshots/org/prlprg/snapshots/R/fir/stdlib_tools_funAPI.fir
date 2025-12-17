fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st funAPI = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg apidata:*, reg apidata1:V, reg c:L, reg apidata3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:V, reg c2:L, reg getFunAPI:cls, reg r3:V, reg l:*, reg c3:L, reg r5:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r7:V, reg dx3:V, reg r8:V, reg apidata4:*, reg apidata5:V, reg c4:L, reg apidata7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r10:V |
    mkenv;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c2 = `as.logical`(r1);
    if c2 then L10() else L1();
  L3():
    apidata = ld apidata;
    check L5() else D0();
  L4():
    r = dyn base(<lang `$`(apidata, fapi)>);
    goto L0(r);
  D0():
    deopt 1 [apidata];
  L1():
    goto L2();
  L2():
    apidata4 = ld apidata;
    check L18() else D3();
  L5():
    apidata1 = force? apidata;
    checkMissing(apidata1);
    c = `is.object`(apidata1);
    if c then L7() else L8(apidata1);
  L10():
    getFunAPI = ldf getFunAPI;
    check L11() else D1();
  D1():
    deopt 6 [];
  D3():
    deopt 13 [apidata4];
  L6(dx1):
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L7():
    dr = tryDispatchBuiltin.1("$", apidata1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(apidata3):
    r2 = `$`(apidata3, <sym fapi>);
    goto L6(r2);
  L11():
    r3 = dyn getFunAPI();
    check L12() else D2();
  L18():
    apidata5 = force? apidata4;
    checkMissing(apidata5);
    c4 = `is.object`(apidata5);
    if c4 then L20() else L21(apidata5);
  D2():
    deopt 7 [r3];
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L12():
    l = ld apidata;
    c3 = `is.object`(l);
    if c3 then L14() else L15(r3, l);
  L19(dx5):
    popenv;
    return dx5;
  L20():
    dr4 = tryDispatchBuiltin.1("$", apidata5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L22() else L21(dr4);
  L21(apidata7):
    r10 = `$`(apidata7, <sym fapi>);
    goto L19(r10);
  L13(r7, dx3):
    st apidata = dx3;
    goto L2();
  L14():
    dr2 = tryDispatchBuiltin.0("$<-", l, r3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L16() else L15(r3, dr2);
  L15(r5, l2):
    r8 = `$<-`(l2, <sym fapi>, r3);
    goto L13(r5, r8);
  L22():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L19(dx4);
  L16():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(r3, dx2);
  }
}