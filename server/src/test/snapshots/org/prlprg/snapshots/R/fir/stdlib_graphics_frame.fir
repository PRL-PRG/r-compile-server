fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st frame = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg getHook:cls, reg r:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg i7:I, reg r2:V, reg fun:*, reg fun1:V, reg c1:L, reg c2:L, reg get:cls, reg fun2:*, reg fun3:V, reg p:p(V +), reg r4:V, reg i10:I, reg try:cls, reg fun4:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg C_plot_new:*, reg C_plot_new1:V, reg _External2:cls, reg r11:V, reg ___:cls, reg r12:V, reg r13:cls, reg r14:V, reg getHook1:cls, reg r15:V, reg s1:V, reg l1:I, reg i11:I, reg i12:I, reg i13:I, reg c3:L, reg x1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg i18:I, reg r17:V, reg fun5:*, reg fun6:V, reg c4:L, reg c5:L, reg get1:cls, reg fun7:*, reg fun8:V, reg p2:p(V +), reg r19:V, reg i21:I, reg try1:cls, reg fun9:cls, reg r21:V, reg p3:p(V +), reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg invisible:cls, reg r26:V |
    mkenv;
    getHook = ldf getHook;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    r = dyn getHook("before.plot.new");
    check L13() else D1();
  D1():
    deopt 3 [r];
  L13():
    s = toForSeq(r);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L14() else L4();
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st fun = x;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L14():
    sym1 = ldf `.External2`;
    base1 = ldf `.External2` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L1(i7, r2):
    c2 = `as.logical`(r2);
    if c2 then L18() else L2();
  L5():
    ___ = ldf `:::`;
    check L28() else D9();
  L15():
    fun = ld fun;
    check L17() else D2();
  L16():
    r1 = dyn base(<sym fun>);
    goto L1(i2, r1);
  L24():
    C_plot_new = ld C_plot_new;
    check L26() else D7();
  L25():
    r9 = dyn base1(<sym C_plot_new>);
    goto L5();
  D2():
    deopt 5 [i2, fun];
  D7():
    deopt 24 [C_plot_new];
  D9():
    deopt 29 [];
  L2():
    goto L3(i7);
  L3(i10):
    try = ldf try;
    check L22() else D5();
  L17():
    fun1 = force? fun;
    checkMissing(fun1);
    c1 = `is.character`(fun1);
    goto L1(i2, c1);
  L18():
    get = ldf get;
    check L19() else D3();
  L26():
    C_plot_new1 = force? C_plot_new;
    checkMissing(C_plot_new1);
    _External2 = ldf `.External2` in base;
    r11 = dyn _External2(C_plot_new1);
    check L27() else D8();
  L28():
    r12 = dyn ___("grDevices", "recordPalette");
    check L29() else D10();
  D3():
    deopt 9 [i7];
  D5():
    deopt 16 [i10];
  D8():
    deopt 27 [r11];
  D10():
    deopt 32 [r12];
  L19():
    p = prom<V +>{
      fun2 = ld fun;
      fun3 = force? fun2;
      checkMissing(fun3);
      return fun3;
    };
    r4 = dyn get(p);
    check L20() else D4();
  L22():
    p1 = prom<V +>{
      fun4 = ldf fun;
      r6 = dyn fun4();
      return r6;
    };
    r8 = dyn try(p1);
    check L23() else D6();
  L27():
    goto L5();
  L29():
    checkFun.0(r12);
    r13 = r12 as cls;
    r14 = dyn r13();
    check L30() else D11();
  D4():
    deopt 11 [i7, r4];
  D6():
    deopt 18 [i10, r8];
  D11():
    deopt 34 [r14];
  L20():
    st fun = r4;
    goto L3(i7);
  L23():
    goto L0(i10);
  L30():
    getHook1 = ldf getHook;
    check L31() else D12();
  D12():
    deopt 36 [];
  L31():
    r15 = dyn getHook1("plot.new");
    check L32() else D13();
  D13():
    deopt 38 [r15];
  L32():
    s1 = toForSeq(r15);
    l1 = length(s1);
    i11 = 0;
    goto L6(i11);
  L6(i12):
    i13 = `+`.1(i12, 1);
    c3 = `<`.1(l1, i13);
    if c3 then L33() else L10();
  L10():
    x1 = `[[`(s1, i13, NULL, TRUE);
    st fun = x1;
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L33():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L7(i18, r17):
    c5 = `as.logical`(r17);
    if c5 then L37() else L8();
  L11(r25):
    popenv;
    return r25;
  L34():
    fun5 = ld fun;
    check L36() else D14();
  L35():
    r16 = dyn base2(<sym fun>);
    goto L7(i13, r16);
  L43():
    invisible = ldf invisible in base;
    r26 = dyn invisible();
    check L45() else D19();
  L44():
    r24 = dyn base3();
    goto L11(r24);
  D14():
    deopt 40 [i13, fun5];
  D19():
    deopt 60 [r26];
  L8():
    goto L9(i18);
  L9(i21):
    try1 = ldf try;
    check L41() else D17();
  L36():
    fun6 = force? fun5;
    checkMissing(fun6);
    c4 = `is.character`(fun6);
    goto L7(i13, c4);
  L37():
    get1 = ldf get;
    check L38() else D15();
  L45():
    goto L11(r26);
  D15():
    deopt 44 [i18];
  D17():
    deopt 51 [i21];
  L38():
    p2 = prom<V +>{
      fun7 = ld fun;
      fun8 = force? fun7;
      checkMissing(fun8);
      return fun8;
    };
    r19 = dyn get1(p2);
    check L39() else D16();
  L41():
    p3 = prom<V +>{
      fun9 = ldf fun;
      r21 = dyn fun9();
      return r21;
    };
    r23 = dyn try1(p3);
    check L42() else D18();
  D16():
    deopt 46 [i18, r19];
  D18():
    deopt 53 [i21, r23];
  L39():
    st fun = r19;
    goto L9(i18);
  L42():
    goto L6(i21);
  }
}