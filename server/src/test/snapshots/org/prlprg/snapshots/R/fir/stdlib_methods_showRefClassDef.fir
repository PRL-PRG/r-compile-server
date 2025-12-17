fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2768264229;
    st showRefClassDef = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2768264229(object, title) {
  (reg object:*, reg title:*) -+> V { var object:*, var title:*, reg title_isMissing:L, reg title_orDefault:*, reg cat:cls, reg title1:*, reg title2:V, reg p:p(V +), reg __:cls, reg r1:V, reg p1:p(V +), reg r3:V, reg __1:cls, reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg fields:*, reg fields1:V, reg length:cls, reg r7:V, reg c:L, reg printPropertiesList:cls, reg fields2:*, reg fields3:V, reg p2:p(V +), reg r9:V, reg _getLockedFieldNames:cls, reg object1:*, reg object2:V, reg p3:p(V +), reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg locked:*, reg locked1:V, reg length1:cls, reg r14:V, reg c1:L, reg _printNames:cls, reg locked2:*, reg locked3:V, reg p4:p(V +), reg r16:V, reg r17:V, reg cat1:cls, reg r19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg __2:cls, reg r22:V, reg names:cls, reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg methods:*, reg methods1:V, reg length2:cls, reg r26:V, reg c2:L, reg _printNames1:cls, reg methods2:*, reg methods3:V, reg p5:p(V +), reg r28:V, reg cat2:cls, reg r30:V, reg __3:cls, reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg supers:*, reg supers1:V, reg length3:cls, reg r34:V, reg c3:L, reg _printNames2:cls, reg supers2:*, reg supers3:V, reg p6:p(V +), reg r36:V |
    mkenv;
    st object = object;
    title_isMissing = missing.0(title);
    if title_isMissing then L0("Reference Class") else L0(title);
  L0(title_orDefault):
    st title = title_orDefault;
    cat = ldf cat;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    p = prom<V +>{
      title1 = ld title;
      title2 = force? title1;
      checkMissing(title2);
      return title2;
    };
    p1 = prom<V +>{
      __ = ldf `@` in base;
      r1 = dyn __(<sym object>, <sym className>);
      return r1;
    };
    r3 = dyn cat[, , , , sep](p, " \"", p1, "\":\n", "");
    check L14() else D1();
  D1():
    deopt 8 [r3];
  L14():
    __1 = ldf `@` in base;
    r4 = dyn __1(<sym object>, <sym fieldClasses>);
    st fields = r4;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L1(r6):
    c = `as.logical`(r6);
    if c then L19() else L2();
  L15():
    fields = ld fields;
    check L17() else D2();
  L16():
    r5 = dyn base(<sym fields>);
    goto L1(r5);
  D2():
    deopt 14 [fields];
  L2():
    cat1 = ldf cat;
    check L33() else D12();
  L6():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L17():
    fields1 = force? fields;
    checkMissing(fields1);
    length = ldf length in base;
    r7 = dyn length(fields1);
    check L18() else D3();
  L19():
    printPropertiesList = ldf printPropertiesList;
    check L20() else D4();
  D3():
    deopt 17 [r7];
  D4():
    deopt 19 [];
  D12():
    deopt 43 [];
  L7(r21):
    st methods = r21;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L18():
    goto L1(r7);
  L20():
    p2 = prom<V +>{
      fields2 = ld fields;
      fields3 = force? fields2;
      checkMissing(fields3);
      return fields3;
    };
    r9 = dyn printPropertiesList(p2, "Class fields");
    check L21() else D5();
  L33():
    r19 = dyn cat1("\nNo fields defined\n");
    check L34() else D13();
  L35():
    __2 = ldf `@` in base;
    r22 = dyn __2(<sym object>, <sym refMethods>);
    names = ldf names in base;
    r23 = dyn names(r22);
    check L37() else D14();
  L36():
    r20 = dyn base2(<lang `@`(object, refMethods)>);
    goto L7(r20);
  D5():
    deopt 22 [r9];
  D13():
    deopt 45 [r19];
  D14():
    deopt 51 [r23];
  L8(r25):
    c2 = `as.logical`(r25);
    if c2 then L42() else L9();
  L21():
    _getLockedFieldNames = ldf `.getLockedFieldNames`;
    check L22() else D6();
  L34():
    goto L6();
  L37():
    goto L7(r23);
  L38():
    methods = ld methods;
    check L40() else D15();
  L39():
    r24 = dyn base3(<sym methods>);
    goto L8(r24);
  D6():
    deopt 24 [];
  D15():
    deopt 55 [methods];
  L9():
    cat2 = ldf cat;
    check L46() else D19();
  L10():
    __3 = ldf `@` in base;
    r31 = dyn __3(<sym object>, <sym refSuperClasses>);
    st supers = r31;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  L22():
    p3 = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r11 = dyn _getLockedFieldNames(p3);
    check L23() else D7();
  L40():
    methods1 = force? methods;
    checkMissing(methods1);
    length2 = ldf length in base;
    r26 = dyn length2(methods1);
    check L41() else D16();
  L42():
    _printNames1 = ldf `.printNames`;
    check L43() else D17();
  D7():
    deopt 26 [r11];
  D16():
    deopt 58 [r26];
  D17():
    deopt 60 [];
  D19():
    deopt 65 [];
  L11(r33):
    c3 = `as.logical`(r33);
    if c3 then L52() else L12();
  L23():
    st locked = r11;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L41():
    goto L8(r26);
  L43():
    p5 = prom<V +>{
      methods2 = ld methods;
      methods3 = force? methods2;
      checkMissing(methods3);
      return methods3;
    };
    r28 = dyn _printNames1("\nClass Methods: ", p5);
    check L44() else D18();
  L46():
    r30 = dyn cat2("\nNo Class Methods\n");
    check L47() else D20();
  L48():
    supers = ld supers;
    check L50() else D21();
  L49():
    r32 = dyn base4(<sym supers>);
    goto L11(r32);
  D18():
    deopt 63 [r28];
  D20():
    deopt 67 [r30];
  D21():
    deopt 73 [supers];
  L3(r13):
    c1 = `as.logical`(r13);
    if c1 then L28() else L4();
  L12():
    invisible.0();
    popenv;
    return NULL;
  L24():
    locked = ld locked;
    check L26() else D8();
  L25():
    r12 = dyn base1(<sym locked>);
    goto L3(r12);
  L44():
    goto L10();
  L47():
    goto L10();
  L50():
    supers1 = force? supers;
    checkMissing(supers1);
    length3 = ldf length in base;
    r34 = dyn length3(supers1);
    check L51() else D22();
  L52():
    _printNames2 = ldf `.printNames`;
    check L53() else D23();
  D8():
    deopt 30 [locked];
  D22():
    deopt 76 [r34];
  D23():
    deopt 78 [];
  L4():
    goto L5(NULL);
  L5(r17):
    goto L6();
  L26():
    locked1 = force? locked;
    checkMissing(locked1);
    length1 = ldf length in base;
    r14 = dyn length1(locked1);
    check L27() else D9();
  L28():
    _printNames = ldf `.printNames`;
    check L29() else D10();
  L51():
    goto L11(r34);
  L53():
    p6 = prom<V +>{
      supers2 = ld supers;
      supers3 = force? supers2;
      checkMissing(supers3);
      return supers3;
    };
    r36 = dyn _printNames2("Reference Superclasses: ", p6);
    check L54() else D24();
  D9():
    deopt 33 [r14];
  D10():
    deopt 35 [];
  D24():
    deopt 81 [r36];
  L27():
    goto L3(r14);
  L29():
    p4 = prom<V +>{
      locked2 = ld locked;
      locked3 = force? locked2;
      checkMissing(locked3);
      return locked3;
    };
    r16 = dyn _printNames("Locked Fields", p4, FALSE);
    check L30() else D11();
  L54():
    popenv;
    return r36;
  D11():
    deopt 39 [r16];
  L30():
    goto L5(r16);
  }
}