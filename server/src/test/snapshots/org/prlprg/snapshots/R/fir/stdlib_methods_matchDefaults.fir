fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner578816670;
    st matchDefaults = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner578816670(method, generic) {
  (reg method:*, reg generic:*) -+> V { var method:*, var generic:*, reg formals:cls, reg method1:*, reg method2:V, reg p:p(V +), reg r1:V, reg formals1:cls, reg generic1:*, reg generic2:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg margs:*, reg margs1:V, reg names:cls, reg r6:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg margs2:*, reg margs3:V, reg c1:L, reg i6:I, reg margs5:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg arg:*, reg arg1:V, reg __:cls, reg r7:V, reg gargs:*, reg gargs1:V, reg c2:L, reg i10:I, reg gargs3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i12:I, reg dx3:V, reg arg2:*, reg arg3:V, reg __1:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg i15:I, reg r10:V, reg missing:cls, reg r11:V, reg c3:L, reg i17:I, reg c5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg i20:I, reg c8:L, reg r13:V, reg missing1:cls, reg r14:V, reg r15:V, reg c9:L, reg c10:V, reg c12:L, reg gargs4:*, reg gargs5:V, reg c13:L, reg i25:I, reg gargs7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i27:I, reg dx5:V, reg arg4:*, reg arg5:V, reg __2:cls, reg r16:V, reg l1:*, reg c14:L, reg i29:I, reg dx7:V, reg l3:*, reg dr6:V, reg dc3:L, reg dx9:V, reg i31:I, reg dx10:V, reg dx11:V, reg arg6:*, reg arg7:V, reg ___:cls, reg r17:V, reg i32:I, reg changes:*, reg changes1:V, reg c15:L, reg margs6:*, reg margs7:V, reg l4:*, reg formals__:cls, reg environment:cls, reg method3:*, reg method4:V, reg p2:p(V +), reg r19:V, reg p3:p(V +), reg r21:V, reg method5:*, reg method6:V |
    mkenv;
    st method = method;
    st generic = generic;
    st changes = FALSE;
    formals = ldf formals;
    check L14() else D0();
  D0():
    deopt 4 [];
  L14():
    p = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r1 = dyn formals(p);
    check L15() else D1();
  D1():
    deopt 6 [r1];
  L15():
    st margs = r1;
    formals1 = ldf formals;
    check L16() else D2();
  D2():
    deopt 9 [];
  L16():
    p1 = prom<V +>{
      generic1 = ld generic;
      generic2 = force? generic1;
      checkMissing(generic2);
      return generic2;
    };
    r3 = dyn formals1(p1);
    check L17() else D3();
  D3():
    deopt 11 [r3];
  L17():
    st gargs = r3;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L0(r5):
    s = toForSeq(r5);
    l = length(s);
    i = 0;
    goto L1(i);
  L18():
    margs = ld margs;
    check L20() else D4();
  L19():
    r4 = dyn base(<sym margs>);
    goto L0(r4);
  D4():
    deopt 15 [margs];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L22() else L11();
  L20():
    margs1 = force? margs;
    checkMissing(margs1);
    names = ldf names in base;
    r6 = dyn names(margs1);
    check L21() else D5();
  D5():
    deopt 18 [r6];
  L11():
    x = `[[`(s, i2, NULL, TRUE);
    st arg = x;
    margs2 = ld margs;
    check L23() else D6();
  L21():
    goto L0(r6);
  L22():
    changes = ld changes;
    check L50() else D13();
  D6():
    deopt 19 [i2, margs2];
  D13():
    deopt 57 [changes];
  L23():
    margs3 = force? margs2;
    checkMissing(margs3);
    c1 = `is.object`(margs3);
    if c1 then L24() else L25(i2, margs3);
  L50():
    changes1 = force? changes;
    checkMissing(changes1);
    c15 = `as.logical`(changes1);
    if c15 then L51() else L12();
  L2(i8, dx1):
    st marg = dx1;
    gargs = ld gargs;
    check L28() else D8();
  L12():
    goto L13();
  L13():
    method5 = ld method;
    check L56() else D17();
  L24():
    dr = tryDispatchBuiltin.1("[[", margs3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L26() else L25(i2, dr);
  L25(i6, margs5):
    arg = ld arg;
    check L27() else D7();
  L51():
    margs6 = ld margs;
    check L52() else D14();
  D7():
    deopt 21 [i6, margs5, arg];
  D8():
    deopt 25 [i8, gargs];
  D14():
    deopt 59 [margs6];
  D17():
    deopt 70 [method5];
  L26():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(i2, dx);
  L27():
    arg1 = force? arg;
    __ = ldf `[[` in base;
    r7 = dyn __(margs5, arg1);
    goto L2(i6, r7);
  L28():
    gargs1 = force? gargs;
    checkMissing(gargs1);
    c2 = `is.object`(gargs1);
    if c2 then L29() else L30(i8, gargs1);
  L52():
    margs7 = force? margs6;
    checkMissing(margs7);
    l4 = ld method;
    formals__ = ldf `formals<-`;
    check L53() else D15();
  L56():
    method6 = force? method5;
    checkMissing(method6);
    popenv;
    return method6;
  D15():
    deopt 62 [margs7, l4, margs7];
  L3(i12, dx3):
    st garg = dx3;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L29():
    dr2 = tryDispatchBuiltin.1("[[", gargs1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L31() else L30(i8, dr2);
  L30(i10, gargs3):
    arg2 = ld arg;
    check L32() else D9();
  L53():
    p3 = prom<V +>{
      environment = ldf environment;
      p2 = prom<V +>{
        method3 = ld method;
        method4 = force? method3;
        checkMissing(method4);
        return method4;
      };
      r19 = dyn environment(p2);
      return r19;
    };
    r21 = dyn formals__[, , envir, ](l4, NULL, p3, margs7);
    check L54() else D16();
  D9():
    deopt 27 [i10, gargs3, arg2];
  D16():
    deopt 66 [margs7, r21];
  L4(i15, r10):
    c3 = `as.logical`(r10);
    if c3 then L35() else L5(i15, c3);
  L31():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(i8, dx2);
  L32():
    arg3 = force? arg2;
    __1 = ldf `[[` in base;
    r8 = dyn __1(gargs3, arg3);
    goto L3(i10, r8);
  L33():
    missing = ldf missing in base;
    r11 = dyn missing(<sym marg>);
    goto L4(i12, r11);
  L34():
    r9 = dyn base1(<sym marg>);
    goto L4(i12, r9);
  L54():
    st method = r21;
    goto L13();
  L5(i17, c5):
    c12 = `as.logical`(c5);
    if c12 then L39() else L7();
  L35():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L6(i20, c8, r13):
    r15 = `!`(r13);
    c9 = `as.logical`(r15);
    c10 = `&&`(c8, c9);
    goto L5(i20, c10);
  L7():
    goto L10(i17);
  L10(i32):
    goto L1(i32);
  L36():
    missing1 = ldf missing in base;
    r14 = dyn missing1(<sym garg>);
    goto L6(i15, c3, r14);
  L37():
    r12 = dyn base2(<sym garg>);
    goto L6(i15, c3, r12);
  L39():
    st changes = TRUE;
    gargs4 = ld gargs;
    check L40() else D10();
  D10():
    deopt 42 [i17, gargs4];
  L40():
    gargs5 = force? gargs4;
    checkMissing(gargs5);
    c13 = `is.object`(gargs5);
    if c13 then L41() else L42(i17, gargs5);
  L8(i27, dx5):
    l1 = ld margs;
    c14 = `is.object`(l1);
    if c14 then L45() else L46(i27, dx5, l1);
  L41():
    dr4 = tryDispatchBuiltin.1("[", gargs5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L43() else L42(i17, dr4);
  L42(i25, gargs7):
    arg4 = ld arg;
    check L44() else D11();
  D11():
    deopt 44 [i25, gargs7, arg4];
  L9(i31, dx10, dx11):
    st margs = dx11;
    goto L10(i31);
  L43():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L8(i17, dx4);
  L44():
    arg5 = force? arg4;
    __2 = ldf `[` in base;
    r16 = dyn __2(gargs7, arg5);
    goto L8(i25, r16);
  L45():
    dr6 = tryDispatchBuiltin.0("[<-", l1, dx5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L47() else L46(i27, dx5, dr6);
  L46(i29, dx7, l3):
    arg6 = ld arg;
    check L48() else D12();
  D12():
    deopt 48 [i29, dx7, l3, dx5, arg6];
  L47():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L9(i27, dx5, dx9);
  L48():
    arg7 = force? arg6;
    ___ = ldf `[<-` in base;
    r17 = dyn ___(l3, dx5, arg7);
    goto L9(i29, dx7, r17);
  }
}