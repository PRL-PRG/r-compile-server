fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3645411715;
    st checkAtAssignment = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3645411715(cl, name, valueClass) {
  (reg cl:*, reg name:*, reg valueClass:*) -+> V { var cl:*, var name:*, var valueClass:*, reg getClass:cls, reg cl1:*, reg cl2:V, reg p:p(V +), reg r1:V, reg __:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg name1:*, reg name2:V, reg __1:cls, reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg slotClass:*, reg slotClass1:V, reg c1:V, reg c2:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg name3:*, reg name4:V, reg p1:p(V +), reg r9:V, reg p2:p(V +), reg dQuote:cls, reg cl3:*, reg cl4:V, reg p3:p(V +), reg r12:V, reg p4:p(V +), reg r14:V, reg p5:p(V +), reg r16:V, reg _identC:cls, reg slotClass2:*, reg slotClass3:V, reg p6:p(V +), reg valueClass1:*, reg valueClass2:V, reg p7:p(V +), reg r20:V, reg c3:L, reg possibleExtends:cls, reg valueClass3:*, reg valueClass4:V, reg p8:p(V +), reg slotClass4:*, reg slotClass5:V, reg p9:p(V +), reg getClassDef:cls, reg slotClass6:*, reg slotClass7:V, reg p10:p(V +), reg _classEnv:cls, reg ClassDef:*, reg ClassDef1:V, reg p11:p(V +), reg r27:V, reg p12:p(V +), reg r29:V, reg p13:p(V +), reg r31:V, reg isFALSE:cls, reg ok:*, reg ok1:V, reg p14:p(V +), reg r33:V, reg c4:L, reg stop1:cls, reg gettextf1:cls, reg dQuote1:cls, reg valueClass5:*, reg valueClass6:V, reg p15:p(V +), reg r35:V, reg p16:p(V +), reg sQuote1:cls, reg name5:*, reg name6:V, reg p17:p(V +), reg r38:V, reg p18:p(V +), reg dQuote2:cls, reg cl5:*, reg cl6:V, reg p19:p(V +), reg r41:V, reg p20:p(V +), reg slotClass8:*, reg slotClass9:V, reg p21:p(V +), reg r44:V, reg p22:p(V +), reg r46:V |
    mkenv;
    st cl = cl;
    st name = name;
    st valueClass = valueClass;
    getClass = ldf getClass;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      cl1 = ld cl;
      cl2 = force? cl1;
      checkMissing(cl2);
      return cl2;
    };
    r1 = dyn getClass(p);
    check L9() else D1();
  D1():
    deopt 3 [r1];
  L9():
    st ClassDef = r1;
    __ = ldf `@` in base;
    r2 = dyn __(<sym ClassDef>, <sym slots>);
    c = `is.object`(r2);
    if c then L10() else L11(r2);
  L0(dx1):
    st slotClass = dx1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L10():
    dr = tryDispatchBuiltin.1("[[", r2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(r4):
    name1 = ld name;
    check L13() else D2();
  D2():
    deopt 7 [r4, name1];
  L1(r7):
    c2 = `as.logical`(r7);
    if c2 then L17() else L2();
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L13():
    name2 = force? name1;
    __1 = ldf `[[` in base;
    r5 = dyn __1(r4, name2);
    goto L0(r5);
  L14():
    slotClass = ld slotClass;
    check L16() else D3();
  L15():
    r6 = dyn base(<sym slotClass>);
    goto L1(r6);
  D3():
    deopt 12 [slotClass];
  L2():
    goto L3();
  L3():
    _identC = ldf `.identC`;
    check L21() else D6();
  L16():
    slotClass1 = force? slotClass;
    checkMissing(slotClass1);
    c1 = `==`(slotClass1, NULL);
    goto L1(c1);
  L17():
    stop = ldf stop;
    check L18() else D4();
  D4():
    deopt 16 [];
  D6():
    deopt 24 [];
  L18():
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
        r9 = dyn sQuote(p1);
        return r9;
      };
      p4 = prom<V +>{
        dQuote = ldf dQuote;
        p3 = prom<V +>{
          cl3 = ld cl;
          cl4 = force? cl3;
          checkMissing(cl4);
          return cl4;
        };
        r12 = dyn dQuote(p3);
        return r12;
      };
      r14 = dyn gettextf("%s is not a slot in class %s", p2, p4);
      return r14;
    };
    r16 = dyn stop[, domain](p5, NA_LGL);
    check L19() else D5();
  L21():
    p6 = prom<V +>{
      slotClass2 = ld slotClass;
      slotClass3 = force? slotClass2;
      checkMissing(slotClass3);
      return slotClass3;
    };
    p7 = prom<V +>{
      valueClass1 = ld valueClass;
      valueClass2 = force? valueClass1;
      checkMissing(valueClass2);
      return valueClass2;
    };
    r20 = dyn _identC(p6, p7);
    check L22() else D7();
  D5():
    deopt 20 [r16];
  D7():
    deopt 27 [r20];
  L19():
    goto L3();
  L22():
    c3 = `as.logical`(r20);
    if c3 then L23() else L4();
  L4():
    possibleExtends = ldf possibleExtends;
    check L26() else D8();
  L23():
    popenv;
    return TRUE;
  D8():
    deopt 34 [];
  L26():
    p8 = prom<V +>{
      valueClass3 = ld valueClass;
      valueClass4 = force? valueClass3;
      checkMissing(valueClass4);
      return valueClass4;
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
        r27 = dyn _classEnv(p11);
        return r27;
      };
      r29 = dyn getClassDef[, where](p10, p12);
      return r29;
    };
    r31 = dyn possibleExtends[, , ClassDef2](p8, p9, p13);
    check L27() else D9();
  D9():
    deopt 39 [r31];
  L27():
    st ok = r31;
    isFALSE = ldf isFALSE;
    check L28() else D10();
  D10():
    deopt 42 [];
  L28():
    p14 = prom<V +>{
      ok = ld ok;
      ok1 = force? ok;
      checkMissing(ok1);
      return ok1;
    };
    r33 = dyn isFALSE(p14);
    check L29() else D11();
  D11():
    deopt 44 [r33];
  L29():
    c4 = `as.logical`(r33);
    if c4 then L30() else L6();
  L6():
    goto L7();
  L7():
    popenv;
    return TRUE;
  L30():
    stop1 = ldf stop;
    check L31() else D12();
  D12():
    deopt 46 [];
  L31():
    p22 = prom<V +>{
      gettextf1 = ldf gettextf;
      p16 = prom<V +>{
        dQuote1 = ldf dQuote;
        p15 = prom<V +>{
          valueClass5 = ld valueClass;
          valueClass6 = force? valueClass5;
          checkMissing(valueClass6);
          return valueClass6;
        };
        r35 = dyn dQuote1(p15);
        return r35;
      };
      p18 = prom<V +>{
        sQuote1 = ldf sQuote;
        p17 = prom<V +>{
          name5 = ld name;
          name6 = force? name5;
          checkMissing(name6);
          return name6;
        };
        r38 = dyn sQuote1(p17);
        return r38;
      };
      p20 = prom<V +>{
        dQuote2 = ldf dQuote;
        p19 = prom<V +>{
          cl5 = ld cl;
          cl6 = force? cl5;
          checkMissing(cl6);
          return cl6;
        };
        r41 = dyn dQuote2(p19);
        return r41;
      };
      p21 = prom<V +>{
        slotClass8 = ld slotClass;
        slotClass9 = force? slotClass8;
        checkMissing(slotClass9);
        return slotClass9;
      };
      r44 = dyn gettextf1("assignment of an object of class %s is not valid for @%s in an object of class %s; is(value, \"%s\") is not TRUE", p16, p18, p20, p21);
      return r44;
    };
    r46 = dyn stop1[, domain](p22, NA_LGL);
    check L32() else D13();
  D13():
    deopt 50 [r46];
  L32():
    goto L7();
  }
}