fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3663526631;
    st checkSlotAssignment = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3663526631(obj, name, value) {
  (reg obj:*, reg name:*, reg value:*) -+> V { var obj:*, var name:*, var value:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg obj1:*, reg obj2:V, reg class:cls, reg r2:V, reg getClass:cls, reg cl:*, reg cl1:V, reg p:p(V +), reg r4:V, reg __:cls, reg r5:V, reg c:L, reg r7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg name1:*, reg name2:V, reg __1:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg slotClass:*, reg slotClass1:V, reg c1:V, reg c2:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg name3:*, reg name4:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg dQuote:cls, reg cl2:*, reg cl3:V, reg p3:p(V +), reg r15:V, reg p4:p(V +), reg r17:V, reg p5:p(V +), reg r19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg value1:*, reg value2:V, reg class1:cls, reg r23:V, reg _identC:cls, reg slotClass2:*, reg slotClass3:V, reg p6:p(V +), reg valueClass:*, reg valueClass1:V, reg p7:p(V +), reg r26:V, reg c3:L, reg value3:*, reg value4:V, reg possibleExtends:cls, reg valueClass2:*, reg valueClass3:V, reg p8:p(V +), reg slotClass4:*, reg slotClass5:V, reg p9:p(V +), reg getClassDef:cls, reg slotClass6:*, reg slotClass7:V, reg p10:p(V +), reg _classEnv:cls, reg ClassDef:*, reg ClassDef1:V, reg p11:p(V +), reg r33:V, reg p12:p(V +), reg r35:V, reg p13:p(V +), reg r37:V, reg isFALSE:cls, reg ok:*, reg ok1:V, reg p14:p(V +), reg r39:V, reg c4:L, reg stop1:cls, reg gettextf1:cls, reg dQuote1:cls, reg valueClass4:*, reg valueClass5:V, reg p15:p(V +), reg r41:V, reg p16:p(V +), reg sQuote1:cls, reg name5:*, reg name6:V, reg p17:p(V +), reg r44:V, reg p18:p(V +), reg dQuote2:cls, reg cl4:*, reg cl5:V, reg p19:p(V +), reg r47:V, reg p20:p(V +), reg slotClass8:*, reg slotClass9:V, reg p21:p(V +), reg r50:V, reg p22:p(V +), reg r52:V, reg isTRUE:cls, reg ok2:*, reg ok3:V, reg p23:p(V +), reg r54:V, reg c5:L, reg value5:*, reg value6:V, reg as:cls, reg value7:*, reg value8:V, reg p24:p(V +), reg slotClass10:*, reg slotClass11:V, reg p25:p(V +), reg ok4:*, reg ok5:V, reg p26:p(V +), reg r58:V |
    mkenv;
    st obj = obj;
    st name = name;
    st value = value;
    sym = ldf class;
    base = ldf class in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r1):
    st cl = r1;
    getClass = ldf getClass;
    check L14() else D2();
  L10():
    obj1 = ld obj;
    check L12() else D0();
  L11():
    r = dyn base(<sym obj>);
    goto L0(r);
  D0():
    deopt 2 [obj1];
  D2():
    deopt 8 [];
  L12():
    obj2 = force? obj1;
    checkMissing(obj2);
    class = ldf class in base;
    r2 = dyn class(obj2);
    check L13() else D1();
  L14():
    p = prom<V +>{
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      return cl1;
    };
    r4 = dyn getClass(p);
    check L15() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 10 [r4];
  L13():
    goto L0(r2);
  L15():
    st ClassDef = r4;
    __ = ldf `@` in base;
    r5 = dyn __(<sym ClassDef>, <sym slots>);
    c = `is.object`(r5);
    if c then L16() else L17(r5);
  L1(dx1):
    st slotClass = dx1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L16():
    dr = tryDispatchBuiltin.1("[[", r5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(r7):
    name1 = ld name;
    check L19() else D4();
  D4():
    deopt 14 [r7, name1];
  L2(r10):
    c2 = `as.logical`(r10);
    if c2 then L23() else L3();
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L19():
    name2 = force? name1;
    __1 = ldf `[[` in base;
    r8 = dyn __1(r7, name2);
    goto L1(r8);
  L20():
    slotClass = ld slotClass;
    check L22() else D5();
  L21():
    r9 = dyn base1(<sym slotClass>);
    goto L2(r9);
  D5():
    deopt 19 [slotClass];
  L3():
    goto L4();
  L4():
    sym2 = ldf class;
    base2 = ldf class in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L22():
    slotClass1 = force? slotClass;
    checkMissing(slotClass1);
    c1 = `==`(slotClass1, NULL);
    goto L2(c1);
  L23():
    stop = ldf stop;
    check L24() else D6();
  D6():
    deopt 23 [];
  L5(r22):
    st valueClass = r22;
    _identC = ldf `.identC`;
    check L31() else D10();
  L24():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        sQuote = ldf sQuote;
        p1 = prom<V +>{
          name3 = ld name;
          name4 = force? name3;
          checkMissing(name4);
          return name4;
        };
        r12 = dyn sQuote(p1);
        return r12;
      };
      p4 = prom<V +>{
        dQuote = ldf dQuote;
        p3 = prom<V +>{
          cl2 = ld cl;
          cl3 = force? cl2;
          checkMissing(cl3);
          return cl3;
        };
        r15 = dyn dQuote(p3);
        return r15;
      };
      r17 = dyn gettextf("%s is not a slot in class %s", p2, p4);
      return r17;
    };
    r19 = dyn stop[, domain](p5, NA_LGL);
    check L25() else D7();
  L27():
    value1 = ld value;
    check L29() else D8();
  L28():
    r21 = dyn base2(<sym value>);
    goto L5(r21);
  D7():
    deopt 27 [r19];
  D8():
    deopt 32 [value1];
  D10():
    deopt 38 [];
  L25():
    goto L4();
  L29():
    value2 = force? value1;
    checkMissing(value2);
    class1 = ldf class in base;
    r23 = dyn class1(value2);
    check L30() else D9();
  L31():
    p6 = prom<V +>{
      slotClass2 = ld slotClass;
      slotClass3 = force? slotClass2;
      checkMissing(slotClass3);
      return slotClass3;
    };
    p7 = prom<V +>{
      valueClass = ld valueClass;
      valueClass1 = force? valueClass;
      checkMissing(valueClass1);
      return valueClass1;
    };
    r26 = dyn _identC(p6, p7);
    check L32() else D11();
  D9():
    deopt 35 [r23];
  D11():
    deopt 41 [r26];
  L30():
    goto L5(r23);
  L32():
    c3 = `as.logical`(r26);
    if c3 then L33() else L6();
  L6():
    possibleExtends = ldf possibleExtends;
    check L37() else D13();
  L33():
    value3 = ld value;
    check L34() else D12();
  D12():
    deopt 42 [value3];
  D13():
    deopt 48 [];
  L34():
    value4 = force? value3;
    checkMissing(value4);
    popenv;
    return value4;
  L37():
    p8 = prom<V +>{
      valueClass2 = ld valueClass;
      valueClass3 = force? valueClass2;
      checkMissing(valueClass3);
      return valueClass3;
    };
    p9 = prom<V +>{
      slotClass4 = ld slotClass;
      slotClass5 = force? slotClass4;
      checkMissing(slotClass5);
      return slotClass5;
    };
    p13 = prom<V +>{
      getClassDef = ldf getClassDef;
      p10 = prom<V +>{
        slotClass6 = ld slotClass;
        slotClass7 = force? slotClass6;
        checkMissing(slotClass7);
        return slotClass7;
      };
      p12 = prom<V +>{
        _classEnv = ldf `.classEnv`;
        p11 = prom<V +>{
          ClassDef = ld ClassDef;
          ClassDef1 = force? ClassDef;
          checkMissing(ClassDef1);
          return ClassDef1;
        };
        r33 = dyn _classEnv(p11);
        return r33;
      };
      r35 = dyn getClassDef[, where](p10, p12);
      return r35;
    };
    r37 = dyn possibleExtends[, , ClassDef2](p8, p9, p13);
    check L38() else D14();
  D14():
    deopt 53 [r37];
  L38():
    st ok = r37;
    isFALSE = ldf isFALSE;
    check L39() else D15();
  D15():
    deopt 56 [];
  L39():
    p14 = prom<V +>{
      ok = ld ok;
      ok1 = force? ok;
      checkMissing(ok1);
      return ok1;
    };
    r39 = dyn isFALSE(p14);
    check L40() else D16();
  D16():
    deopt 58 [r39];
  L40():
    c4 = `as.logical`(r39);
    if c4 then L41() else L8();
  L8():
    isTRUE = ldf isTRUE;
    check L45() else D19();
  L41():
    stop1 = ldf stop;
    check L42() else D17();
  D17():
    deopt 60 [];
  D19():
    deopt 66 [];
  L42():
    p22 = prom<V +>{
      gettextf1 = ldf gettextf;
      p16 = prom<V +>{
        dQuote1 = ldf dQuote;
        p15 = prom<V +>{
          valueClass4 = ld valueClass;
          valueClass5 = force? valueClass4;
          checkMissing(valueClass5);
          return valueClass5;
        };
        r41 = dyn dQuote1(p15);
        return r41;
      };
      p18 = prom<V +>{
        sQuote1 = ldf sQuote;
        p17 = prom<V +>{
          name5 = ld name;
          name6 = force? name5;
          checkMissing(name6);
          return name6;
        };
        r44 = dyn sQuote1(p17);
        return r44;
      };
      p20 = prom<V +>{
        dQuote2 = ldf dQuote;
        p19 = prom<V +>{
          cl4 = ld cl;
          cl5 = force? cl4;
          checkMissing(cl5);
          return cl5;
        };
        r47 = dyn dQuote2(p19);
        return r47;
      };
      p21 = prom<V +>{
        slotClass8 = ld slotClass;
        slotClass9 = force? slotClass8;
        checkMissing(slotClass9);
        return slotClass9;
      };
      r50 = dyn gettextf1("assignment of an object of class %s is not valid for slot %s in an object of class %s; is(value, \"%s\") is not TRUE", p16, p18, p20, p21);
      return r50;
    };
    r52 = dyn stop1[, domain](p22, NA_LGL);
    check L43() else D18();
  L45():
    p23 = prom<V +>{
      ok2 = ld ok;
      ok3 = force? ok2;
      checkMissing(ok3);
      return ok3;
    };
    r54 = dyn isTRUE(p23);
    check L46() else D20();
  D18():
    deopt 64 [r52];
  D20():
    deopt 68 [r54];
  L43():
    popenv;
    return r52;
  L46():
    c5 = `as.logical`(r54);
    if c5 then L47() else L9();
  L9():
    as = ldf as;
    check L50() else D22();
  L47():
    value5 = ld value;
    check L48() else D21();
  D21():
    deopt 69 [value5];
  D22():
    deopt 72 [];
  L48():
    value6 = force? value5;
    checkMissing(value6);
    popenv;
    return value6;
  L50():
    p24 = prom<V +>{
      value7 = ld value;
      value8 = force? value7;
      checkMissing(value8);
      return value8;
    };
    p25 = prom<V +>{
      slotClass10 = ld slotClass;
      slotClass11 = force? slotClass10;
      checkMissing(slotClass11);
      return slotClass11;
    };
    p26 = prom<V +>{
      ok4 = ld ok;
      ok5 = force? ok4;
      checkMissing(ok5);
      return ok5;
    };
    r58 = dyn as[, , strict, ext](p24, p25, FALSE, p26);
    check L51() else D23();
  D23():
    deopt 79 [r58];
  L51():
    popenv;
    return r58;
  }
}