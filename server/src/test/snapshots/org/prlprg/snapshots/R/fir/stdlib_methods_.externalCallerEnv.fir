fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4131713741;
    st `.externalCallerEnv` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4131713741(n, nmax) {
  (reg n:*, reg nmax:*) -+> V { var n:*, reg n_isMissing:L, reg n_orDefault:*, var nmax:*, reg nmax_isMissing:L, reg nmax_orDefault:*, reg sys_nframe:cls, reg r:V, reg n1:*, reg n2:V, reg r1:V, reg r2:V, reg p:p(V +), reg nmax1:*, reg nmax2:V, reg r4:V, reg c:L, reg stop:cls, reg r5:V, reg topenv:cls, reg parent_frame:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg n3:*, reg n4:V, reg r12:V, reg nmax3:*, reg nmax4:V, reg seq_int:cls, reg r13:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg sys_function:cls, reg back:*, reg back1:V, reg p2:p(V +), reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg i7:I, reg r17:V, reg fun:*, reg fun1:V, reg is_function:cls, reg r18:V, reg c2:L, reg environment:cls, reg fun2:*, reg fun3:V, reg p3:p(V +), reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg i12:I, reg r22:V, reg ev:*, reg ev1:V, reg _methodsNamespace:*, reg _methodsNamespace1:V, reg identical:cls, reg r23:V, reg r24:V, reg c3:L, reg i18:I, reg ev2:*, reg ev3:V |
    mkenv;
    n_isMissing = missing.0(n);
    if n_isMissing then L0(2.0) else L0(n);
  L0(n_orDefault):
    st n = n_orDefault;
    nmax_isMissing = missing.0(nmax);
    if nmax_isMissing then L1() else L2(nmax);
  L1():
    p = prom<V +>{
      sys_nframe = ldf `sys.nframe`;
      r = dyn sys_nframe();
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      r1 = `-`(r, n2);
      r2 = `+`(r1, 1.0);
      return r2;
    };
    goto L2(p);
  L2(nmax_orDefault):
    st nmax = nmax_orDefault;
    nmax1 = ld nmax;
    check L15() else D0();
  D0():
    deopt 0 [nmax1];
  L15():
    nmax2 = force? nmax1;
    checkMissing(nmax2);
    r4 = `<`(nmax2, 1.0);
    c = `as.logical`(r4);
    if c then L16() else L3();
  L3():
    goto L4();
  L4():
    topenv = ldf topenv;
    check L20() else D3();
  L16():
    stop = ldf stop;
    check L17() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 11 [];
  L17():
    r5 = dyn stop("got a negative maximum number of frames to look at");
    check L18() else D2();
  L20():
    p1 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r7 = dyn parent_frame();
      return r7;
    };
    r9 = dyn topenv(p1);
    check L21() else D4();
  D2():
    deopt 7 [r5];
  D4():
    deopt 13 [r9];
  L18():
    goto L4();
  L21():
    st ev = r9;
    sym = ldf `seq.int`;
    base = ldf `seq.int` in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L5(r11):
    s = toForSeq(r11);
    l = length(s);
    i = 0;
    goto L6(i);
  L22():
    n3 = ld n;
    check L24() else D5();
  L23():
    r10 = dyn base[from, `length.out`](<lang `-`(n)>, <sym nmax>);
    goto L5(r10);
  D5():
    deopt 17 [n3];
  L6(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L27() else L14();
  L24():
    n4 = force? n3;
    checkMissing(n4);
    r12 = `-`(<missing>, n4);
    nmax3 = ld nmax;
    check L25() else D6();
  D6():
    deopt 21 [nmax3];
  L11():
    ev2 = ld ev;
    check L46() else D17();
  L14():
    x = `[[`(s, i2, NULL, TRUE);
    st back = x;
    sys_function = ldf `sys.function`;
    check L28() else D8();
  L25():
    nmax4 = force? nmax3;
    checkMissing(nmax4);
    seq_int = ldf `seq.int` in base;
    r13 = dyn seq_int(r12, nmax4);
    check L26() else D7();
  L27():
    goto L11();
  D7():
    deopt 25 [r13];
  D8():
    deopt 27 [i2];
  D17():
    deopt 67 [ev2];
  L26():
    goto L5(r13);
  L28():
    p2 = prom<V +>{
      back = ld back;
      back1 = force? back;
      checkMissing(back1);
      return back1;
    };
    r15 = dyn sys_function(p2);
    check L29() else D9();
  L46():
    ev3 = force? ev2;
    checkMissing(ev3);
    popenv;
    return ev3;
  D9():
    deopt 29 [i2, r15];
  L29():
    st fun = r15;
    sym1 = ldf `is.function`;
    base1 = ldf `is.function` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L7(i7, r17):
    c2 = `as.logical`(r17);
    if c2 then L34() else L8();
  L30():
    fun = ld fun;
    check L32() else D10();
  L31():
    r16 = dyn base1(<sym fun>);
    goto L7(i2, r16);
  D10():
    deopt 33 [i2, fun];
  L8():
    goto L13(i7);
  L13(i18):
    goto L6(i18);
  L32():
    fun1 = force? fun;
    checkMissing(fun1);
    is_function = ldf `is.function` in base;
    r18 = dyn is_function(fun1);
    check L33() else D11();
  L34():
    environment = ldf environment;
    check L35() else D12();
  D11():
    deopt 36 [i2, r18];
  D12():
    deopt 38 [i7];
  L33():
    goto L7(i2, r18);
  L35():
    p3 = prom<V +>{
      fun2 = ld fun;
      fun3 = force? fun2;
      checkMissing(fun3);
      return fun3;
    };
    r20 = dyn environment(p3);
    check L36() else D13();
  D13():
    deopt 40 [i7, r20];
  L36():
    st ev = r20;
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  L9(i12, r22):
    r24 = `!`(r22);
    c3 = `as.logical`(r24);
    if c3 then L42() else L10();
  L37():
    ev = ld ev;
    check L39() else D14();
  L38():
    r21 = dyn base2(<sym ev>, <sym .methodsNamespace>);
    goto L9(i7, r21);
  D14():
    deopt 44 [i7, ev];
  L10():
    goto L13(i12);
  L39():
    ev1 = force? ev;
    checkMissing(ev1);
    _methodsNamespace = ld `.methodsNamespace`;
    check L40() else D15();
  L42():
    goto L11();
  D15():
    deopt 46 [i7, _methodsNamespace];
  L40():
    _methodsNamespace1 = force? _methodsNamespace;
    checkMissing(_methodsNamespace1);
    identical = ldf identical in base;
    r23 = dyn identical(ev1, _methodsNamespace1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L41() else D16();
  D16():
    deopt 56 [i7, r23];
  L41():
    goto L9(i7, r23);
  }
}