fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1794341588;
    st assignClassDef = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1794341588(Class, def, where, force, doSubclasses) {
  (reg Class:*, reg def:*, reg where:*, reg force:*, reg doSubclasses:*) -+> V { var Class:*, var def:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg p:p(V +), var force:*, reg force_isMissing:L, reg force_orDefault:*, var doSubclasses:*, reg doSubclasses_isMissing:L, reg doSubclasses_orDefault:*, reg is:cls, reg def1:*, reg def2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg is1:cls, reg def3:*, reg def4:V, reg p3:p(V +), reg r5:V, reg r6:V, reg c:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg def5:*, reg def6:V, reg class:cls, reg r9:V, reg p4:p(V +), reg r11:V, reg p5:p(V +), reg dQuote1:cls, reg Class1:*, reg Class2:V, reg p6:p(V +), reg r14:V, reg p7:p(V +), reg r16:V, reg p8:p(V +), reg r18:V, reg __:cls, reg r20:V, reg l:*, reg attributes__:cls, reg r21:V, reg _identC:cls, reg Class3:*, reg Class4:V, reg p9:p(V +), reg clName:*, reg clName1:V, reg p10:p(V +), reg r24:V, reg r25:V, reg c1:L, reg stop1:cls, reg gettextf1:cls, reg dQuote2:cls, reg Class5:*, reg Class6:V, reg p11:p(V +), reg r27:V, reg p12:p(V +), reg dQuote3:cls, reg __1:cls, reg r29:V, reg p13:p(V +), reg r31:V, reg p14:p(V +), reg r33:V, reg p15:p(V +), reg r35:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r37:V, reg r38:V, reg where1:*, reg where2:V, reg as_environment:cls, reg r39:V, reg classMetaName:cls, reg Class7:*, reg Class8:V, reg p16:p(V +), reg r41:V, reg exists:cls, reg mname:*, reg mname1:V, reg p17:p(V +), reg where3:*, reg where4:V, reg p18:p(V +), reg r44:V, reg c2:L, reg c4:V, reg bindingIsLocked:cls, reg mname2:*, reg mname3:V, reg p19:p(V +), reg where5:*, reg where6:V, reg p20:p(V +), reg r47:V, reg c5:L, reg c6:V, reg c8:L, reg force1:*, reg force2:V, reg c9:L, reg _assignOverBinding:cls, reg mname4:*, reg mname5:V, reg p21:p(V +), reg def7:*, reg def8:V, reg p22:p(V +), reg where7:*, reg where8:V, reg p23:p(V +), reg r51:V, reg r52:V, reg stop2:cls, reg gettextf2:cls, reg dQuote4:cls, reg Class9:*, reg Class10:V, reg p24:p(V +), reg r54:V, reg p25:p(V +), reg sQuote:cls, reg getPackageName:cls, reg where9:*, reg where10:V, reg p26:p(V +), reg r57:V, reg p27:p(V +), reg r59:V, reg p28:p(V +), reg r61:V, reg p29:p(V +), reg r63:V, reg assign:cls, reg mname6:*, reg mname7:V, reg p30:p(V +), reg def9:*, reg def10:V, reg p31:p(V +), reg where11:*, reg where12:V, reg p32:p(V +), reg r68:V, reg cacheOnAssign:cls, reg where13:*, reg where14:V, reg p33:p(V +), reg r70:V, reg c10:L, reg _cacheClass:cls, reg clName2:*, reg clName3:V, reg p34:p(V +), reg def11:*, reg def12:V, reg p35:p(V +), reg doSubclasses1:*, reg doSubclasses2:V, reg p36:p(V +), reg where15:*, reg where16:V, reg p37:p(V +), reg r75:V |
    mkenv;
    st Class = Class;
    st def = def;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
    p = prom<V +>{
      _GlobalEnv = ld `.GlobalEnv`;
      _GlobalEnv1 = force? _GlobalEnv;
      checkMissing(_GlobalEnv1);
      return _GlobalEnv1;
    };
    goto L1(p);
  L1(where_orDefault):
    st where = where_orDefault;
    force_isMissing = missing.0(force);
    if force_isMissing then L2(FALSE) else L2(force);
  L2(force_orDefault):
    st force = force_orDefault;
    doSubclasses_isMissing = missing.0(doSubclasses);
    if doSubclasses_isMissing then L3() else L4(doSubclasses);
  L3():
    p2 = prom<V +>{
      is = ldf is;
      p1 = prom<V +>{
        def1 = ld def;
        def2 = force? def1;
        checkMissing(def2);
        return def2;
      };
      r2 = dyn is(p1, "ClassUnionRepresentation");
      return r2;
    };
    goto L4(p2);
  L4(doSubclasses_orDefault):
    st doSubclasses = doSubclasses_orDefault;
    is1 = ldf is;
    check L16() else D0();
  D0():
    deopt 1 [];
  L16():
    p3 = prom<V +>{
      def3 = ld def;
      def4 = force? def3;
      checkMissing(def4);
      return def4;
    };
    r5 = dyn is1(p3, "classRepresentation");
    check L17() else D1();
  D1():
    deopt 4 [r5];
  L17():
    r6 = `!`(r5);
    c = `as.logical`(r6);
    if c then L18() else L5();
  L5():
    goto L6();
  L6():
    __ = ldf `@` in base;
    r20 = dyn __(<sym def>, <sym className>);
    st clName = r20;
    l = ld clName;
    attributes__ = ldf `attributes<-`;
    check L22() else D4();
  L18():
    stop = ldf stop;
    check L19() else D2();
  D2():
    deopt 7 [];
  D4():
    deopt 20 [NULL, l, NULL];
  L19():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        dQuote = ldf dQuote;
        p4 = prom<V +>{
          sym = ldf class;
          base = ldf class in base;
          guard = `==`.4(sym, base);
          if guard then L1() else L2();
        L0(r8):
          return r8;
        L1():
          def5 = ld def;
          def6 = force? def5;
          checkMissing(def6);
          class = ldf class in base;
          r9 = dyn class(def6);
          goto L0(r9);
        L2():
          r7 = dyn base(<sym def>);
          goto L0(r7);
        };
        r11 = dyn dQuote(p4);
        return r11;
      };
      p7 = prom<V +>{
        dQuote1 = ldf dQuote;
        p6 = prom<V +>{
          Class1 = ld Class;
          Class2 = force? Class1;
          checkMissing(Class2);
          return Class2;
        };
        r14 = dyn dQuote1(p6);
        return r14;
      };
      r16 = dyn gettextf("trying to assign an object of class %s as the definition of class %s: must supply a \"classRepresentation\" object", p5, p7);
      return r16;
    };
    r18 = dyn stop[, domain](p8, NA_LGL);
    check L20() else D3();
  L22():
    r21 = dyn attributes__(l, NULL, NULL);
    check L23() else D5();
  D3():
    deopt 11 [r18];
  D5():
    deopt 22 [NULL, r21];
  L20():
    goto L6();
  L23():
    st clName = r21;
    _identC = ldf `.identC`;
    check L24() else D6();
  D6():
    deopt 25 [];
  L24():
    p9 = prom<V +>{
      Class3 = ld Class;
      Class4 = force? Class3;
      checkMissing(Class4);
      return Class4;
    };
    p10 = prom<V +>{
      clName = ld clName;
      clName1 = force? clName;
      checkMissing(clName1);
      return clName1;
    };
    r24 = dyn _identC(p9, p10);
    check L25() else D7();
  D7():
    deopt 28 [r24];
  L25():
    r25 = `!`(r24);
    c1 = `as.logical`(r25);
    if c1 then L26() else L7();
  L7():
    goto L8();
  L8():
    sym1 = ldf `as.environment`;
    base1 = ldf `as.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L26():
    stop1 = ldf stop;
    check L27() else D8();
  D8():
    deopt 31 [];
  L9(r38):
    st where = r38;
    classMetaName = ldf classMetaName;
    check L34() else D12();
  L27():
    p15 = prom<V +>{
      gettextf1 = ldf gettextf;
      p12 = prom<V +>{
        dQuote2 = ldf dQuote;
        p11 = prom<V +>{
          Class5 = ld Class;
          Class6 = force? Class5;
          checkMissing(Class6);
          return Class6;
        };
        r27 = dyn dQuote2(p11);
        return r27;
      };
      p14 = prom<V +>{
        dQuote3 = ldf dQuote;
        p13 = prom<V +>{
          __1 = ldf `@` in base;
          r29 = dyn __1(<sym def>, <sym className>);
          return r29;
        };
        r31 = dyn dQuote3(p13);
        return r31;
      };
      r33 = dyn gettextf1("assigning as %s a class representation with internal name %s", p12, p14);
      return r33;
    };
    r35 = dyn stop1[, domain](p15, NA_LGL);
    check L28() else D9();
  L30():
    where1 = ld where;
    check L32() else D10();
  L31():
    r37 = dyn base1(<sym where>);
    goto L9(r37);
  D9():
    deopt 35 [r35];
  D10():
    deopt 40 [where1];
  D12():
    deopt 46 [];
  L28():
    goto L8();
  L32():
    where2 = force? where1;
    checkMissing(where2);
    as_environment = ldf `as.environment` in base;
    r39 = dyn as_environment(where2);
    check L33() else D11();
  L34():
    p16 = prom<V +>{
      Class7 = ld Class;
      Class8 = force? Class7;
      checkMissing(Class8);
      return Class8;
    };
    r41 = dyn classMetaName(p16);
    check L35() else D13();
  D11():
    deopt 43 [r39];
  D13():
    deopt 48 [r41];
  L33():
    goto L9(r39);
  L35():
    st mname = r41;
    exists = ldf exists;
    check L36() else D14();
  D14():
    deopt 51 [];
  L36():
    p17 = prom<V +>{
      mname = ld mname;
      mname1 = force? mname;
      checkMissing(mname1);
      return mname1;
    };
    p18 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r44 = dyn exists[, envir, inherits](p17, p18, FALSE);
    check L37() else D15();
  D15():
    deopt 57 [r44];
  L37():
    c2 = `as.logical`(r44);
    if c2 then L38() else L10(c2);
  L10(c4):
    c8 = `as.logical`(c4);
    if c8 then L42() else L11();
  L38():
    bindingIsLocked = ldf bindingIsLocked;
    check L39() else D16();
  D16():
    deopt 59 [c2];
  L11():
    assign = ldf assign;
    check L51() else D23();
  L14():
    cacheOnAssign = ldf cacheOnAssign;
    check L53() else D25();
  L39():
    p19 = prom<V +>{
      mname2 = ld mname;
      mname3 = force? mname2;
      checkMissing(mname3);
      return mname3;
    };
    p20 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r47 = dyn bindingIsLocked(p19, p20);
    check L40() else D17();
  L42():
    force1 = ld force;
    check L43() else D18();
  D17():
    deopt 62 [c2, r47];
  D18():
    deopt 64 [force1];
  D23():
    deopt 78 [];
  D25():
    deopt 84 [];
  L40():
    c5 = `as.logical`(r47);
    c6 = `&&`(c2, c5);
    goto L10(c6);
  L43():
    force2 = force? force1;
    checkMissing(force2);
    c9 = `as.logical`(force2);
    if c9 then L44() else L12();
  L51():
    p30 = prom<V +>{
      mname6 = ld mname;
      mname7 = force? mname6;
      checkMissing(mname7);
      return mname7;
    };
    p31 = prom<V +>{
      def9 = ld def;
      def10 = force? def9;
      checkMissing(def10);
      return def10;
    };
    p32 = prom<V +>{
      where11 = ld where;
      where12 = force? where11;
      checkMissing(where12);
      return where12;
    };
    r68 = dyn assign(p30, p31, p32);
    check L52() else D24();
  L53():
    p33 = prom<V +>{
      where13 = ld where;
      where14 = force? where13;
      checkMissing(where14);
      return where14;
    };
    r70 = dyn cacheOnAssign(p33);
    check L54() else D26();
  D24():
    deopt 82 [r68];
  D26():
    deopt 86 [r70];
  L12():
    stop2 = ldf stop;
    check L48() else D21();
  L13(r52):
    goto L14();
  L44():
    _assignOverBinding = ldf `.assignOverBinding`;
    check L45() else D19();
  L52():
    goto L14();
  L54():
    c10 = `as.logical`(r70);
    if c10 then L55() else L15();
  D19():
    deopt 67 [];
  D21():
    deopt 74 [];
  L15():
    invisible.0();
    popenv;
    return NULL;
  L45():
    p21 = prom<V +>{
      mname4 = ld mname;
      mname5 = force? mname4;
      checkMissing(mname5);
      return mname5;
    };
    p22 = prom<V +>{
      def7 = ld def;
      def8 = force? def7;
      checkMissing(def8);
      return def8;
    };
    p23 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r51 = dyn _assignOverBinding(p21, p22, p23, FALSE);
    check L46() else D20();
  L48():
    p29 = prom<V +>{
      gettextf2 = ldf gettextf;
      p25 = prom<V +>{
        dQuote4 = ldf dQuote;
        p24 = prom<V +>{
          Class9 = ld Class;
          Class10 = force? Class9;
          checkMissing(Class10);
          return Class10;
        };
        r54 = dyn dQuote4(p24);
        return r54;
      };
      p28 = prom<V +>{
        sQuote = ldf sQuote;
        p27 = prom<V +>{
          getPackageName = ldf getPackageName;
          p26 = prom<V +>{
            where9 = ld where;
            where10 = force? where9;
            checkMissing(where10);
            return where10;
          };
          r57 = dyn getPackageName(p26);
          return r57;
        };
        r59 = dyn sQuote(p27);
        return r59;
      };
      r61 = dyn gettextf2("class %s has a locked definition in package %s", p25, p28);
      return r61;
    };
    r63 = dyn stop2(p29);
    check L49() else D22();
  L55():
    _cacheClass = ldf `.cacheClass`;
    check L56() else D27();
  D20():
    deopt 72 [r51];
  D22():
    deopt 76 [r63];
  D27():
    deopt 88 [];
  L46():
    goto L13(r51);
  L49():
    goto L13(r63);
  L56():
    p34 = prom<V +>{
      clName2 = ld clName;
      clName3 = force? clName2;
      checkMissing(clName3);
      return clName3;
    };
    p35 = prom<V +>{
      def11 = ld def;
      def12 = force? def11;
      checkMissing(def12);
      return def12;
    };
    p36 = prom<V +>{
      doSubclasses1 = ld doSubclasses;
      doSubclasses2 = force? doSubclasses1;
      checkMissing(doSubclasses2);
      return doSubclasses2;
    };
    p37 = prom<V +>{
      where15 = ld where;
      where16 = force? where15;
      checkMissing(where16);
      return where16;
    };
    r75 = dyn _cacheClass(p34, p35, p36, p37);
    check L57() else D28();
  D28():
    deopt 93 [r75];
  L57():
    popenv;
    return r75;
  }
}