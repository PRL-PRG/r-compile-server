fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2478953544;
    st envRefInferField = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2478953544(self, field, thisClass, selfEnv) {
  (reg self:*, reg field:*, reg thisClass:*, reg selfEnv:*) -+> V { var self:*, var field:*, var thisClass:*, var selfEnv:*, reg selfEnv_isMissing:L, reg selfEnv_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg self1:*, reg self2:V, reg as_environment:cls, reg r2:V, reg p:p(V +), reg __:cls, reg r4:V, reg exists:cls, reg field1:*, reg field2:V, reg p1:p(V +), reg fields:*, reg fields1:V, reg p2:p(V +), reg r7:V, reg c:L, reg get:cls, reg field3:*, reg field4:V, reg p3:p(V +), reg fields2:*, reg fields3:V, reg p4:p(V +), reg r10:V, reg __1:cls, reg r12:V, reg exists1:cls, reg field5:*, reg field6:V, reg p5:p(V +), reg methods:*, reg methods1:V, reg p6:p(V +), reg r15:V, reg c1:L, reg get1:cls, reg field7:*, reg field8:V, reg p7:p(V +), reg methods2:*, reg methods3:V, reg p8:p(V +), reg r18:V, reg installClassMethod:cls, reg value:*, reg value1:V, reg p9:p(V +), reg self3:*, reg self4:V, reg p10:p(V +), reg field9:*, reg field10:V, reg p11:p(V +), reg selfEnv1:*, reg selfEnv2:V, reg p12:p(V +), reg thisClass1:*, reg thisClass2:V, reg p13:p(V +), reg r24:V, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg field11:*, reg field12:V, reg p14:p(V +), reg r26:V, reg p15:p(V +), reg dQuote:cls, reg __2:cls, reg r28:V, reg p16:p(V +), reg r30:V, reg p17:p(V +), reg r32:V, reg p18:p(V +), reg r34:V, reg value2:*, reg value3:V |
    mkenv;
    st self = self;
    st field = field;
    st thisClass = thisClass;
    selfEnv_isMissing = missing.0(selfEnv);
    if selfEnv_isMissing then L0() else L1(selfEnv);
  L0():
    p = prom<V +>{
      sym = ldf `as.environment`;
      base = ldf `as.environment` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      self1 = ld self;
      self2 = force? self1;
      checkMissing(self2);
      as_environment = ldf `as.environment` in base;
      r2 = dyn as_environment(self2);
      goto L0(r2);
    L2():
      r = dyn base(<sym self>);
      goto L0(r);
    };
    goto L1(p);
  L1(selfEnv_orDefault):
    st selfEnv = selfEnv_orDefault;
    __ = ldf `@` in base;
    r4 = dyn __(<sym thisClass>, <sym fieldPrototypes>);
    st fields = r4;
    exists = ldf exists;
    check L5() else D0();
  D0():
    deopt 6 [];
  L5():
    p1 = prom<V +>{
      field1 = ld field;
      field2 = force? field1;
      checkMissing(field2);
      return field2;
    };
    p2 = prom<V +>{
      fields = ld fields;
      fields1 = force? fields;
      checkMissing(fields1);
      return fields1;
    };
    r7 = dyn exists[, envir, inherits](p1, p2, FALSE);
    check L6() else D1();
  D1():
    deopt 12 [r7];
  L6():
    c = `as.logical`(r7);
    if c then L7() else L2();
  L2():
    __1 = ldf `@` in base;
    r12 = dyn __1(<sym thisClass>, <sym refMethods>);
    st methods = r12;
    exists1 = ldf exists;
    check L11() else D4();
  L3():
    value2 = ld value;
    check L21() else D12();
  L7():
    get = ldf get;
    check L8() else D2();
  D2():
    deopt 14 [];
  D4():
    deopt 24 [];
  D12():
    deopt 53 [value2];
  L8():
    p3 = prom<V +>{
      field3 = ld field;
      field4 = force? field3;
      checkMissing(field4);
      return field4;
    };
    p4 = prom<V +>{
      fields2 = ld fields;
      fields3 = force? fields2;
      checkMissing(fields3);
      return fields3;
    };
    r10 = dyn get[, envir](p3, p4);
    check L9() else D3();
  L11():
    p5 = prom<V +>{
      field5 = ld field;
      field6 = force? field5;
      checkMissing(field6);
      return field6;
    };
    p6 = prom<V +>{
      methods = ld methods;
      methods1 = force? methods;
      checkMissing(methods1);
      return methods1;
    };
    r15 = dyn exists1[, envir, inherits](p5, p6, FALSE);
    check L12() else D5();
  L21():
    value3 = force? value2;
    checkMissing(value3);
    popenv;
    return value3;
  D3():
    deopt 18 [r10];
  D5():
    deopt 30 [r15];
  L9():
    st value = r10;
    goto L3();
  L12():
    c1 = `as.logical`(r15);
    if c1 then L13() else L4();
  L4():
    stop = ldf stop;
    check L19() else D10();
  L13():
    get1 = ldf get;
    check L14() else D6();
  D6():
    deopt 32 [];
  D10():
    deopt 48 [];
  L14():
    p7 = prom<V +>{
      field7 = ld field;
      field8 = force? field7;
      checkMissing(field8);
      return field8;
    };
    p8 = prom<V +>{
      methods2 = ld methods;
      methods3 = force? methods2;
      checkMissing(methods3);
      return methods3;
    };
    r18 = dyn get1[, envir](p7, p8);
    check L15() else D7();
  L19():
    p18 = prom<V +>{
      gettextf = ldf gettextf;
      p15 = prom<V +>{
        sQuote = ldf sQuote;
        p14 = prom<V +>{
          field11 = ld field;
          field12 = force? field11;
          checkMissing(field12);
          return field12;
        };
        r26 = dyn sQuote(p14);
        return r26;
      };
      p17 = prom<V +>{
        dQuote = ldf dQuote;
        p16 = prom<V +>{
          __2 = ldf `@` in base;
          r28 = dyn __2(<sym thisClass>, <sym className>);
          return r28;
        };
        r30 = dyn dQuote(p16);
        return r30;
      };
      r32 = dyn gettextf("%s is not a valid field or method name for reference class %s", p15, p17);
      return r32;
    };
    r34 = dyn stop[, domain](p18, NA_LGL);
    check L20() else D11();
  D7():
    deopt 36 [r18];
  D11():
    deopt 52 [r34];
  L15():
    st value = r18;
    installClassMethod = ldf installClassMethod;
    check L16() else D8();
  L20():
    goto L3();
  D8():
    deopt 39 [];
  L16():
    p9 = prom<V +>{
      value = ld value;
      value1 = force? value;
      checkMissing(value1);
      return value1;
    };
    p10 = prom<V +>{
      self3 = ld self;
      self4 = force? self3;
      checkMissing(self4);
      return self4;
    };
    p11 = prom<V +>{
      field9 = ld field;
      field10 = force? field9;
      checkMissing(field10);
      return field10;
    };
    p12 = prom<V +>{
      selfEnv1 = ld selfEnv;
      selfEnv2 = force? selfEnv1;
      checkMissing(selfEnv2);
      return selfEnv2;
    };
    p13 = prom<V +>{
      thisClass1 = ld thisClass;
      thisClass2 = force? thisClass1;
      checkMissing(thisClass2);
      return thisClass2;
    };
    r24 = dyn installClassMethod(p9, p10, p11, p12, p13);
    check L17() else D9();
  D9():
    deopt 45 [r24];
  L17():
    st value = r24;
    goto L3();
  }
}