fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3791839121;
    st `.parentEnvList` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3791839121(ev) {
  (reg ev:*) -+> V { var ev:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ev1:*, reg ev2:V, reg as_environment:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg ev3:*, reg ev4:V, reg list:cls, reg r5:V, reg isNamespace:cls, reg ev5:*, reg ev6:V, reg p:p(V +), reg r7:V, reg r8:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg ev7:*, reg ev8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg baseenv:cls, reg r13:V, reg identical:cls, reg r14:V, reg c1:L, reg _BaseNamespaceEnv:*, reg _BaseNamespaceEnv1:V, reg l:*, reg c2:L, reg _BaseNamespaceEnv3:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg _BaseNamespaceEnv10:V, reg l5:*, reg _BaseNamespaceEnv11:V, reg r16:V, reg value:*, reg value1:V, reg length:cls, reg r17:V, reg ____:cls, reg r18:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg ev9:*, reg ev10:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg r23:V, reg emptyenv:cls, reg r24:V, reg identical1:cls, reg r25:V, reg c3:L, reg parent_env:cls, reg ev11:*, reg ev12:V, reg p1:p(V +), reg r27:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r28:V, reg r29:V, reg value2:*, reg value3:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r30:V, reg r31:V, reg ev13:*, reg ev14:V, reg list1:cls, reg r32:V, reg c4:cls, reg r33:V, reg value4:*, reg value5:V |
    mkenv;
    st ev = ev;
    sym = ldf `as.environment`;
    base = ldf `as.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L0(r1):
    st ev = r1;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L15():
    ev1 = ld ev;
    check L17() else D0();
  L16():
    r = dyn base(<sym ev>);
    goto L0(r);
  D0():
    deopt 2 [ev1];
  L1(r4):
    st value = r4;
    goto L14();
  L17():
    ev2 = force? ev1;
    checkMissing(ev2);
    as_environment = ldf `as.environment` in base;
    r2 = dyn as_environment(ev2);
    check L18() else D1();
  L19():
    ev3 = ld ev;
    check L21() else D2();
  L20():
    r3 = dyn base1(<sym ev>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [ev3];
  L14():
    isNamespace = ldf isNamespace;
    check L23() else D4();
  L18():
    goto L0(r2);
  L21():
    ev4 = force? ev3;
    checkMissing(ev4);
    list = ldf list in base;
    r5 = dyn list(ev4);
    check L22() else D3();
  D3():
    deopt 12 [r5];
  D4():
    deopt 15 [];
  L22():
    goto L1(r5);
  L23():
    p = prom<V +>{
      ev5 = ld ev;
      ev6 = force? ev5;
      checkMissing(ev6);
      return ev6;
    };
    r7 = dyn isNamespace(p);
    check L24() else D5();
  D5():
    deopt 17 [r7];
  L24():
    r8 = `!`(r7);
    c = `as.logical`(r8);
    if c then L25() else L2();
  L2():
    value4 = ld value;
    check L65() else D21();
  L25():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  D21():
    deopt 91 [value4];
  L3(r10):
    c1 = `as.logical`(r10);
    if c1 then L33() else L5();
  L26():
    ev7 = ld ev;
    check L28() else D6();
  L27():
    r9 = dyn base2(<sym ev>, <lang baseenv()>);
    goto L3(r9);
  L65():
    value5 = force? value4;
    checkMissing(value5);
    popenv;
    return value5;
  D6():
    deopt 21 [ev7];
  L5():
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L44() else L45();
  L28():
    ev8 = force? ev7;
    checkMissing(ev8);
    sym3 = ldf baseenv;
    base3 = ldf baseenv in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  L33():
    _BaseNamespaceEnv = ld `.BaseNamespaceEnv`;
    check L34() else D9();
  D9():
    deopt 36 [_BaseNamespaceEnv];
  L4(r12):
    identical = ldf identical in base;
    r14 = dyn identical(ev8, r12, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L32() else D8();
  L9(r21):
    c3 = `as.logical`(r21);
    if c3 then L51() else L11();
  L29():
    baseenv = ldf baseenv in base;
    r13 = dyn baseenv();
    check L31() else D7();
  L30():
    r11 = dyn base3();
    goto L4(r11);
  L34():
    _BaseNamespaceEnv1 = force? _BaseNamespaceEnv;
    checkMissing(_BaseNamespaceEnv1);
    l = ld value;
    c2 = `is.object`(l);
    if c2 then L35() else L36(_BaseNamespaceEnv1, l);
  L44():
    ev9 = ld ev;
    check L46() else D12();
  L45():
    r20 = dyn base5(<sym ev>, <lang emptyenv()>);
    goto L9(r20);
  D7():
    deopt 26 [r13];
  D8():
    deopt 35 [r14];
  D12():
    deopt 51 [ev9];
  L6(dx1):
    st value = dx1;
    goto L2();
  L11():
    parent_env = ldf `parent.env`;
    check L54() else D15();
  L31():
    goto L4(r13);
  L32():
    goto L3(r14);
  L35():
    dr = tryDispatchBuiltin.0("[[<-", l, _BaseNamespaceEnv1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(_BaseNamespaceEnv1, dr);
  L36(_BaseNamespaceEnv3, l2):
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L38() else L39();
  L46():
    ev10 = force? ev9;
    checkMissing(ev10);
    sym6 = ldf emptyenv;
    base6 = ldf emptyenv in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L47() else L48();
  L51():
    goto L2();
  D15():
    deopt 71 [];
  L7(_BaseNamespaceEnv10, l5, _BaseNamespaceEnv11, r16):
    ____ = ldf `[[<-` in base;
    r18 = dyn ____(l5, _BaseNamespaceEnv11, r16);
    goto L6(r18);
  L10(r23):
    identical1 = ldf identical in base;
    r25 = dyn identical1(ev10, r23, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L50() else D14();
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L38():
    value = ld value;
    check L40() else D10();
  L39():
    r15 = dyn base4(<sym value>);
    goto L7(_BaseNamespaceEnv3, l2, _BaseNamespaceEnv1, r15);
  L47():
    emptyenv = ldf emptyenv in base;
    r24 = dyn emptyenv();
    check L49() else D13();
  L48():
    r22 = dyn base6();
    goto L10(r22);
  L54():
    p1 = prom<V +>{
      ev11 = ld ev;
      ev12 = force? ev11;
      checkMissing(ev12);
      return ev12;
    };
    r27 = dyn parent_env(p1);
    check L55() else D16();
  D10():
    deopt 41 [_BaseNamespaceEnv3, l2, _BaseNamespaceEnv1, value];
  D13():
    deopt 56 [r24];
  D14():
    deopt 65 [r25];
  D16():
    deopt 73 [r27];
  L40():
    value1 = force? value;
    checkMissing(value1);
    length = ldf length in base;
    r17 = dyn length(value1);
    check L41() else D11();
  L49():
    goto L10(r24);
  L50():
    goto L9(r25);
  L55():
    st ev = r27;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L56() else L57();
  D11():
    deopt 44 [_BaseNamespaceEnv3, l2, _BaseNamespaceEnv1, r17];
  L12(r29):
    st value = r29;
    goto L14();
  L41():
    goto L7(_BaseNamespaceEnv3, l2, _BaseNamespaceEnv1, r17);
  L56():
    value2 = ld value;
    check L58() else D17();
  L57():
    r28 = dyn base7(<sym value>, <lang list(ev)>);
    goto L12(r28);
  D17():
    deopt 77 [value2];
  L58():
    value3 = force? value2;
    checkMissing(value3);
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L59() else L60();
  L13(r31):
    c4 = ldf c in base;
    r33 = dyn c4(value3, r31);
    check L63() else D20();
  L59():
    ev13 = ld ev;
    check L61() else D18();
  L60():
    r30 = dyn base8(<sym ev>);
    goto L13(r30);
  D18():
    deopt 81 [ev13];
  D20():
    deopt 86 [r33];
  L61():
    ev14 = force? ev13;
    checkMissing(ev14);
    list1 = ldf list in base;
    r32 = dyn list1(ev14);
    check L62() else D19();
  L63():
    goto L12(r33);
  D19():
    deopt 84 [r32];
  L62():
    goto L13(r32);
  }
}