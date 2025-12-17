fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner559698880;
    st `.initTraceable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner559698880(`.Object`, def, tracer, exit, at, print, doEdit) {
  (reg _Object:*, reg def:*, reg tracer:*, reg exit:*, reg at:*, reg print:*, reg doEdit:*) -+> V { var `.Object`:*, var def:*, var tracer:*, var exit:*, var at:*, var print:*, var doEdit:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg emptyenv:cls, reg r2:V, reg l:*, reg ___:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg missing:cls, reg r6:V, reg c:L, reg _Object1:*, reg _Object2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg def1:*, reg def2:V, reg class:cls, reg r11:V, reg getClass:cls, reg oldClass:*, reg oldClass1:V, reg p:p(V +), reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg oldClassDef:*, reg oldClassDef1:V, reg c1:V, reg r16:V, reg c2:L, reg c4:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg c7:L, reg r18:V, reg __:cls, reg r19:V, reg length:cls, reg r20:V, reg r21:V, reg c8:L, reg c9:V, reg c11:L, reg def3:*, reg def4:V, reg l1:*, reg as__:cls, reg oldClass2:*, reg oldClass3:V, reg p1:p(V +), reg r23:V, reg def6:*, reg def7:V, reg l2:*, reg ___1:cls, reg r24:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg nargs:cls, reg r27:V, reg r28:V, reg c12:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg elNamed:cls, reg getSlots:cls, reg getClass1:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r31:V, reg r32:V, reg def8:*, reg def9:V, reg class1:cls, reg r33:V, reg p2:p(V +), reg r35:V, reg p3:p(V +), reg r37:V, reg p4:p(V +), reg r39:V, reg c13:V, reg r40:V, reg c14:L, reg __1:cls, reg r41:V, reg _makeTracedFunction:cls, reg def10:*, reg def11:V, reg p5:p(V +), reg tracer1:*, reg tracer2:V, reg p6:p(V +), reg exit1:*, reg exit2:V, reg p7:p(V +), reg at1:*, reg at2:V, reg p8:p(V +), reg print1:*, reg print2:V, reg p9:p(V +), reg doEdit1:*, reg doEdit2:V, reg p10:p(V +), reg r49:V, reg l3:*, reg ___2:cls, reg r50:V, reg _Object3:*, reg _Object4:V |
    mkenv;
    st `.Object` = _Object;
    st def = def;
    st tracer = tracer;
    st exit = exit;
    st at = at;
    st print = print;
    st doEdit = doEdit;
    sym = ldf emptyenv;
    base = ldf emptyenv in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r1):
    l = ld `.Object`;
    ___ = ldf `@<-`;
    check L19() else D1();
  L16():
    emptyenv = ldf emptyenv in base;
    r2 = dyn emptyenv();
    check L18() else D0();
  L17():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  D1():
    deopt 5 [r1, l, r1];
  L18():
    goto L0(r2);
  L19():
    r3 = dyn ___(l, NULL, "source", r1);
    check L20() else D2();
  D2():
    deopt 8 [r1, r3];
  L20():
    st `.Object` = r3;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L1(r5):
    c = `as.logical`(r5);
    if c then L23() else L2();
  L21():
    missing = ldf missing in base;
    r6 = dyn missing(<sym def>);
    goto L1(r6);
  L22():
    r4 = dyn base1(<sym def>);
    goto L1(r4);
  L2():
    sym2 = ldf class;
    base2 = ldf class in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L23():
    _Object1 = ld `.Object`;
    check L24() else D3();
  D3():
    deopt 13 [_Object1];
  L4(r10):
    st oldClass = r10;
    getClass = ldf getClass;
    check L31() else D6();
  L24():
    _Object2 = force? _Object1;
    checkMissing(_Object2);
    popenv;
    return _Object2;
  L27():
    def1 = ld def;
    check L29() else D4();
  L28():
    r9 = dyn base2(<sym def>);
    goto L4(r9);
  D4():
    deopt 20 [def1];
  D6():
    deopt 26 [];
  L29():
    def2 = force? def1;
    checkMissing(def2);
    class = ldf class in base;
    r11 = dyn class(def2);
    check L30() else D5();
  L31():
    p = prom<V +>{
      oldClass = ld oldClass;
      oldClass1 = force? oldClass;
      checkMissing(oldClass1);
      return oldClass1;
    };
    r13 = dyn getClass(p);
    check L32() else D7();
  D5():
    deopt 23 [r11];
  D7():
    deopt 28 [r13];
  L30():
    goto L4(r11);
  L32():
    st oldClassDef = r13;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L5(r15):
    r16 = `!`(r15);
    c2 = `as.logical`(r16);
    if c2 then L36() else L6(c2);
  L33():
    oldClassDef = ld oldClassDef;
    check L35() else D8();
  L34():
    r14 = dyn base3(<sym oldClassDef>);
    goto L5(r14);
  D8():
    deopt 31 [oldClassDef];
  L6(c4):
    c11 = `as.logical`(c4);
    if c11 then L41() else L8();
  L35():
    oldClassDef1 = force? oldClassDef;
    checkMissing(oldClassDef1);
    c1 = `==`(oldClassDef1, NULL);
    goto L5(c1);
  L36():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L37() else L38();
  L7(c7, r18):
    r21 = `>`(r18, 0.0);
    c8 = `as.logical`(r21);
    c9 = `&&`(c7, c8);
    goto L6(c9);
  L8():
    goto L9();
  L9():
    def6 = ld def;
    check L46() else D13();
  L37():
    __ = ldf `@` in base;
    r19 = dyn __(<sym oldClassDef>, <sym slots>);
    length = ldf length in base;
    r20 = dyn length(r19);
    check L39() else D9();
  L38():
    r17 = dyn base4(<lang `@`(oldClassDef, slots)>);
    goto L7(c2, r17);
  L41():
    def3 = ld def;
    check L42() else D10();
  D9():
    deopt 40 [c2, r20];
  D10():
    deopt 44 [def3];
  D13():
    deopt 54 [def6];
  L39():
    goto L7(c2, r20);
  L42():
    def4 = force? def3;
    checkMissing(def4);
    l1 = ld `.Object`;
    as__ = ldf `as<-`;
    check L43() else D11();
  L46():
    def7 = force? def6;
    checkMissing(def7);
    l2 = ld `.Object`;
    ___1 = ldf `@<-`;
    check L47() else D14();
  D11():
    deopt 47 [def4, l1, def4];
  D14():
    deopt 57 [def7, l2, def7];
  L43():
    p1 = prom<V +>{
      oldClass2 = ld oldClass;
      oldClass3 = force? oldClass2;
      checkMissing(oldClass3);
      return oldClass3;
    };
    r23 = dyn as__(l1, NULL, p1, def4);
    check L44() else D12();
  L47():
    r24 = dyn ___1(l2, NULL, "original", def7);
    check L48() else D15();
  D12():
    deopt 50 [def4, r23];
  D15():
    deopt 60 [def7, r24];
  L44():
    st `.Object` = r23;
    goto L9();
  L48():
    st `.Object` = r24;
    sym5 = ldf nargs;
    base5 = ldf nargs in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L49() else L50();
  L10(r26):
    r28 = `>`(r26, 2.0);
    c12 = `as.logical`(r28);
    if c12 then L52() else L11();
  L49():
    nargs = ldf nargs in base;
    r27 = dyn nargs();
    check L51() else D16();
  L50():
    r25 = dyn base5();
    goto L10(r25);
  D16():
    deopt 65 [r27];
  L11():
    goto L15();
  L15():
    _Object3 = ld `.Object`;
    check L64() else D23();
  L51():
    goto L10(r27);
  L52():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L53() else L54();
  D23():
    deopt 98 [_Object3];
  L12(r30):
    r40 = `!`(r30);
    c14 = `as.logical`(r40);
    if c14 then L57() else L13();
  L53():
    elNamed = ldf elNamed;
    check L55() else D17();
  L54():
    r29 = dyn base6(<lang elNamed(getSlots(getClass(class(def))), ".Data")>);
    goto L12(r29);
  L64():
    _Object4 = force? _Object3;
    checkMissing(_Object4);
    popenv;
    return _Object4;
  D17():
    deopt 70 [];
  L13():
    goto L14();
  L14():
    _makeTracedFunction = ldf `.makeTracedFunction`;
    check L59() else D19();
  L55():
    p4 = prom<V +>{
      getSlots = ldf getSlots;
      p3 = prom<V +>{
        getClass1 = ldf getClass;
        p2 = prom<V +>{
          sym7 = ldf class;
          base7 = ldf class in base;
          guard7 = `==`.4(sym7, base7);
          if guard7 then L1() else L2();
        L0(r32):
          return r32;
        L1():
          def8 = ld def;
          def9 = force? def8;
          checkMissing(def9);
          class1 = ldf class in base;
          r33 = dyn class1(def9);
          goto L0(r33);
        L2():
          r31 = dyn base7(<sym def>);
          goto L0(r31);
        };
        r35 = dyn getClass1(p2);
        return r35;
      };
      r37 = dyn getSlots(p3);
      return r37;
    };
    r39 = dyn elNamed(p4, ".Data");
    check L56() else D18();
  L57():
    __1 = ldf `@` in base;
    r41 = dyn __1(<sym def>, <sym .Data>);
    st def = r41;
    goto L14();
  D18():
    deopt 73 [r39];
  D19():
    deopt 82 [];
  L56():
    c13 = `==`(r39, NULL);
    goto L12(c13);
  L59():
    p5 = prom<V +>{
      def10 = ld def;
      def11 = force? def10;
      checkMissing(def11);
      return def11;
    };
    p6 = prom<V +>{
      tracer1 = ld tracer;
      tracer2 = force? tracer1;
      checkMissing(tracer2);
      return tracer2;
    };
    p7 = prom<V +>{
      exit1 = ld exit;
      exit2 = force? exit1;
      checkMissing(exit2);
      return exit2;
    };
    p8 = prom<V +>{
      at1 = ld at;
      at2 = force? at1;
      checkMissing(at2);
      return at2;
    };
    p9 = prom<V +>{
      print1 = ld print;
      print2 = force? print1;
      checkMissing(print2);
      return print2;
    };
    p10 = prom<V +>{
      doEdit1 = ld doEdit;
      doEdit2 = force? doEdit1;
      checkMissing(doEdit2);
      return doEdit2;
    };
    r49 = dyn _makeTracedFunction(p5, p6, p7, p8, p9, p10);
    check L60() else D20();
  D20():
    deopt 89 [r49];
  L60():
    l3 = ld `.Object`;
    ___2 = ldf `@<-`;
    check L61() else D21();
  D21():
    deopt 91 [r49, l3, r49];
  L61():
    r50 = dyn ___2(l3, NULL, ".Data", r49);
    check L62() else D22();
  D22():
    deopt 94 [r49, r50];
  L62():
    st `.Object` = r50;
    goto L15();
  }
}