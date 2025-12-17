fun main() {
  () -+> V { reg r:cls, reg setClass:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg setClass1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg __:cls, reg r11:V, reg r12:cls, reg r13:V, reg new:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg ydata:*, reg ydata1:V, reg r16:I, reg p2:p(V +), reg ydata2:*, reg ydata3:V, reg p3:p(V +), reg r19:V, reg new1:cls, reg t1:*, reg t2:V, reg p4:p(V +), reg ysmooth:*, reg ysmooth1:V, reg p5:p(V +), reg r22:V, reg setMethod:cls, reg r23:cls, reg p6:p(V +), reg r25:V, reg setMethod1:cls, reg r26:cls, reg p7:p(V +), reg r28:V, reg removeMethod:cls, reg r29:V |
    mkenv;
    r = clos inner2006812994;
    st new = r;
    setClass = ldf setClass;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("numeric", "numeric");
      goto L0(r3);
    L2():
      r1 = dyn base[x, y]("numeric", "numeric");
      goto L0(r1);
    };
    r5 = dyn setClass[, slots]("track", p);
    check L1() else D1();
  D1():
    deopt 8 [r5];
  L1():
    setClass1 = ldf setClass;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c1 = ldf c in base;
      r8 = dyn c1("numeric");
      goto L0(r8);
    L2():
      r6 = dyn base1[smooth]("numeric");
      goto L0(r6);
    };
    r10 = dyn setClass1[, contains, slots]("trackCurve", "track", p1);
    check L3() else D3();
  D3():
    deopt 16 [r10];
  L3():
    __ = ldf `::`;
    check L4() else D4();
  D4():
    deopt 18 [];
  L4():
    r11 = dyn __("stats", "rnorm");
    check L5() else D5();
  D5():
    deopt 21 [r11];
  L5():
    checkFun.0(r11);
    r12 = r11 as cls;
    r13 = dyn r12(10.0);
    check L6() else D6();
  D6():
    deopt 24 [r13];
  L6():
    st ydata = r13;
    st ysmooth = <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    new = ldf new;
    check L7() else D7();
  D7():
    deopt 30 [];
  L7():
    p2 = prom<V +>{
      sym2 = ldf seq_along;
      base2 = ldf seq_along in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      ydata = ld ydata;
      ydata1 = force? ydata;
      checkMissing(ydata1);
      r16 = seq_along(ydata1);
      goto L0(r16);
    L2():
      r14 = dyn base2(<sym ydata>);
      goto L0(r14);
    };
    p3 = prom<V +>{
      ydata2 = ld ydata;
      ydata3 = force? ydata2;
      checkMissing(ydata3);
      return ydata3;
    };
    r19 = dyn new[, x, y]("track", p2, p3);
    check L8() else D8();
  D8():
    deopt 36 [r19];
  L8():
    st t1 = r19;
    new1 = ldf new;
    check L9() else D9();
  D9():
    deopt 39 [];
  L9():
    p4 = prom<V +>{
      t1 = ld t1;
      t2 = force? t1;
      checkMissing(t2);
      return t2;
    };
    p5 = prom<V +>{
      ysmooth = ld ysmooth;
      ysmooth1 = force? ysmooth;
      checkMissing(ysmooth1);
      return ysmooth1;
    };
    r22 = dyn new1[, , smooth]("trackCurve", p4, p5);
    check L10() else D10();
  D10():
    deopt 44 [r22];
  L10():
    st t2 = r22;
    setMethod = ldf setMethod;
    check L11() else D11();
  D11():
    deopt 47 [];
  L11():
    p6 = prom<V +>{
      r23 = clos inner1754423021;
      return r23;
    };
    r25 = dyn setMethod("initialize", "track", p6);
    check L12() else D12();
  D12():
    deopt 51 [r25];
  L12():
    setMethod1 = ldf setMethod;
    check L13() else D13();
  D13():
    deopt 53 [];
  L13():
    p7 = prom<V +>{
      r26 = clos inner3476874840;
      return r26;
    };
    r28 = dyn setMethod1("initialize", "track", p7);
    check L14() else D14();
  D14():
    deopt 57 [r28];
  L14():
    removeMethod = ldf removeMethod;
    check L15() else D15();
  D15():
    deopt 59 [];
  L15():
    r29 = dyn removeMethod("initialize", "track");
    check L16() else D16();
  D16():
    deopt 62 [r29];
  L16():
    popenv;
    return r29;
  }
}
fun inner2006812994(Class, `...`) {
  (reg Class:*, reg ddd:dots) -+> V { var Class:*, var `...`:dots?, reg getClass:cls, reg Class1:*, reg Class2:V, reg p:p(V +), reg topenv:cls, reg parent_frame:cls, reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg C_new_object:*, reg C_new_object1:V, reg ClassDef:*, reg ClassDef1:V, reg vargs:dots, reg r8:V, reg initialize:cls, reg value:*, reg value1:V, reg p3:p(V +), reg ddd1:dots?, reg r10:V |
    mkenv;
    st Class = Class;
    st `...` = ddd;
    getClass = ldf getClass;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      Class1 = ld Class;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    p2 = prom<V +>{
      topenv = ldf topenv;
      p1 = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r1 = dyn parent_frame();
        return r1;
      };
      r3 = dyn topenv(p1);
      return r3;
    };
    r5 = dyn getClass[, where](p, p2);
    check L2() else D1();
  D1():
    deopt 5 [r5];
  L2():
    st ClassDef = r5;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r7):
    st value = r7;
    initialize = ldf initialize;
    check L7() else D4();
  L3():
    C_new_object = ld C_new_object;
    check L5() else D2();
  L4():
    r6 = dyn base(<sym C_new_object>, <sym ClassDef>);
    goto L0(r6);
  D2():
    deopt 8 [C_new_object];
  D4():
    deopt 14 [];
  L5():
    C_new_object1 = force? C_new_object;
    checkMissing(C_new_object1);
    ClassDef = ld ClassDef;
    check L6() else D3();
  L7():
    p3 = prom<V +>{
      value = ld value;
      value1 = force? value;
      checkMissing(value1);
      return value1;
    };
    ddd1 = ld `...`;
    r10 = dyn initialize[, `...`](p3, ddd1);
    check L8() else D5();
  D3():
    deopt 9 [C_new_object1, ClassDef];
  D5():
    deopt 17 [r10];
  L6():
    ClassDef1 = force? ClassDef;
    checkMissing(ClassDef1);
    vargs = dots[ClassDef1];
    r8 = `.Call`(C_new_object1, vargs, <missing>);
    goto L0(r8);
  L8():
    popenv;
    return r10;
  }
}
fun inner1754423021(`.Object`, `...`) {
  (reg _Object:*, reg ddd:dots) -+> V { var `.Object`:*, var `...`:dots?, reg callNextMethod:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg __:cls, reg r3:V, reg length:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg r9:V, reg __1:cls, reg r10:V, reg length1:cls, reg r11:V, reg r12:V, reg c:L, reg stop:cls, reg r13:V, reg _Object1:*, reg _Object2:V |
    mkenv;
    st `.Object` = _Object;
    st `...` = ddd;
    callNextMethod = ldf callNextMethod;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    r = dyn callNextMethod();
    check L5() else D1();
  D1():
    deopt 2 [r];
  L5():
    st `.Object` = r;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r2):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L6():
    __ = ldf `@` in base;
    r3 = dyn __(<sym .Object>, <sym x>);
    length = ldf length in base;
    r4 = dyn length(r3);
    check L8() else D2();
  L7():
    r1 = dyn base(<lang `@`(.Object, x)>);
    goto L0(r1);
  D2():
    deopt 9 [r4];
  L1(r8, r9):
    r12 = `!=`(r8, r9);
    c = `as.logical`(r12);
    if c then L12() else L2();
  L8():
    goto L0(r4);
  L9():
    __1 = ldf `@` in base;
    r10 = dyn __1(<sym .Object>, <sym y>);
    length1 = ldf length in base;
    r11 = dyn length1(r10);
    check L11() else D3();
  L10():
    r7 = dyn base1(<lang `@`(.Object, y)>);
    goto L1(r2, r7);
  D3():
    deopt 14 [r2, r11];
  L2():
    goto L3();
  L3():
    _Object1 = ld `.Object`;
    check L16() else D6();
  L11():
    goto L1(r2, r11);
  L12():
    stop = ldf stop;
    check L13() else D4();
  D4():
    deopt 17 [];
  D6():
    deopt 22 [_Object1];
  L13():
    r13 = dyn stop("specified x and y of different lengths");
    check L14() else D5();
  L16():
    _Object2 = force? _Object1;
    checkMissing(_Object2);
    popenv;
    return _Object2;
  D5():
    deopt 19 [r13];
  L14():
    goto L3();
  }
}
fun inner3476874840(`.Object`, x, y, `...`) {
  (reg _Object:*, reg x:*, reg y:*, reg ddd:dots) -+> V { var `.Object`:*, var x:*, reg x_isMissing:L, reg x_orDefault:*, reg numeric:cls, reg r:V, reg p:p(V +), var y:*, reg y_isMissing:L, reg y_orDefault:*, reg numeric1:cls, reg r2:V, reg p1:p(V +), var `...`:dots?, reg callNextMethod:cls, reg _Object1:*, reg _Object2:V, reg p2:p(V +), reg ddd1:dots?, reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg x1:*, reg x2:V, reg length:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg r13:V, reg y1:*, reg y2:V, reg length1:cls, reg r14:V, reg r15:V, reg c:L, reg stop:cls, reg r16:V, reg x3:*, reg x4:V, reg l:*, reg ___:cls, reg r18:V, reg y3:*, reg y4:V, reg l1:*, reg ___1:cls, reg r19:V, reg _Object3:*, reg _Object4:V |
    mkenv;
    st `.Object` = _Object;
    x_isMissing = missing.0(x);
    if x_isMissing then L0() else L1(x);
  L0():
    p = prom<V +>{
      numeric = ldf numeric;
      r = dyn numeric(0.0);
      return r;
    };
    goto L1(p);
  L1(x_orDefault):
    st x = x_orDefault;
    y_isMissing = missing.0(y);
    if y_isMissing then L2() else L3(y);
  L2():
    p1 = prom<V +>{
      numeric1 = ldf numeric;
      r2 = dyn numeric1(0.0);
      return r2;
    };
    goto L3(p1);
  L3(y_orDefault):
    st y = y_orDefault;
    st `...` = ddd;
    callNextMethod = ldf callNextMethod;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p2 = prom<V +>{
      _Object1 = ld `.Object`;
      _Object2 = force? _Object1;
      checkMissing(_Object2);
      return _Object2;
    };
    ddd1 = ld `...`;
    r5 = dyn callNextMethod[, `...`](p2, ddd1);
    check L9() else D1();
  D1():
    deopt 4 [r5];
  L9():
    st `.Object` = r5;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L4(r7):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L10():
    x1 = ld x;
    check L12() else D2();
  L11():
    r6 = dyn base(<sym x>);
    goto L4(r6);
  D2():
    deopt 8 [x1];
  L5(r12, r13):
    r15 = `!=`(r12, r13);
    c = `as.logical`(r15);
    if c then L18() else L6();
  L12():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r8 = dyn length(x2);
    check L13() else D3();
  L14():
    y1 = ld y;
    check L16() else D4();
  L15():
    r11 = dyn base1(<sym y>);
    goto L5(r7, r11);
  D3():
    deopt 11 [r8];
  D4():
    deopt 13 [r7, y1];
  L6():
    goto L7();
  L7():
    x3 = ld x;
    check L22() else D8();
  L13():
    goto L4(r8);
  L16():
    y2 = force? y1;
    checkMissing(y2);
    length1 = ldf length in base;
    r14 = dyn length1(y2);
    check L17() else D5();
  L18():
    stop = ldf stop;
    check L19() else D6();
  D5():
    deopt 16 [r7, r14];
  D6():
    deopt 19 [];
  D8():
    deopt 24 [x3];
  L17():
    goto L5(r7, r14);
  L19():
    r16 = dyn stop("specified x and y of different lengths");
    check L20() else D7();
  L22():
    x4 = force? x3;
    checkMissing(x4);
    l = ld `.Object`;
    ___ = ldf `@<-`;
    check L23() else D9();
  D7():
    deopt 21 [r16];
  D9():
    deopt 27 [x4, l, x4];
  L20():
    goto L7();
  L23():
    r18 = dyn ___(l, NULL, "x", x4);
    check L24() else D10();
  D10():
    deopt 30 [x4, r18];
  L24():
    st `.Object` = r18;
    y3 = ld y;
    check L25() else D11();
  D11():
    deopt 32 [y3];
  L25():
    y4 = force? y3;
    checkMissing(y4);
    l1 = ld `.Object`;
    ___1 = ldf `@<-`;
    check L26() else D12();
  D12():
    deopt 35 [y4, l1, y4];
  L26():
    r19 = dyn ___1(l1, NULL, "y", y4);
    check L27() else D13();
  D13():
    deopt 38 [y4, r19];
  L27():
    st `.Object` = r19;
    _Object3 = ld `.Object`;
    check L28() else D14();
  D14():
    deopt 40 [_Object3];
  L28():
    _Object4 = force? _Object3;
    checkMissing(_Object4);
    popenv;
    return _Object4;
  }
}