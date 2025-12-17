fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner176533862;
    st installClassMethod = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner176533862(def, self, me, selfEnv, thisClass) {
  (reg def:*, reg self:*, reg me:*, reg selfEnv:*, reg thisClass:*) -+> V { var def:*, var self:*, var me:*, var selfEnv:*, var thisClass:*, reg is:cls, reg def1:*, reg def2:V, reg p:p(V +), reg r1:V, reg c:L, reg c1:V, reg is1:cls, reg def3:*, reg def4:V, reg p1:p(V +), reg r3:V, reg r4:V, reg c3:L, reg c4:V, reg c6:L, reg assign:cls, reg me1:*, reg me2:V, reg p2:p(V +), reg def5:*, reg def6:V, reg p3:p(V +), reg __:cls, reg r7:V, reg p4:p(V +), reg r9:V, reg def7:*, reg def8:V, reg __1:cls, reg r12:V, reg selfEnv1:*, reg selfEnv2:V, reg l:*, reg environment__:cls, reg r13:V, reg assign1:cls, reg me3:*, reg me4:V, reg p5:p(V +), reg def9:*, reg def10:V, reg p6:p(V +), reg selfEnv3:*, reg selfEnv4:V, reg p7:p(V +), reg r17:V, reg sym:cls, reg base:cls, reg guard:L, reg r18:V, reg r19:V, reg selfEnv5:*, reg selfEnv6:V, reg names:cls, reg r20:V, reg setdiff:cls, reg depends:*, reg depends1:V, reg p8:p(V +), reg done:*, reg done1:V, reg p9:p(V +), reg r23:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r24:V, reg r25:V, reg notDone:*, reg notDone1:V, reg match:cls, reg r26:V, reg superCase:*, reg superCase1:V, reg r27:V, reg c7:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg __2:cls, reg r30:V, reg nzchar:cls, reg r31:V, reg c8:L, reg __3:cls, reg r32:V, reg l1:*, reg c9:L, reg r34:V, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg r36:V, reg dx1:V, reg superCase2:*, reg superCase3:V, reg ____:cls, reg r37:V, reg r38:V, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg me5:*, reg me6:V, reg p10:p(V +), reg r40:V, reg p11:p(V +), reg dQuote:cls, reg __4:cls, reg r42:V, reg p12:p(V +), reg r44:V, reg p13:p(V +), reg r46:V, reg p14:p(V +), reg r48:V, reg notDone2:*, reg notDone3:V, reg s:V, reg l4:I, reg i:I, reg i1:I, reg i2:I, reg c10:L, reg x:V, reg installClassMethod:cls, reg get:cls, reg what:*, reg what1:V, reg p15:p(V +), reg __5:cls, reg r51:V, reg p16:p(V +), reg r53:V, reg p17:p(V +), reg self1:*, reg self2:V, reg p18:p(V +), reg what2:*, reg what3:V, reg p19:p(V +), reg selfEnv7:*, reg selfEnv8:V, reg p20:p(V +), reg thisClass1:*, reg thisClass2:V, reg p21:p(V +), reg r59:V, reg superCase4:*, reg superCase5:V, reg r60:V, reg c11:L, reg new_env:cls, reg selfEnv9:*, reg selfEnv10:V, reg p22:p(V +), reg r62:V, reg assign2:cls, reg get1:cls, reg __6:cls, reg r63:V, reg p23:p(V +), reg selfEnv11:*, reg selfEnv12:V, reg p24:p(V +), reg r66:V, reg p25:p(V +), reg newEnv:*, reg newEnv1:V, reg p26:p(V +), reg r69:V, reg newEnv2:*, reg newEnv3:V, reg l5:*, reg environment__1:cls, reg r70:V, reg assign3:cls, reg me7:*, reg me8:V, reg p27:p(V +), reg def11:*, reg def12:V, reg p28:p(V +), reg selfEnv13:*, reg selfEnv14:V, reg p29:p(V +), reg r74:V, reg def13:*, reg def14:V |
    mkenv;
    st def = def;
    st self = self;
    st me = me;
    st selfEnv = selfEnv;
    st thisClass = thisClass;
    is = ldf is;
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    p = prom<V +>{
      def1 = ld def;
      def2 = force? def1;
      checkMissing(def2);
      return def2;
    };
    r1 = dyn is(p, "externalMethodDef");
    check L16() else D1();
  D1():
    deopt 4 [r1];
  L16():
    c = `as.logical`(r1);
    if c then L0(c) else L17();
  L0(c1):
    c6 = `as.logical`(c1);
    if c6 then L21() else L1();
  L17():
    is1 = ldf is;
    check L18() else D2();
  D2():
    deopt 6 [c];
  L1():
    __1 = ldf `@` in base;
    r12 = dyn __1(<sym def>, <sym mayCall>);
    st depends = r12;
    selfEnv1 = ld selfEnv;
    check L27() else D7();
  L18():
    p1 = prom<V +>{
      def3 = ld def;
      def4 = force? def3;
      checkMissing(def4);
      return def4;
    };
    r3 = dyn is1(p1, "refMethodDef");
    check L19() else D3();
  L21():
    assign = ldf assign;
    check L22() else D4();
  D3():
    deopt 9 [c, r3];
  D4():
    deopt 13 [];
  D7():
    deopt 27 [selfEnv1];
  L19():
    r4 = `!`(r3);
    c3 = `as.logical`(r4);
    c4 = `||`(c, c3);
    goto L0(c4);
  L22():
    p2 = prom<V +>{
      me1 = ld me;
      me2 = force? me1;
      checkMissing(me2);
      return me2;
    };
    p3 = prom<V +>{
      def5 = ld def;
      def6 = force? def5;
      checkMissing(def6);
      return def6;
    };
    p4 = prom<V +>{
      __ = ldf `@` in base;
      r7 = dyn __(<sym thisClass>, <sym refMethods>);
      return r7;
    };
    r9 = dyn assign[, , envir](p2, p3, p4);
    check L23() else D5();
  L27():
    selfEnv2 = force? selfEnv1;
    checkMissing(selfEnv2);
    l = ld def;
    environment__ = ldf `environment<-`;
    check L28() else D8();
  D5():
    deopt 18 [r9];
  D8():
    deopt 30 [selfEnv2, l, selfEnv2];
  L23():
    def7 = ld def;
    check L24() else D6();
  L28():
    r13 = dyn environment__(l, NULL, selfEnv2);
    check L29() else D9();
  D6():
    deopt 19 [def7];
  D9():
    deopt 32 [selfEnv2, r13];
  L24():
    def8 = force? def7;
    checkMissing(def8);
    popenv;
    return def8;
  L29():
    st def = r13;
    assign1 = ldf assign;
    check L30() else D10();
  D10():
    deopt 35 [];
  L30():
    p5 = prom<V +>{
      me3 = ld me;
      me4 = force? me3;
      checkMissing(me4);
      return me4;
    };
    p6 = prom<V +>{
      def9 = ld def;
      def10 = force? def9;
      checkMissing(def10);
      return def10;
    };
    p7 = prom<V +>{
      selfEnv3 = ld selfEnv;
      selfEnv4 = force? selfEnv3;
      checkMissing(selfEnv4);
      return selfEnv4;
    };
    r17 = dyn assign1[, , envir](p5, p6, p7);
    check L31() else D11();
  D11():
    deopt 40 [r17];
  L31():
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L32() else L33();
  L3(r19):
    st done = r19;
    setdiff = ldf setdiff;
    check L36() else D14();
  L32():
    selfEnv5 = ld selfEnv;
    check L34() else D12();
  L33():
    r18 = dyn base(<sym selfEnv>);
    goto L3(r18);
  D12():
    deopt 43 [selfEnv5];
  D14():
    deopt 49 [];
  L34():
    selfEnv6 = force? selfEnv5;
    checkMissing(selfEnv6);
    names = ldf names in base;
    r20 = dyn names(selfEnv6);
    check L35() else D13();
  L36():
    p8 = prom<V +>{
      depends = ld depends;
      depends1 = force? depends;
      checkMissing(depends1);
      return depends1;
    };
    p9 = prom<V +>{
      done = ld done;
      done1 = force? done;
      checkMissing(done1);
      return done1;
    };
    r23 = dyn setdiff(p8, p9);
    check L37() else D15();
  D13():
    deopt 46 [r20];
  D15():
    deopt 52 [r23];
  L35():
    goto L3(r20);
  L37():
    st notDone = r23;
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L38() else L39();
  L4(r25):
    st superCase = r25;
    superCase = ld superCase;
    check L42() else D18();
  L38():
    notDone = ld notDone;
    check L40() else D16();
  L39():
    r24 = dyn base1("callSuper", <sym notDone>, 0.0);
    goto L4(r24);
  D16():
    deopt 57 [notDone];
  D18():
    deopt 64 [superCase];
  L40():
    notDone1 = force? notDone;
    checkMissing(notDone1);
    match = ldf match in base;
    r26 = dyn match("callSuper", notDone1, 0.0, NULL);
    check L41() else D17();
  L42():
    superCase1 = force? superCase;
    checkMissing(superCase1);
    r27 = `>`(superCase1, 0.0);
    c7 = `as.logical`(r27);
    if c7 then L43() else L5();
  D17():
    deopt 62 [r26];
  L5():
    goto L10();
  L10():
    notDone2 = ld notDone;
    check L56() else D23();
  L41():
    goto L4(r26);
  L43():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L44() else L45();
  D23():
    deopt 89 [notDone2];
  L6(r29):
    c8 = `as.logical`(r29);
    if c8 then L47() else L7();
  L44():
    __2 = ldf `@` in base;
    r30 = dyn __2(<sym def>, <sym superClassMethod>);
    nzchar = ldf nzchar in base;
    r31 = dyn nzchar(r30);
    check L46() else D19();
  L45():
    r28 = dyn base2(<lang `@`(def, superClassMethod)>);
    goto L6(r28);
  L56():
    notDone3 = force? notDone2;
    checkMissing(notDone3);
    s = toForSeq(notDone3);
    l4 = length(s);
    i = 0;
    goto L11(i);
  D19():
    deopt 73 [r31];
  L7():
    stop = ldf stop;
    check L53() else D21();
  L9(r38):
    goto L10();
  L11(i1):
    i2 = `+`.1(i1, 1);
    c10 = `<`.1(l4, i2);
    if c10 then L57() else L12();
  L46():
    goto L6(r31);
  L47():
    __3 = ldf `@` in base;
    r32 = dyn __3(<sym def>, <sym superClassMethod>);
    l1 = ld notDone;
    c9 = `is.object`(l1);
    if c9 then L48() else L49(r32, l1);
  D21():
    deopt 82 [];
  L8(r36, dx1):
    st notDone = dx1;
    goto L9(r36);
  L12():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    installClassMethod = ldf installClassMethod;
    check L58() else D24();
  L48():
    dr = tryDispatchBuiltin.0("[[<-", l1, r32);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L50() else L49(r32, dr);
  L49(r34, l3):
    superCase2 = ld superCase;
    check L51() else D20();
  L53():
    p14 = prom<V +>{
      gettextf = ldf gettextf;
      p11 = prom<V +>{
        sQuote = ldf sQuote;
        p10 = prom<V +>{
          me5 = ld me;
          me6 = force? me5;
          checkMissing(me6);
          return me6;
        };
        r40 = dyn sQuote(p10);
        return r40;
      };
      p13 = prom<V +>{
        dQuote = ldf dQuote;
        p12 = prom<V +>{
          __4 = ldf `@` in base;
          r42 = dyn __4(<sym thisClass>, <sym className>);
          return r42;
        };
        r44 = dyn dQuote(p12);
        return r44;
      };
      r46 = dyn gettextf("a call to superClass() is in the method %s but there is no superclass definition of this method for class %s", p11, p13);
      return r46;
    };
    r48 = dyn stop[, domain](p14, NA_LGL);
    check L54() else D22();
  L57():
    superCase4 = ld superCase;
    check L60() else D26();
  D20():
    deopt 77 [r34, l3, r32, superCase2];
  D22():
    deopt 86 [r48];
  D24():
    deopt 92 [i2];
  D26():
    deopt 102 [superCase4];
  L50():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(r32, dx);
  L51():
    superCase3 = force? superCase2;
    ____ = ldf `[[<-` in base;
    r37 = dyn ____(l3, r32, superCase3);
    goto L8(r34, r37);
  L54():
    goto L9(r48);
  L58():
    p17 = prom<V +>{
      get = ldf get;
      p15 = prom<V +>{
        what = ld what;
        what1 = force? what;
        checkMissing(what1);
        return what1;
      };
      p16 = prom<V +>{
        __5 = ldf `@` in base;
        r51 = dyn __5(<sym thisClass>, <sym refMethods>);
        return r51;
      };
      r53 = dyn get[, envir](p15, p16);
      return r53;
    };
    p18 = prom<V +>{
      self1 = ld self;
      self2 = force? self1;
      checkMissing(self2);
      return self2;
    };
    p19 = prom<V +>{
      what2 = ld what;
      what3 = force? what2;
      checkMissing(what3);
      return what3;
    };
    p20 = prom<V +>{
      selfEnv7 = ld selfEnv;
      selfEnv8 = force? selfEnv7;
      checkMissing(selfEnv8);
      return selfEnv8;
    };
    p21 = prom<V +>{
      thisClass1 = ld thisClass;
      thisClass2 = force? thisClass1;
      checkMissing(thisClass2);
      return thisClass2;
    };
    r59 = dyn installClassMethod(p17, p18, p19, p20, p21);
    check L59() else D25();
  L60():
    superCase5 = force? superCase4;
    checkMissing(superCase5);
    r60 = `>`(superCase5, 0.0);
    c11 = `as.logical`(r60);
    if c11 then L61() else L13();
  D25():
    deopt 98 [i2, r59];
  L13():
    goto L14();
  L14():
    def13 = ld def;
    check L72() else D36();
  L59():
    goto L11(i2);
  L61():
    new_env = ldf `new.env`;
    check L62() else D27();
  D27():
    deopt 107 [];
  D36():
    deopt 136 [def13];
  L62():
    p22 = prom<V +>{
      selfEnv9 = ld selfEnv;
      selfEnv10 = force? selfEnv9;
      checkMissing(selfEnv10);
      return selfEnv10;
    };
    r62 = dyn new_env[, parent](FALSE, p22);
    check L63() else D28();
  L72():
    def14 = force? def13;
    checkMissing(def14);
    popenv;
    return def14;
  D28():
    deopt 111 [r62];
  L63():
    st newEnv = r62;
    assign2 = ldf assign;
    check L64() else D29();
  D29():
    deopt 114 [];
  L64():
    p25 = prom<V +>{
      get1 = ldf get;
      p23 = prom<V +>{
        __6 = ldf `@` in base;
        r63 = dyn __6(<sym def>, <sym superClassMethod>);
        return r63;
      };
      p24 = prom<V +>{
        selfEnv11 = ld selfEnv;
        selfEnv12 = force? selfEnv11;
        checkMissing(selfEnv12);
        return selfEnv12;
      };
      r66 = dyn get1[, envir](p23, p24);
      return r66;
    };
    p26 = prom<V +>{
      newEnv = ld newEnv;
      newEnv1 = force? newEnv;
      checkMissing(newEnv1);
      return newEnv1;
    };
    r69 = dyn assign2[, , envir]("callSuper", p25, p26);
    check L65() else D30();
  D30():
    deopt 119 [r69];
  L65():
    newEnv2 = ld newEnv;
    check L66() else D31();
  D31():
    deopt 120 [newEnv2];
  L66():
    newEnv3 = force? newEnv2;
    checkMissing(newEnv3);
    l5 = ld def;
    environment__1 = ldf `environment<-`;
    check L67() else D32();
  D32():
    deopt 123 [newEnv3, l5, newEnv3];
  L67():
    r70 = dyn environment__1(l5, NULL, newEnv3);
    check L68() else D33();
  D33():
    deopt 125 [newEnv3, r70];
  L68():
    st def = r70;
    assign3 = ldf assign;
    check L69() else D34();
  D34():
    deopt 128 [];
  L69():
    p27 = prom<V +>{
      me7 = ld me;
      me8 = force? me7;
      checkMissing(me8);
      return me8;
    };
    p28 = prom<V +>{
      def11 = ld def;
      def12 = force? def11;
      checkMissing(def12);
      return def12;
    };
    p29 = prom<V +>{
      selfEnv13 = ld selfEnv;
      selfEnv14 = force? selfEnv13;
      checkMissing(selfEnv14);
      return selfEnv14;
    };
    r74 = dyn assign3[, , envir](p27, p28, p29);
    check L70() else D35();
  D35():
    deopt 133 [r74];
  L70():
    goto L14();
  }
}