fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2336187965;
    st `as.function.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2336187965(x, envir, `...`) {
  (reg x:*, reg envir:*, reg ddd:dots) -+> V { var x:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg is_function:cls, reg r4:V, reg c:L, reg x3:*, reg x4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x5:*, reg x6:V, reg envir1:*, reg envir2:V, reg as_function_default:cls, reg r7:V |
    mkenv;
    st x = x;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L0() else L1(envir);
  L0():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L1(p);
  L1(envir_orDefault):
    st envir = envir_orDefault;
    st `...` = ddd;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L2(r3):
    c = `as.logical`(r3);
    if c then L9() else L3();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r2 = dyn base(<sym x>);
    goto L2(r2);
  D0():
    deopt 2 [x1];
  L3():
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    is_function = ldf `is.function` in base;
    r4 = dyn is_function(x2);
    check L8() else D1();
  L9():
    x3 = ld x;
    check L10() else D2();
  D1():
    deopt 5 [r4];
  D2():
    deopt 6 [x3];
  L4(r6):
    popenv;
    return r6;
  L8():
    goto L2(r4);
  L10():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L12():
    x5 = ld x;
    check L14() else D3();
  L13():
    r5 = dyn base1(<lang as.function.default(x, envir)>);
    goto L4(r5);
  D3():
    deopt 10 [x5];
  L14():
    x6 = force? x5;
    checkMissing(x6);
    envir1 = ld envir;
    check L15() else D4();
  D4():
    deopt 12 [envir1];
  L15():
    envir2 = force? envir1;
    checkMissing(envir2);
    as_function_default = ldf `as.function.default` in base;
    r7 = dyn as_function_default(x6, envir2);
    check L16() else D5();
  D5():
    deopt 15 [r7];
  L16():
    goto L4(r7);
  }
}