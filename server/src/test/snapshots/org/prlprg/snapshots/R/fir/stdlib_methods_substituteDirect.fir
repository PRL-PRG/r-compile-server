fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1075237963;
    st substituteDirect = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1075237963(object, frame, cleanFunction) {
  (reg object:*, reg frame:*, reg cleanFunction:*) -+> V { var object:*, var frame:*, reg frame_isMissing:L, reg frame_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), var cleanFunction:*, reg cleanFunction_isMissing:L, reg cleanFunction_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg C_do_substitute_direct:*, reg C_do_substitute_direct1:V, reg object1:*, reg object2:V, reg frame1:*, reg frame2:V, reg vargs:dots, reg r4:V, reg cleanFunction1:*, reg cleanFunction2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c5:L, reg r6:V, reg value:*, reg value1:V, reg is_function:cls, reg r7:V, reg c6:L, reg c7:V, reg c9:L, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg l:*, reg environment__:cls, reg r8:V, reg value2:*, reg value3:V |
    mkenv;
    st object = object;
    frame_isMissing = missing.0(frame);
    if frame_isMissing then L0() else L1(frame);
  L0():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L1(p);
  L1(frame_orDefault):
    st frame = frame_orDefault;
    cleanFunction_isMissing = missing.0(cleanFunction);
    if cleanFunction_isMissing then L2(TRUE) else L2(cleanFunction);
  L2(cleanFunction_orDefault):
    st cleanFunction = cleanFunction_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L3(r3):
    st value = r3;
    cleanFunction1 = ld cleanFunction;
    check L13() else D3();
  L8():
    C_do_substitute_direct = ld C_do_substitute_direct;
    check L10() else D0();
  L9():
    r2 = dyn base(<sym C_do_substitute_direct>, <sym object>, <sym frame>);
    goto L3(r2);
  D0():
    deopt 1 [C_do_substitute_direct];
  D3():
    deopt 7 [cleanFunction1];
  L10():
    C_do_substitute_direct1 = force? C_do_substitute_direct;
    checkMissing(C_do_substitute_direct1);
    object1 = ld object;
    check L11() else D1();
  L13():
    cleanFunction2 = force? cleanFunction1;
    checkMissing(cleanFunction2);
    c = `as.logical`(cleanFunction2);
    if c then L14() else L4(c);
  D1():
    deopt 2 [C_do_substitute_direct1, object1];
  L4(c2):
    c9 = `as.logical`(c2);
    if c9 then L20() else L6();
  L11():
    object2 = force? object1;
    checkMissing(object2);
    frame1 = ld frame;
    check L12() else D2();
  L14():
    sym1 = ldf `is.function`;
    base1 = ldf `is.function` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  D2():
    deopt 3 [C_do_substitute_direct1, object2, frame1];
  L5(c5, r6):
    c6 = `as.logical`(r6);
    c7 = `&&`(c5, c6);
    goto L4(c7);
  L6():
    goto L7();
  L7():
    value2 = ld value;
    check L25() else D9();
  L12():
    frame2 = force? frame1;
    checkMissing(frame2);
    vargs = dots[object2, frame2];
    r4 = `.Call`(C_do_substitute_direct1, vargs, <missing>);
    goto L3(r4);
  L15():
    value = ld value;
    check L17() else D4();
  L16():
    r5 = dyn base1(<sym value>);
    goto L5(c, r5);
  L20():
    _GlobalEnv = ld `.GlobalEnv`;
    check L21() else D6();
  D4():
    deopt 11 [c, value];
  D6():
    deopt 16 [_GlobalEnv];
  D9():
    deopt 25 [value2];
  L17():
    value1 = force? value;
    checkMissing(value1);
    is_function = ldf `is.function` in base;
    r7 = dyn is_function(value1);
    check L18() else D5();
  L21():
    _GlobalEnv1 = force? _GlobalEnv;
    checkMissing(_GlobalEnv1);
    l = ld value;
    environment__ = ldf `environment<-`;
    check L22() else D7();
  L25():
    value3 = force? value2;
    checkMissing(value3);
    popenv;
    return value3;
  D5():
    deopt 14 [c, r7];
  D7():
    deopt 19 [_GlobalEnv1, l, _GlobalEnv1];
  L18():
    goto L5(c, r7);
  L22():
    r8 = dyn environment__(l, NULL, _GlobalEnv1);
    check L23() else D8();
  D8():
    deopt 21 [_GlobalEnv1, r8];
  L23():
    st value = r8;
    goto L7();
  }
}