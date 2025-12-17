fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1063143789;
    st `.setDummyField` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1063143789(self, metaName, fieldClass, fieldName, onceOnly, value) {
  (reg self:*, reg metaName:*, reg fieldClass:*, reg fieldName:*, reg onceOnly:*, reg value:*) -+> V { var self:*, var metaName:*, var fieldClass:*, var fieldName:*, var onceOnly:*, var value:*, reg is:cls, reg value1:*, reg value2:V, reg p:p(V +), reg fieldClass1:*, reg fieldClass2:V, reg p1:p(V +), reg r2:V, reg c:L, reg as:cls, reg value3:*, reg value4:V, reg p2:p(V +), reg fieldClass3:*, reg fieldClass4:V, reg p3:p(V +), reg r5:V, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg fieldName1:*, reg fieldName2:V, reg p4:p(V +), reg r8:V, reg p5:p(V +), reg dQuote:cls, reg fieldClass5:*, reg fieldClass6:V, reg p6:p(V +), reg r11:V, reg p7:p(V +), reg dQuote1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r13:V, reg r14:V, reg value5:*, reg value6:V, reg class:cls, reg r15:V, reg p8:p(V +), reg r17:V, reg p9:p(V +), reg r19:V, reg p10:p(V +), reg r21:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg self1:*, reg self2:V, reg as_environment:cls, reg r24:V, reg onceOnly1:*, reg onceOnly2:V, reg c1:L, reg bindingIsLocked:cls, reg metaName1:*, reg metaName2:V, reg p11:p(V +), reg selfEnv:*, reg selfEnv1:V, reg p12:p(V +), reg r27:V, reg c2:L, reg stop1:cls, reg gettextf1:cls, reg sQuote1:cls, reg fieldName3:*, reg fieldName4:V, reg p13:p(V +), reg r29:V, reg p14:p(V +), reg r31:V, reg p15:p(V +), reg r33:V, reg assign:cls, reg metaName3:*, reg metaName4:V, reg p16:p(V +), reg value7:*, reg value8:V, reg p17:p(V +), reg selfEnv2:*, reg selfEnv3:V, reg p18:p(V +), reg r37:V, reg lockBinding:cls, reg metaName5:*, reg metaName6:V, reg p19:p(V +), reg selfEnv4:*, reg selfEnv5:V, reg p20:p(V +), reg r40:V, reg assign1:cls, reg metaName7:*, reg metaName8:V, reg p21:p(V +), reg value9:*, reg value10:V, reg p22:p(V +), reg selfEnv6:*, reg selfEnv7:V, reg p23:p(V +), reg r44:V |
    mkenv;
    st self = self;
    st metaName = metaName;
    st fieldClass = fieldClass;
    st fieldName = fieldName;
    st onceOnly = onceOnly;
    st value = value;
    is = ldf is;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    p1 = prom<V +>{
      fieldClass1 = ld fieldClass;
      fieldClass2 = force? fieldClass1;
      checkMissing(fieldClass2);
      return fieldClass2;
    };
    r2 = dyn is(p, p1);
    check L6() else D1();
  D1():
    deopt 4 [r2];
  L6():
    c = `as.logical`(r2);
    if c then L7() else L0();
  L0():
    stop = ldf stop;
    check L11() else D4();
  L1():
    sym1 = ldf `as.environment`;
    base1 = ldf `as.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L7():
    as = ldf as;
    check L8() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 14 [];
  L2(r23):
    st selfEnv = r23;
    onceOnly1 = ld onceOnly;
    check L17() else D8();
  L8():
    p2 = prom<V +>{
      value3 = ld value;
      value4 = force? value3;
      checkMissing(value4);
      return value4;
    };
    p3 = prom<V +>{
      fieldClass3 = ld fieldClass;
      fieldClass4 = force? fieldClass3;
      checkMissing(fieldClass4);
      return fieldClass4;
    };
    r5 = dyn as[, , strict](p2, p3, FALSE);
    check L9() else D3();
  L11():
    p10 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        sQuote = ldf sQuote;
        p4 = prom<V +>{
          fieldName1 = ld fieldName;
          fieldName2 = force? fieldName1;
          checkMissing(fieldName2);
          return fieldName2;
        };
        r8 = dyn sQuote(p4);
        return r8;
      };
      p7 = prom<V +>{
        dQuote = ldf dQuote;
        p6 = prom<V +>{
          fieldClass5 = ld fieldClass;
          fieldClass6 = force? fieldClass5;
          checkMissing(fieldClass6);
          return fieldClass6;
        };
        r11 = dyn dQuote(p6);
        return r11;
      };
      p9 = prom<V +>{
        dQuote1 = ldf dQuote;
        p8 = prom<V +>{
          sym = ldf class;
          base = ldf class in base;
          guard = `==`.4(sym, base);
          if guard then L1() else L2();
        L0(r14):
          return r14;
        L1():
          value5 = ld value;
          value6 = force? value5;
          checkMissing(value6);
          class = ldf class in base;
          r15 = dyn class(value6);
          goto L0(r15);
        L2():
          r13 = dyn base(<sym value>);
          goto L0(r13);
        };
        r17 = dyn dQuote1(p8);
        return r17;
      };
      r19 = dyn gettextf("invalid assignment for reference class field %s, should be from class %s or a subclass (was class %s)", p5, p7, p9);
      return r19;
    };
    r21 = dyn stop[, `call.`](p10, FALSE);
    check L12() else D5();
  L13():
    self1 = ld self;
    check L15() else D6();
  L14():
    r22 = dyn base1(<sym self>);
    goto L2(r22);
  D3():
    deopt 11 [r5];
  D5():
    deopt 18 [r21];
  D6():
    deopt 21 [self1];
  D8():
    deopt 26 [onceOnly1];
  L9():
    st value = r5;
    goto L1();
  L12():
    goto L1();
  L15():
    self2 = force? self1;
    checkMissing(self2);
    as_environment = ldf `as.environment` in base;
    r24 = dyn as_environment(self2);
    check L16() else D7();
  L17():
    onceOnly2 = force? onceOnly1;
    checkMissing(onceOnly2);
    c1 = `as.logical`(onceOnly2);
    if c1 then L18() else L3();
  D7():
    deopt 24 [r24];
  L3():
    assign1 = ldf assign;
    check L30() else D17();
  L16():
    goto L2(r24);
  L18():
    bindingIsLocked = ldf bindingIsLocked;
    check L19() else D9();
  D9():
    deopt 29 [];
  D17():
    deopt 52 [];
  L19():
    p11 = prom<V +>{
      metaName1 = ld metaName;
      metaName2 = force? metaName1;
      checkMissing(metaName2);
      return metaName2;
    };
    p12 = prom<V +>{
      selfEnv = ld selfEnv;
      selfEnv1 = force? selfEnv;
      checkMissing(selfEnv1);
      return selfEnv1;
    };
    r27 = dyn bindingIsLocked(p11, p12);
    check L20() else D10();
  L30():
    p21 = prom<V +>{
      metaName7 = ld metaName;
      metaName8 = force? metaName7;
      checkMissing(metaName8);
      return metaName8;
    };
    p22 = prom<V +>{
      value9 = ld value;
      value10 = force? value9;
      checkMissing(value10);
      return value10;
    };
    p23 = prom<V +>{
      selfEnv6 = ld selfEnv;
      selfEnv7 = force? selfEnv6;
      checkMissing(selfEnv7);
      return selfEnv7;
    };
    r44 = dyn assign1[, , envir](p21, p22, p23);
    check L31() else D18();
  D10():
    deopt 32 [r27];
  D18():
    deopt 57 [r44];
  L20():
    c2 = `as.logical`(r27);
    if c2 then L21() else L4();
  L31():
    popenv;
    return r44;
  L4():
    assign = ldf assign;
    check L25() else D13();
  L21():
    stop1 = ldf stop;
    check L22() else D11();
  D11():
    deopt 34 [];
  D13():
    deopt 40 [];
  L22():
    p15 = prom<V +>{
      gettextf1 = ldf gettextf;
      p14 = prom<V +>{
        sQuote1 = ldf sQuote;
        p13 = prom<V +>{
          fieldName3 = ld fieldName;
          fieldName4 = force? fieldName3;
          checkMissing(fieldName4);
          return fieldName4;
        };
        r29 = dyn sQuote1(p13);
        return r29;
      };
      r31 = dyn gettextf1("invalid replacement: reference class field %s is read-only", p14);
      return r31;
    };
    r33 = dyn stop1[, `call.`](p15, FALSE);
    check L23() else D12();
  L25():
    p16 = prom<V +>{
      metaName3 = ld metaName;
      metaName4 = force? metaName3;
      checkMissing(metaName4);
      return metaName4;
    };
    p17 = prom<V +>{
      value7 = ld value;
      value8 = force? value7;
      checkMissing(value8);
      return value8;
    };
    p18 = prom<V +>{
      selfEnv2 = ld selfEnv;
      selfEnv3 = force? selfEnv2;
      checkMissing(selfEnv3);
      return selfEnv3;
    };
    r37 = dyn assign[, , envir](p16, p17, p18);
    check L26() else D14();
  D12():
    deopt 38 [r33];
  D14():
    deopt 45 [r37];
  L23():
    popenv;
    return r33;
  L26():
    lockBinding = ldf lockBinding;
    check L27() else D15();
  D15():
    deopt 47 [];
  L27():
    p19 = prom<V +>{
      metaName5 = ld metaName;
      metaName6 = force? metaName5;
      checkMissing(metaName6);
      return metaName6;
    };
    p20 = prom<V +>{
      selfEnv4 = ld selfEnv;
      selfEnv5 = force? selfEnv4;
      checkMissing(selfEnv5);
      return selfEnv5;
    };
    r40 = dyn lockBinding(p19, p20);
    check L28() else D16();
  D16():
    deopt 50 [r40];
  L28():
    popenv;
    return r40;
  }
}