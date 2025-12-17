fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4014062605;
    st `.setOldIs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4014062605(Classes, where) {
  (reg Classes:*, reg where:*) -+> V { var Classes:*, var where:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg Classes1:*, reg Classes2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg gettextf:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg Classes3:*, reg Classes4:V, reg length1:cls, reg r6:V, reg p:p(V +), reg r8:V, reg p1:p(V +), reg r10:V, reg Classes5:*, reg Classes6:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg isClass:cls, reg cl:*, reg cl1:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r14:V, reg c2:L, reg extends:cls, reg cl2:*, reg cl3:V, reg p4:p(V +), reg r16:V, reg r17:V, reg c3:L, reg warning:cls, reg gettextf1:cls, reg dQuote:cls, reg cl4:*, reg cl5:V, reg p5:p(V +), reg r19:V, reg p6:p(V +), reg r21:V, reg p7:p(V +), reg r23:V, reg i9:I, reg r24:V, reg i10:I, reg setClass:cls, reg cl6:*, reg cl7:V, reg p8:p(V +), reg representation:cls, reg r27:V, reg p9:p(V +), reg where3:*, reg where4:V, reg p10:p(V +), reg r30:V, reg Classes7:*, reg Classes8:V, reg c4:L, reg Classes10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r31:V, reg Classes11:*, reg Classes12:V, reg c5:L, reg Classes14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r32:V, reg s1:V, reg l1:I, reg i11:I, reg i12:I, reg i13:I, reg c6:L, reg x1:V, reg _oldTestFun:*, reg _oldTestFun1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r33:V, reg i18:I, reg r34:V, reg substitute:cls, reg r35:V, reg l2:*, reg body__:cls, reg environment:cls, reg tfun:*, reg tfun1:V, reg p11:p(V +), reg r37:V, reg p12:p(V +), reg r39:V, reg setIs:cls, reg Class1:*, reg Class2:V, reg p13:p(V +), reg cl8:*, reg cl9:V, reg p14:p(V +), reg tfun2:*, reg tfun3:V, reg p15:p(V +), reg _oldCoerceFun:*, reg _oldCoerceFun1:V, reg p16:p(V +), reg _oldReplaceFun:*, reg _oldReplaceFun1:V, reg p17:p(V +), reg where5:*, reg where6:V, reg p18:p(V +), reg r46:V |
    mkenv;
    st Classes = Classes;
    st where = where;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r1):
    r3 = `!=`(r1, 2.0);
    c = `as.logical`(r3);
    if c then L18() else L1();
  L14():
    Classes1 = ld Classes;
    check L16() else D0();
  L15():
    r = dyn base(<sym Classes>);
    goto L0(r);
  D0():
    deopt 2 [Classes1];
  L1():
    goto L2();
  L2():
    Classes5 = ld Classes;
    check L22() else D4();
  L16():
    Classes2 = force? Classes1;
    checkMissing(Classes2);
    length = ldf length in base;
    r2 = dyn length(Classes2);
    check L17() else D1();
  L18():
    stop = ldf stop;
    check L19() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [];
  D4():
    deopt 16 [Classes5];
  L17():
    goto L0(r2);
  L19():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        sym1 = ldf length;
        base1 = ldf length in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r5):
        return r5;
      L1():
        Classes3 = ld Classes;
        Classes4 = force? Classes3;
        checkMissing(Classes4);
        length1 = ldf length in base;
        r6 = dyn length1(Classes4);
        goto L0(r6);
      L2():
        r4 = dyn base1(<sym Classes>);
        goto L0(r4);
      };
      r8 = dyn gettextf("argument 'Classes' must be a vector of two classes; got an argument of length %d", p);
      return r8;
    };
    r10 = dyn stop[, domain](p1, NA_LGL);
    check L20() else D3();
  L22():
    Classes6 = force? Classes5;
    checkMissing(Classes6);
    s = toForSeq(Classes6);
    l = length(s);
    i = 0;
    goto L3(i);
  D3():
    deopt 13 [r10];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L23() else L8();
  L20():
    goto L2();
  L8():
    x = `[[`(s, i2, NULL, TRUE);
    st cl = x;
    isClass = ldf isClass;
    check L24() else D5();
  L23():
    Classes7 = ld Classes;
    check L36() else D13();
  D5():
    deopt 19 [i2];
  D13():
    deopt 47 [Classes7];
  L24():
    p2 = prom<V +>{
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      return cl1;
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r14 = dyn isClass(p2, p3);
    check L25() else D6();
  L36():
    Classes8 = force? Classes7;
    checkMissing(Classes8);
    c4 = `is.object`(Classes8);
    if c4 then L37() else L38(Classes8);
  D6():
    deopt 22 [i2, r14];
  L9(dx1):
    st Class1 = dx1;
    Classes11 = ld Classes;
    check L40() else D14();
  L25():
    c2 = `as.logical`(r14);
    if c2 then L26() else L4();
  L37():
    dr = tryDispatchBuiltin.1("[[", Classes8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L39() else L38(dr);
  L38(Classes10):
    __ = ldf `[[` in base;
    r31 = dyn __(Classes10, 1);
    goto L9(r31);
  D14():
    deopt 53 [Classes11];
  L4():
    setClass = ldf setClass;
    check L34() else D11();
  L7(i10):
    goto L3(i10);
  L26():
    extends = ldf extends;
    check L27() else D7();
  L39():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L40():
    Classes12 = force? Classes11;
    checkMissing(Classes12);
    c5 = `is.object`(Classes12);
    if c5 then L41() else L42(Classes12);
  D7():
    deopt 24 [i2];
  D11():
    deopt 38 [i2];
  L10(dx3):
    s1 = toForSeq(dx3);
    l1 = length(s1);
    i11 = 0;
    goto L11(i11);
  L27():
    p4 = prom<V +>{
      cl2 = ld cl;
      cl3 = force? cl2;
      checkMissing(cl3);
      return cl3;
    };
    r16 = dyn extends(p4, "oldClass");
    check L28() else D8();
  L34():
    p8 = prom<V +>{
      cl6 = ld cl;
      cl7 = force? cl6;
      checkMissing(cl7);
      return cl7;
    };
    p9 = prom<V +>{
      representation = ldf representation;
      r27 = dyn representation("oldClass", "VIRTUAL");
      return r27;
    };
    p10 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r30 = dyn setClass[, , where](p8, p9, p10);
    check L35() else D12();
  L41():
    dr2 = tryDispatchBuiltin.1("[", Classes12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L43() else L42(dr2);
  L42(Classes14):
    __1 = ldf `[` in base;
    r32 = dyn __1(Classes14, -1);
    goto L10(r32);
  D8():
    deopt 27 [i2, r16];
  D12():
    deopt 43 [i2, r30];
  L11(i12):
    i13 = `+`.1(i12, 1);
    c6 = `<`.1(l1, i13);
    if c6 then L44() else L13();
  L28():
    r17 = `!`(r16);
    c3 = `as.logical`(r17);
    if c3 then L29() else L5();
  L35():
    goto L7(i2);
  L43():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L5():
    goto L6(i2, NULL);
  L6(i9, r24):
    goto L7(i9);
  L13():
    x1 = `[[`(s1, i13, NULL, TRUE);
    st cl = x1;
    _oldTestFun = ld `.oldTestFun`;
    check L45() else D15();
  L29():
    warning = ldf warning;
    check L30() else D9();
  L44():
    popenv;
    return NULL;
  D9():
    deopt 30 [i2];
  D15():
    deopt 58 [i13, _oldTestFun];
  L30():
    p7 = prom<V +>{
      gettextf1 = ldf gettextf;
      p6 = prom<V +>{
        dQuote = ldf dQuote;
        p5 = prom<V +>{
          cl4 = ld cl;
          cl5 = force? cl4;
          checkMissing(cl5);
          return cl5;
        };
        r19 = dyn dQuote(p5);
        return r19;
      };
      r21 = dyn gettextf1("inconsistent old-style class information for %s (maybe mixing old and new classes?)", p6);
      return r21;
    };
    r23 = dyn warning[, domain](p7, NA_LGL);
    check L31() else D10();
  L45():
    _oldTestFun1 = force? _oldTestFun;
    checkMissing(_oldTestFun1);
    st tfun = _oldTestFun1;
    sym2 = ldf substitute;
    base2 = ldf substitute in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  D10():
    deopt 34 [i2, r23];
  L12(i18, r34):
    l2 = ld tfun;
    body__ = ldf `body<-`;
    check L48() else D16();
  L31():
    goto L6(i2, r23);
  L46():
    substitute = ldf substitute in base;
    r35 = dyn substitute(<lang inherits(object, CLASS)>, <lang list(CLASS=cl)>);
    goto L12(i13, r35);
  L47():
    r33 = dyn base2(<lang inherits(object, CLASS)>, <lang list(CLASS=cl)>);
    goto L12(i13, r33);
  D16():
    deopt 65 [i18, r34, l2, r34];
  L48():
    p12 = prom<V +>{
      environment = ldf environment;
      p11 = prom<V +>{
        tfun = ld tfun;
        tfun1 = force? tfun;
        checkMissing(tfun1);
        return tfun1;
      };
      r37 = dyn environment(p11);
      return r37;
    };
    r39 = dyn body__[, , envir, ](l2, NULL, p12, r34);
    check L49() else D17();
  D17():
    deopt 69 [i18, r34, r39];
  L49():
    st tfun = r39;
    setIs = ldf setIs;
    check L50() else D18();
  D18():
    deopt 72 [i18];
  L50():
    p13 = prom<V +>{
      Class1 = ld Class1;
      Class2 = force? Class1;
      checkMissing(Class2);
      return Class2;
    };
    p14 = prom<V +>{
      cl8 = ld cl;
      cl9 = force? cl8;
      checkMissing(cl9);
      return cl9;
    };
    p15 = prom<V +>{
      tfun2 = ld tfun;
      tfun3 = force? tfun2;
      checkMissing(tfun3);
      return tfun3;
    };
    p16 = prom<V +>{
      _oldCoerceFun = ld `.oldCoerceFun`;
      _oldCoerceFun1 = force? _oldCoerceFun;
      checkMissing(_oldCoerceFun1);
      return _oldCoerceFun1;
    };
    p17 = prom<V +>{
      _oldReplaceFun = ld `.oldReplaceFun`;
      _oldReplaceFun1 = force? _oldReplaceFun;
      checkMissing(_oldReplaceFun1);
      return _oldReplaceFun1;
    };
    p18 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r46 = dyn setIs[, , test, coerce, replace, where](p13, p14, p15, p16, p17, p18);
    check L51() else D19();
  D19():
    deopt 83 [i18, r46];
  L51():
    goto L11(i18);
  }
}