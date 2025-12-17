fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1102162496;
    st `.makeDefaultBinding` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1102162496(fieldName, fieldClass, readOnly, where) {
  (reg fieldName:*, reg fieldClass:*, reg readOnly:*, reg where:*) -+> V { var fieldName:*, var fieldClass:*, var readOnly:*, reg readOnly_isMissing:L, reg readOnly_orDefault:*, var where:*, reg _bindingMetaName:cls, reg fieldName1:*, reg fieldName2:V, reg p:p(V +), reg r1:V, reg readOnly1:*, reg readOnly2:V, reg c:L, reg eval:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg substitute:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg eval1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg substitute1:cls, reg r10:V, reg p2:p(V +), reg r12:V, reg where1:*, reg where2:V, reg l:*, reg environment__:cls, reg r13:V, reg new:cls, reg f:*, reg f1:V, reg p3:p(V +), reg fieldName3:*, reg fieldName4:V, reg p4:p(V +), reg fieldClass1:*, reg fieldClass2:V, reg p5:p(V +), reg r17:V, reg isVirtualClass:cls, reg fieldClass3:*, reg fieldClass4:V, reg p6:p(V +), reg r19:V, reg c1:L, reg new1:cls, reg fieldName5:*, reg fieldName6:V, reg p7:p(V +), reg fieldClass5:*, reg fieldClass6:V, reg p8:p(V +), reg r22:V, reg r23:V, reg new2:cls, reg fieldClass7:*, reg fieldClass8:V, reg p9:p(V +), reg r25:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg f2:*, reg f3:V, reg init:*, reg init1:V, reg list:cls, reg r28:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg fieldName7:*, reg fieldName8:V, reg metaName:*, reg metaName1:V, reg c2:cls, reg r31:V, reg l1:*, reg names__:cls, reg r32:V, reg value:*, reg value1:V |
    mkenv;
    st fieldName = fieldName;
    st fieldClass = fieldClass;
    readOnly_isMissing = missing.0(readOnly);
    if readOnly_isMissing then L0(FALSE) else L0(readOnly);
  L0(readOnly_orDefault):
    st readOnly = readOnly_orDefault;
    st where = where;
    _bindingMetaName = ldf `.bindingMetaName`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      fieldName1 = ld fieldName;
      fieldName2 = force? fieldName1;
      checkMissing(fieldName2);
      return fieldName2;
    };
    r1 = dyn _bindingMetaName(p);
    check L8() else D1();
  D1():
    deopt 3 [r1];
  L8():
    st metaName = r1;
    readOnly1 = ld readOnly;
    check L9() else D2();
  D2():
    deopt 5 [readOnly1];
  L9():
    readOnly2 = force? readOnly1;
    checkMissing(readOnly2);
    c = `as.logical`(readOnly2);
    if c then L10() else L1();
  L1():
    eval1 = ldf eval;
    check L14() else D5();
  L2():
    where1 = ld where;
    check L16() else D7();
  L10():
    eval = ldf eval;
    check L11() else D3();
  D3():
    deopt 8 [];
  D5():
    deopt 13 [];
  D7():
    deopt 17 [where1];
  L11():
    p1 = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      substitute = ldf substitute in base;
      r4 = dyn substitute(<lang function((value=), {
          if(missing(value), dummyFieldName, {
              `:::`(methods, .setDummyField)(.self, dummyField, dummyClass, thisField, TRUE, value);
              value
            })
        }, NULL)>, <lang list(dummyField=metaName, thisField=fieldName, dummyClass=fieldClass, dummyFieldName=as.name(metaName))>);
      goto L0(r4);
    L2():
      r2 = dyn base(<lang function((value=), {
          if(missing(value), dummyFieldName, {
              `:::`(methods, .setDummyField)(.self, dummyField, dummyClass, thisField, TRUE, value);
              value
            })
        }, NULL)>, <lang list(dummyField=metaName, thisField=fieldName, dummyClass=fieldClass, dummyFieldName=as.name(metaName))>);
      goto L0(r2);
    };
    r6 = dyn eval(p1);
    check L12() else D4();
  L14():
    p2 = prom<V +>{
      sym1 = ldf substitute;
      base1 = ldf substitute in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      substitute1 = ldf substitute in base;
      r10 = dyn substitute1(<lang function((value=), {
          if(missing(value), dummyFieldName, {
              `:::`(methods, .setDummyField)(.self, dummyField, dummyClass, thisField, FALSE, value);
              value
            })
        }, NULL)>, <lang list(dummyField=metaName, dummyClass=fieldClass, thisField=fieldName, dummyFieldName=as.name(metaName))>);
      goto L0(r10);
    L2():
      r8 = dyn base1(<lang function((value=), {
          if(missing(value), dummyFieldName, {
              `:::`(methods, .setDummyField)(.self, dummyField, dummyClass, thisField, FALSE, value);
              value
            })
        }, NULL)>, <lang list(dummyField=metaName, dummyClass=fieldClass, thisField=fieldName, dummyFieldName=as.name(metaName))>);
      goto L0(r8);
    };
    r12 = dyn eval1(p2);
    check L15() else D6();
  L16():
    where2 = force? where1;
    checkMissing(where2);
    l = ld f;
    environment__ = ldf `environment<-`;
    check L17() else D8();
  D4():
    deopt 10 [r6];
  D6():
    deopt 15 [r12];
  D8():
    deopt 20 [where2, l, where2];
  L12():
    st f = r6;
    goto L2();
  L15():
    st f = r12;
    goto L2();
  L17():
    r13 = dyn environment__(l, NULL, where2);
    check L18() else D9();
  D9():
    deopt 22 [where2, r13];
  L18():
    st f = r13;
    new = ldf new;
    check L19() else D10();
  D10():
    deopt 25 [];
  L19():
    p3 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    p4 = prom<V +>{
      fieldName3 = ld fieldName;
      fieldName4 = force? fieldName3;
      checkMissing(fieldName4);
      return fieldName4;
    };
    p5 = prom<V +>{
      fieldClass1 = ld fieldClass;
      fieldClass2 = force? fieldClass1;
      checkMissing(fieldClass2);
      return fieldClass2;
    };
    r17 = dyn new[, , field, className]("defaultBindingFunction", p3, p4, p5);
    check L20() else D11();
  D11():
    deopt 32 [r17];
  L20():
    st f = r17;
    isVirtualClass = ldf isVirtualClass;
    check L21() else D12();
  D12():
    deopt 35 [];
  L21():
    p6 = prom<V +>{
      fieldClass3 = ld fieldClass;
      fieldClass4 = force? fieldClass3;
      checkMissing(fieldClass4);
      return fieldClass4;
    };
    r19 = dyn isVirtualClass(p6);
    check L22() else D13();
  D13():
    deopt 37 [r19];
  L22():
    c1 = `as.logical`(r19);
    if c1 then L23() else L3();
  L3():
    new2 = ldf new;
    check L27() else D16();
  L4(r23):
    st init = r23;
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L23():
    new1 = ldf new;
    check L24() else D14();
  D14():
    deopt 39 [];
  D16():
    deopt 47 [];
  L5(r27):
    st value = r27;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  L24():
    p7 = prom<V +>{
      fieldName5 = ld fieldName;
      fieldName6 = force? fieldName5;
      checkMissing(fieldName6);
      return fieldName6;
    };
    p8 = prom<V +>{
      fieldClass5 = ld fieldClass;
      fieldClass6 = force? fieldClass5;
      checkMissing(fieldClass6);
      return fieldClass6;
    };
    r22 = dyn new1[, field, className]("uninitializedField", p7, p8);
    check L25() else D15();
  L27():
    p9 = prom<V +>{
      fieldClass7 = ld fieldClass;
      fieldClass8 = force? fieldClass7;
      checkMissing(fieldClass8);
      return fieldClass8;
    };
    r25 = dyn new2(p9);
    check L28() else D17();
  L29():
    f2 = ld f;
    check L31() else D18();
  L30():
    r26 = dyn base2(<sym f>, <sym init>);
    goto L5(r26);
  D15():
    deopt 45 [r22];
  D17():
    deopt 49 [r25];
  D18():
    deopt 53 [f2];
  L6(r30):
    l1 = ld value;
    names__ = ldf `names<-`;
    check L39() else D24();
  L25():
    goto L4(r22);
  L28():
    goto L4(r25);
  L31():
    f3 = force? f2;
    checkMissing(f3);
    init = ld init;
    check L32() else D19();
  L34():
    fieldName7 = ld fieldName;
    check L36() else D21();
  L35():
    r29 = dyn base3(<sym fieldName>, <sym metaName>);
    goto L6(r29);
  D19():
    deopt 55 [init];
  D21():
    deopt 62 [fieldName7];
  D24():
    deopt 69 [r30, l1, r30];
  L32():
    init1 = force? init;
    checkMissing(init1);
    list = ldf list in base;
    r28 = dyn list(f3, init1);
    check L33() else D20();
  L36():
    fieldName8 = force? fieldName7;
    checkMissing(fieldName8);
    metaName = ld metaName;
    check L37() else D22();
  L39():
    r32 = dyn names__(l1, NULL, r30);
    check L40() else D25();
  D20():
    deopt 58 [r28];
  D22():
    deopt 64 [metaName];
  D25():
    deopt 71 [r30, r32];
  L33():
    goto L5(r28);
  L37():
    metaName1 = force? metaName;
    checkMissing(metaName1);
    c2 = ldf c in base;
    r31 = dyn c2(fieldName8, metaName1);
    check L38() else D23();
  L40():
    st value = r32;
    value = ld value;
    check L41() else D26();
  D23():
    deopt 67 [r31];
  D26():
    deopt 73 [value];
  L38():
    goto L6(r31);
  L41():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  }
}