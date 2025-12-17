fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner13748780;
    st makeClassMethod = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner13748780(def, name, Class, superClassMethod, allMethods) {
  (reg def:*, reg name:*, reg Class:*, reg superClassMethod:*, reg allMethods:*) -+> V { var def:*, var name:*, var Class:*, var superClassMethod:*, reg superClassMethod_isMissing:L, reg superClassMethod_orDefault:*, var allMethods:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg formalArgs:cls, reg def1:*, reg def2:V, reg p:p(V +), reg r3:V, reg c:L, reg r5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg identical:cls, reg r7:V, reg c1:L, reg externalRefMethod:cls, reg def3:*, reg def4:V, reg p1:p(V +), reg r9:V, reg is:cls, reg def5:*, reg def6:V, reg p2:p(V +), reg r12:V, reg c2:L, reg name1:*, reg name2:V, reg l:*, reg ___:cls, reg r13:V, reg Class1:*, reg Class2:V, reg l1:*, reg ___1:cls, reg r14:V, reg superClassMethod1:*, reg superClassMethod2:V, reg l2:*, reg ___2:cls, reg r15:V, reg def7:*, reg def8:V, reg _getGlobalFuns:cls, reg def9:*, reg def10:V, reg p3:p(V +), reg r19:V, reg _in_:cls, reg depends:*, reg depends1:V, reg p4:p(V +), reg r21:V, reg c3:L, reg _declaredMethods:cls, reg def11:*, reg def12:V, reg p5:p(V +), reg r23:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r24:V, reg r25:V, reg declared:*, reg declared1:V, reg length:cls, reg r26:V, reg c4:L, reg c6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg c9:L, reg r28:V, reg _in_1:cls, reg declared2:*, reg declared3:V, reg p6:p(V +), reg allMethods1:*, reg allMethods2:V, reg p7:p(V +), reg r31:V, reg r32:V, reg any:cls, reg r33:V, reg c10:L, reg c11:V, reg c13:L, reg warning:cls, reg gettextf:cls, reg paste0:cls, reg declared4:*, reg declared5:V, reg c14:L, reg declared7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg _in_2:cls, reg declared8:*, reg declared9:V, reg p8:p(V +), reg allMethods3:*, reg allMethods4:V, reg p9:p(V +), reg r36:V, reg r37:V, reg __1:cls, reg r38:V, reg p10:p(V +), reg r40:V, reg p11:p(V +), reg r42:V, reg p12:p(V +), reg r44:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r46:V, reg r47:V, reg declared10:*, reg declared11:V, reg depends2:*, reg depends3:V, reg c15:cls, reg r48:V, reg depends4:*, reg depends5:V, reg c16:L, reg depends7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r50:V, reg depends10:V, reg r51:V, reg depends11:*, reg depends12:V, reg allMethods5:*, reg allMethods6:V, reg match:cls, reg r52:V, reg r53:V, reg __2:cls, reg r54:V, reg new:cls, reg def13:*, reg def14:V, reg p13:p(V +), reg depends13:*, reg depends14:V, reg p14:p(V +), reg name3:*, reg name4:V, reg p15:p(V +), reg Class3:*, reg Class4:V, reg p16:p(V +), reg superClassMethod3:*, reg superClassMethod4:V, reg p17:p(V +), reg r60:V |
    mkenv;
    st def = def;
    st name = name;
    st Class = Class;
    superClassMethod_isMissing = missing.0(superClassMethod);
    if superClassMethod_isMissing then L0("") else L0(superClassMethod);
  L0(superClassMethod_orDefault):
    st superClassMethod = superClassMethod_orDefault;
    st allMethods = allMethods;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L25() else L3();
  L17():
    formalArgs = ldf formalArgs;
    check L19() else D0();
  L18():
    r = dyn base(<lang `[[`(formalArgs(def), 1.0)>, ".self");
    goto L1(r);
  D0():
    deopt 3 [];
  L3():
    goto L4();
  L4():
    is = ldf is;
    check L29() else D5();
  L19():
    p = prom<V +>{
      def1 = ld def;
      def2 = force? def1;
      checkMissing(def2);
      return def2;
    };
    r3 = dyn formalArgs(p);
    check L20() else D1();
  L25():
    externalRefMethod = ldf externalRefMethod;
    check L26() else D3();
  D1():
    deopt 5 [r3];
  D3():
    deopt 20 [];
  D5():
    deopt 27 [];
  L20():
    c = `is.object`(r3);
    if c then L21() else L22(r3);
  L26():
    p1 = prom<V +>{
      def3 = ld def;
      def4 = force? def3;
      checkMissing(def4);
      return def4;
    };
    r9 = dyn externalRefMethod(p1);
    check L27() else D4();
  L29():
    p2 = prom<V +>{
      def5 = ld def;
      def6 = force? def5;
      checkMissing(def6);
      return def6;
    };
    r12 = dyn is(p2, "externalRefMethod");
    check L30() else D6();
  D4():
    deopt 22 [r9];
  D6():
    deopt 30 [r12];
  L2(dx1):
    identical = ldf identical in base;
    r7 = dyn identical(dx1, ".self", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L24() else D2();
  L21():
    dr = tryDispatchBuiltin.1("[[", r3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(r5):
    __ = ldf `[[` in base;
    r6 = dyn __(r5, 1.0);
    goto L2(r6);
  L27():
    st def = r9;
    goto L4();
  L30():
    c2 = `as.logical`(r12);
    if c2 then L31() else L5();
  D2():
    deopt 18 [r7];
  L5():
    _getGlobalFuns = ldf `.getGlobalFuns`;
    check L44() else D17();
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L24():
    goto L1(r7);
  L31():
    name1 = ld name;
    check L32() else D7();
  D7():
    deopt 31 [name1];
  D17():
    deopt 61 [];
  L32():
    name2 = force? name1;
    checkMissing(name2);
    l = ld def;
    ___ = ldf `@<-`;
    check L33() else D8();
  L44():
    p3 = prom<V +>{
      def9 = ld def;
      def10 = force? def9;
      checkMissing(def10);
      return def10;
    };
    r19 = dyn _getGlobalFuns(p3);
    check L45() else D18();
  D8():
    deopt 34 [name2, l, name2];
  D18():
    deopt 63 [r19];
  L33():
    r13 = dyn ___(l, NULL, "name", name2);
    check L34() else D9();
  L45():
    st depends = r19;
    _in_ = ldf `%in%`;
    check L46() else D19();
  D9():
    deopt 37 [name2, r13];
  D19():
    deopt 66 [];
  L34():
    st def = r13;
    Class1 = ld Class;
    check L35() else D10();
  L46():
    p4 = prom<V +>{
      depends = ld depends;
      depends1 = force? depends;
      checkMissing(depends1);
      return depends1;
    };
    r21 = dyn _in_("usingMethods", p4);
    check L47() else D20();
  D10():
    deopt 39 [Class1];
  D20():
    deopt 69 [r21];
  L35():
    Class2 = force? Class1;
    checkMissing(Class2);
    l1 = ld def;
    ___1 = ldf `@<-`;
    check L36() else D11();
  L47():
    c3 = `as.logical`(r21);
    if c3 then L48() else L7();
  D11():
    deopt 42 [Class2, l1, Class2];
  L7():
    goto L14();
  L14():
    depends4 = ld depends;
    check L72() else D33();
  L36():
    r14 = dyn ___1(l1, NULL, "refClassName", Class2);
    check L37() else D12();
  L48():
    _declaredMethods = ldf `.declaredMethods`;
    check L49() else D21();
  D12():
    deopt 45 [Class2, r14];
  D21():
    deopt 71 [];
  D33():
    deopt 109 [depends4];
  L37():
    st def = r14;
    superClassMethod1 = ld superClassMethod;
    check L38() else D13();
  L49():
    p5 = prom<V +>{
      def11 = ld def;
      def12 = force? def11;
      checkMissing(def12);
      return def12;
    };
    r23 = dyn _declaredMethods(p5);
    check L50() else D22();
  L72():
    depends5 = force? depends4;
    checkMissing(depends5);
    c16 = `is.object`(depends5);
    if c16 then L73() else L74(depends5);
  D13():
    deopt 47 [superClassMethod1];
  D22():
    deopt 73 [r23];
  L15(dx5):
    st depends = dx5;
    new = ldf new;
    check L81() else D37();
  L38():
    superClassMethod2 = force? superClassMethod1;
    checkMissing(superClassMethod2);
    l2 = ld def;
    ___2 = ldf `@<-`;
    check L39() else D14();
  L50():
    st declared = r23;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L51() else L52();
  L73():
    dr4 = tryDispatchBuiltin.1("[", depends5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L75() else L74(dr4);
  L74(depends7):
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L76() else L77();
  D14():
    deopt 50 [superClassMethod2, l2, superClassMethod2];
  D37():
    deopt 126 [];
  L8(r25):
    c4 = `as.logical`(r25);
    if c4 then L55() else L9(c4);
  L16(depends10, r51):
    r53 = `>`(r51, 0.0);
    __2 = ldf `[` in base;
    r54 = dyn __2(depends10, r53);
    goto L15(r54);
  L39():
    r15 = dyn ___2(l2, NULL, "superClassMethod", superClassMethod2);
    check L40() else D15();
  L51():
    declared = ld declared;
    check L53() else D23();
  L52():
    r24 = dyn base1(<sym declared>);
    goto L8(r24);
  L75():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L15(dx4);
  L76():
    depends11 = ld depends;
    check L78() else D34();
  L77():
    r50 = dyn base4(<sym depends>, <sym allMethods>, 0.0);
    goto L16(depends7, r50);
  L81():
    p13 = prom<V +>{
      def13 = ld def;
      def14 = force? def13;
      checkMissing(def14);
      return def14;
    };
    p14 = prom<V +>{
      depends13 = ld depends;
      depends14 = force? depends13;
      checkMissing(depends14);
      return depends14;
    };
    p15 = prom<V +>{
      name3 = ld name;
      name4 = force? name3;
      checkMissing(name4);
      return name4;
    };
    p16 = prom<V +>{
      Class3 = ld Class;
      Class4 = force? Class3;
      checkMissing(Class4);
      return Class4;
    };
    p17 = prom<V +>{
      superClassMethod3 = ld superClassMethod;
      superClassMethod4 = force? superClassMethod3;
      checkMissing(superClassMethod4);
      return superClassMethod4;
    };
    r60 = dyn new[, , mayCall, name, refClassName, superClassMethod]("refMethodDef", p13, p14, p15, p16, p17);
    check L82() else D38();
  D15():
    deopt 53 [superClassMethod2, r15];
  D23():
    deopt 77 [declared];
  D34():
    deopt 113 [depends7, depends11];
  D38():
    deopt 137 [r60];
  L9(c6):
    c13 = `as.logical`(c6);
    if c13 then L62() else L11();
  L40():
    st def = r15;
    def7 = ld def;
    check L41() else D16();
  L53():
    declared1 = force? declared;
    checkMissing(declared1);
    length = ldf length in base;
    r26 = dyn length(declared1);
    check L54() else D24();
  L55():
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L56() else L57();
  L78():
    depends12 = force? depends11;
    checkMissing(depends12);
    allMethods5 = ld allMethods;
    check L79() else D35();
  L82():
    popenv;
    return r60;
  D16():
    deopt 55 [def7];
  D24():
    deopt 80 [r26];
  D35():
    deopt 115 [depends7, allMethods5];
  L10(c9, r28):
    c10 = `as.logical`(r28);
    c11 = `&&`(c9, c10);
    goto L9(c11);
  L11():
    goto L12();
  L12():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L66() else L67();
  L41():
    def8 = force? def7;
    checkMissing(def8);
    popenv;
    return def8;
  L54():
    goto L8(r26);
  L56():
    _in_1 = ldf `%in%`;
    check L58() else D25();
  L57():
    r27 = dyn base2(<lang `!`(`%in%`(declared, allMethods))>);
    goto L10(c4, r27);
  L62():
    warning = ldf warning;
    check L63() else D28();
  L79():
    allMethods6 = force? allMethods5;
    checkMissing(allMethods6);
    match = ldf match in base;
    r52 = dyn match(depends12, allMethods6, 0.0, NULL);
    check L80() else D36();
  D25():
    deopt 84 [c4];
  D28():
    deopt 93 [];
  D36():
    deopt 120 [depends7, r52];
  L13(r47):
    st depends = r47;
    goto L14();
  L58():
    p6 = prom<V +>{
      declared2 = ld declared;
      declared3 = force? declared2;
      checkMissing(declared3);
      return declared3;
    };
    p7 = prom<V +>{
      allMethods1 = ld allMethods;
      allMethods2 = force? allMethods1;
      checkMissing(allMethods2);
      return allMethods2;
    };
    r31 = dyn _in_1(p6, p7);
    check L59() else D26();
  L63():
    p12 = prom<V +>{
      gettextf = ldf gettextf;
      p11 = prom<V +>{
        paste0 = ldf paste0;
        p10 = prom<V +>{
          declared4 = ld declared;
          declared5 = force? declared4;
          checkMissing(declared5);
          c14 = `is.object`(declared5);
          if c14 then L1() else L2(declared5);
        L0(dx3):
          return dx3;
        L1():
          dr2 = tryDispatchBuiltin.1("[", declared5);
          dc1 = getTryDispatchBuiltinDispatched(dr2);
          if dc1 then L3() else L2(dr2);
        L2(declared7):
          _in_2 = ldf `%in%`;
          p8 = prom<V +>{
            declared8 = ld declared;
            declared9 = force? declared8;
            checkMissing(declared9);
            return declared9;
          };
          p9 = prom<V +>{
            allMethods3 = ld allMethods;
            allMethods4 = force? allMethods3;
            checkMissing(allMethods4);
            return allMethods4;
          };
          r36 = dyn _in_2(p8, p9);
          r37 = `!`(r36);
          __1 = ldf `[` in base;
          r38 = dyn __1(declared7, r37);
          goto L0(r38);
        L3():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L0(dx2);
        };
        r40 = dyn paste0[, collapse](p10, ", ");
        return r40;
      };
      r42 = dyn gettextf("methods declared in usingMethods() but not found: %s", p11);
      return r42;
    };
    r44 = dyn warning(p12);
    check L64() else D29();
  L66():
    declared10 = ld declared;
    check L68() else D30();
  L67():
    r46 = dyn base3(<sym declared>, <sym depends>);
    goto L13(r46);
  L80():
    goto L16(depends7, r52);
  D26():
    deopt 87 [c4, r31];
  D29():
    deopt 95 [r44];
  D30():
    deopt 100 [declared10];
  L59():
    r32 = `!`(r31);
    any = ldf any in base;
    r33 = dyn any(r32);
    check L60() else D27();
  L64():
    goto L12();
  L68():
    declared11 = force? declared10;
    checkMissing(declared11);
    depends2 = ld depends;
    check L69() else D31();
  D27():
    deopt 90 [c4, r33];
  D31():
    deopt 102 [depends2];
  L60():
    goto L10(c4, r33);
  L69():
    depends3 = force? depends2;
    checkMissing(depends3);
    c15 = ldf c in base;
    r48 = dyn c15(declared11, depends3);
    check L70() else D32();
  D32():
    deopt 105 [r48];
  L70():
    goto L13(r48);
  }
}