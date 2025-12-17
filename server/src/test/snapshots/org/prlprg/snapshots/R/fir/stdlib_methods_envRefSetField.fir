fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2636586234;
    st envRefSetField = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2636586234(object, field, thisClass, env, value) {
  (reg object:*, reg field:*, reg thisClass:*, reg env:*, reg value:*) -+> V { var object:*, var field:*, var thisClass:*, reg thisClass_isMissing:L, reg thisClass_orDefault:*, reg refObjectClass:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var env:*, reg env_isMissing:L, reg env_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg object3:*, reg object4:V, reg as_environment:cls, reg r5:V, reg p2:p(V +), var value:*, reg __:cls, reg r7:V, reg c:L, reg r9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg field1:*, reg field2:V, reg __1:cls, reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg fieldClass:*, reg fieldClass1:V, reg c1:V, reg c2:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg field3:*, reg field4:V, reg p3:p(V +), reg r14:V, reg p4:p(V +), reg dQuote:cls, reg __2:cls, reg r16:V, reg p5:p(V +), reg r18:V, reg p6:p(V +), reg r20:V, reg p7:p(V +), reg r22:V, reg assign:cls, reg field5:*, reg field6:V, reg p8:p(V +), reg value1:*, reg value2:V, reg p9:p(V +), reg env1:*, reg env2:V, reg p10:p(V +), reg r27:V, reg object5:*, reg object6:V |
    mkenv;
    st object = object;
    st field = field;
    thisClass_isMissing = missing.0(thisClass);
    if thisClass_isMissing then L0() else L1(thisClass);
  L0():
    p1 = prom<V +>{
      refObjectClass = ldf refObjectClass;
      p = prom<V +>{
        object1 = ld object;
        object2 = force? object1;
        checkMissing(object2);
        return object2;
      };
      r1 = dyn refObjectClass(p);
      return r1;
    };
    goto L1(p1);
  L1(thisClass_orDefault):
    st thisClass = thisClass_orDefault;
    env_isMissing = missing.0(env);
    if env_isMissing then L2() else L3(env);
  L2():
    p2 = prom<V +>{
      sym = ldf `as.environment`;
      base = ldf `as.environment` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      as_environment = ldf `as.environment` in base;
      r5 = dyn as_environment(object4);
      goto L0(r5);
    L2():
      r3 = dyn base(<sym object>);
      goto L0(r3);
    };
    goto L3(p2);
  L3(env_orDefault):
    st env = env_orDefault;
    st value = value;
    __ = ldf `@` in base;
    r7 = dyn __(<sym thisClass>, <sym fieldClasses>);
    c = `is.object`(r7);
    if c then L8() else L9(r7);
  L4(dx1):
    st fieldClass = dx1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L8():
    dr = tryDispatchBuiltin.1("[[", r7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(r9):
    field1 = ld field;
    check L11() else D0();
  D0():
    deopt 2 [r9, field1];
  L5(r12):
    c2 = `as.logical`(r12);
    if c2 then L15() else L6();
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L11():
    field2 = force? field1;
    __1 = ldf `[[` in base;
    r10 = dyn __1(r9, field2);
    goto L4(r10);
  L12():
    fieldClass = ld fieldClass;
    check L14() else D1();
  L13():
    r11 = dyn base1(<sym fieldClass>);
    goto L5(r11);
  D1():
    deopt 7 [fieldClass];
  L6():
    assign = ldf assign;
    check L19() else D4();
  L7():
    object5 = ld object;
    check L21() else D6();
  L14():
    fieldClass1 = force? fieldClass;
    checkMissing(fieldClass1);
    c1 = `==`(fieldClass1, NULL);
    goto L5(c1);
  L15():
    stop = ldf stop;
    check L16() else D2();
  D2():
    deopt 11 [];
  D4():
    deopt 17 [];
  D6():
    deopt 23 [object5];
  L16():
    p7 = prom<V +>{
      gettextf = ldf gettextf;
      p4 = prom<V +>{
        sQuote = ldf sQuote;
        p3 = prom<V +>{
          field3 = ld field;
          field4 = force? field3;
          checkMissing(field4);
          return field4;
        };
        r14 = dyn sQuote(p3);
        return r14;
      };
      p6 = prom<V +>{
        dQuote = ldf dQuote;
        p5 = prom<V +>{
          __2 = ldf `@` in base;
          r16 = dyn __2(<sym thisClass>, <sym className>);
          return r16;
        };
        r18 = dyn dQuote(p5);
        return r18;
      };
      r20 = dyn gettextf("%s is not a field in class %s", p4, p6);
      return r20;
    };
    r22 = dyn stop[, domain](p7, NA_LGL);
    check L17() else D3();
  L19():
    p8 = prom<V +>{
      field5 = ld field;
      field6 = force? field5;
      checkMissing(field6);
      return field6;
    };
    p9 = prom<V +>{
      value1 = ld value;
      value2 = force? value1;
      checkMissing(value2);
      return value2;
    };
    p10 = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    r27 = dyn assign[, , envir](p8, p9, p10);
    check L20() else D5();
  L21():
    object6 = force? object5;
    checkMissing(object6);
    popenv;
    return object6;
  D3():
    deopt 15 [r22];
  D5():
    deopt 22 [r27];
  L17():
    goto L7();
  L20():
    goto L7();
  }
}