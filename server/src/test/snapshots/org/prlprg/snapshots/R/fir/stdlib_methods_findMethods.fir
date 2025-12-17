fun main() {
  () -+> V { reg r:cls, reg findMethods:cls, reg r1:V, reg findMethodSignatures:cls, reg mm:*, reg mm1:V, reg p:p(V +), reg r3:V |
    mkenv;
    r = clos inner3484718853;
    st findMethods = r;
    findMethods = ldf findMethods;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn findMethods("Ops");
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    st mm = r1;
    findMethodSignatures = ldf findMethodSignatures;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p = prom<V +>{
      mm = ld mm;
      mm1 = force? mm;
      checkMissing(mm1);
      return mm1;
    };
    r3 = dyn findMethodSignatures[methods](p);
    check L3() else D3();
  D3():
    deopt 12 [r3];
  L3():
    popenv;
    return r3;
  }
}
fun inner3484718853(f, where, classes, inherited, package) {
  (reg f:*, reg where:*, reg classes:*, reg inherited:*, reg package:*) -+> V { var f:*, var where:*, var classes:*, reg classes_isMissing:L, reg classes_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var inherited:*, reg inherited_isMissing:L, reg inherited_orDefault:*, var package:*, reg package_isMissing:L, reg package_orDefault:*, reg is:cls, reg f1:*, reg f2:V, reg p1:p(V +), reg r3:V, reg c:L, reg f3:*, reg f4:V, reg __:cls, reg r4:V, reg _isSingleString:cls, reg f5:*, reg f6:V, reg p2:p(V +), reg r7:V, reg c1:L, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg missing:cls, reg r10:V, reg c2:L, reg getGeneric:cls, reg f7:*, reg f8:V, reg p3:p(V +), reg package1:*, reg package2:V, reg p4:p(V +), reg r13:V, reg r14:V, reg getGeneric1:cls, reg f9:*, reg f10:V, reg p5:p(V +), reg where1:*, reg where2:V, reg p6:p(V +), reg package3:*, reg package4:V, reg p7:p(V +), reg r18:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg fdef:*, reg fdef1:V, reg c3:V, reg c4:L, reg getGeneric2:cls, reg f11:*, reg f12:V, reg p8:p(V +), reg package5:*, reg package6:V, reg p9:p(V +), reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:V, reg f13:*, reg f14:V, reg is_function:cls, reg r26:V, reg r27:V, reg c5:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg r28:V, reg p10:p(V +), reg dQuote:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r30:V, reg r31:V, reg f15:*, reg f16:V, reg class:cls, reg r32:V, reg p11:p(V +), reg r34:V, reg p12:p(V +), reg r36:V, reg p13:p(V +), reg r38:V, reg f17:*, reg f18:V, reg deparse1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg r40:V, reg substitute:cls, reg r41:V, reg p14:p(V +), reg r43:V, reg is1:cls, reg fdef2:*, reg fdef3:V, reg p15:p(V +), reg r45:V, reg r46:V, reg c6:L, reg warning:cls, reg gettextf1:cls, reg f19:*, reg f20:V, reg p16:p(V +), reg r48:V, reg p17:p(V +), reg r50:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r51:V, reg r52:V, reg list:cls, reg r53:V, reg new:cls, reg __1:cls, reg r56:V, reg p18:p(V +), reg fdef4:*, reg fdef5:V, reg p19:p(V +), reg r59:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r60:V, reg r61:V, reg missing1:cls, reg r62:V, reg c7:L, reg get:cls, reg inherited1:*, reg inherited2:V, reg c8:L, reg p20:p(V +), reg environment:cls, reg fdef6:*, reg fdef7:V, reg p21:p(V +), reg r65:V, reg p22:p(V +), reg r67:V, reg isFALSE:cls, reg inherited3:*, reg inherited4:V, reg p23:p(V +), reg r70:V, reg r71:V, reg c9:L, reg stop1:cls, reg gettextf2:cls, reg inherited5:*, reg inherited6:V, reg p24:p(V +), reg r73:V, reg p25:p(V +), reg r75:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r77:V, reg r78:V, reg where3:*, reg where4:V, reg as_environment:cls, reg r79:V, reg _TableMetaName:cls, reg f21:*, reg f22:V, reg p26:p(V +), reg __2:cls, reg r81:V, reg p27:p(V +), reg r83:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r84:V, reg r85:V, reg where5:*, reg where6:V, reg c10:L, reg where8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg what:*, reg what1:V, reg __3:cls, reg r86:V, reg c11:V, reg c12:L, reg object:*, reg object1:V, reg sort:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r88:V, reg r89:V, reg table:*, reg table1:V, reg names:cls, reg r90:V, reg p28:p(V +), reg r92:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r93:V, reg r94:V, reg classes1:*, reg classes2:V, reg length:cls, reg r95:V, reg c13:L, reg paste0:cls, reg classes3:*, reg classes4:V, reg p29:p(V +), reg r97:V, reg grep:cls, reg classesPattern:*, reg classesPattern1:V, reg p30:p(V +), reg paste1:cls, reg objNames:*, reg objNames1:V, reg p31:p(V +), reg r100:V, reg p32:p(V +), reg r102:V, reg objNames2:*, reg objNames3:V, reg c14:L, reg objNames5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg which:*, reg which1:V, reg __4:cls, reg r103:V, reg mget:cls, reg objNames6:*, reg objNames7:V, reg p33:p(V +), reg table2:*, reg table3:V, reg p34:p(V +), reg r106:V, reg l:*, reg ___:cls, reg r107:V, reg objNames8:*, reg objNames9:V, reg l1:*, reg ___1:cls, reg r108:V, reg strsplit:cls, reg objNames10:*, reg objNames11:V, reg p35:p(V +), reg r110:V, reg l2:*, reg ___2:cls, reg r111:V, reg object2:*, reg object3:V |
    mkenv;
    st f = f;
    st where = where;
    classes_isMissing = missing.0(classes);
    if classes_isMissing then L0() else L1(classes);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(classes_orDefault):
    st classes = classes_orDefault;
    inherited_isMissing = missing.0(inherited);
    if inherited_isMissing then L2(FALSE) else L2(inherited);
  L2(inherited_orDefault):
    st inherited = inherited_orDefault;
    package_isMissing = missing.0(package);
    if package_isMissing then L3("") else L3(package);
  L3(package_orDefault):
    st package = package_orDefault;
    is = ldf is;
    check L30() else D0();
  D0():
    deopt 1 [];
  L30():
    p1 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r3 = dyn is(p1, "genericFunction");
    check L31() else D1();
  D1():
    deopt 4 [r3];
  L31():
    c = `as.logical`(r3);
    if c then L32() else L4();
  L4():
    _isSingleString = ldf `.isSingleString`;
    check L35() else D3();
  L5():
    is1 = ldf is;
    check L65() else D19();
  L32():
    f3 = ld f;
    check L33() else D2();
  D2():
    deopt 5 [f3];
  D3():
    deopt 12 [];
  D19():
    deopt 69 [];
  L33():
    f4 = force? f3;
    checkMissing(f4);
    st fdef = f4;
    __ = ldf `@` in base;
    r4 = dyn __(<sym fdef>, <sym generic>);
    st f = r4;
    goto L5();
  L35():
    p2 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    r7 = dyn _isSingleString(p2);
    check L36() else D4();
  L65():
    p15 = prom<V +>{
      fdef2 = ld fdef;
      fdef3 = force? fdef2;
      checkMissing(fdef3);
      return fdef3;
    };
    r45 = dyn is1(p15, "genericFunction");
    check L66() else D20();
  D4():
    deopt 14 [r7];
  D20():
    deopt 72 [r45];
  L36():
    c1 = `as.logical`(r7);
    if c1 then L37() else L6();
  L66():
    r46 = `!`(r45);
    c6 = `as.logical`(r46);
    if c6 then L67() else L14();
  L6():
    sym2 = ldf `is.function`;
    base2 = ldf `is.function` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L54() else L55();
  L14():
    new = ldf new;
    check L75() else D24();
  L37():
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L38() else L39();
  L67():
    warning = ldf warning;
    check L68() else D21();
  D21():
    deopt 75 [];
  D24():
    deopt 88 [];
  L7(r9):
    c2 = `as.logical`(r9);
    if c2 then L40() else L8();
  L12(r25):
    r27 = `!`(r25);
    c5 = `as.logical`(r27);
    if c5 then L58() else L13();
  L38():
    missing = ldf missing in base;
    r10 = dyn missing(<sym where>);
    goto L7(r10);
  L39():
    r8 = dyn base(<sym where>);
    goto L7(r8);
  L54():
    f13 = ld f;
    check L56() else D12();
  L55():
    r24 = dyn base2(<sym f>);
    goto L12(r24);
  L68():
    p17 = prom<V +>{
      gettextf1 = ldf gettextf;
      p16 = prom<V +>{
        f19 = ld f;
        f20 = force? f19;
        checkMissing(f20);
        return f20;
      };
      r48 = dyn gettextf1("non-generic function '%s' given to findMethods()", p16);
      return r48;
    };
    r50 = dyn warning[, domain](p17, NA_LGL);
    check L69() else D22();
  L75():
    p18 = prom<V +>{
      __1 = ldf `@` in base;
      r56 = dyn __1(<sym fdef>, <sym signature>);
      return r56;
    };
    p19 = prom<V +>{
      fdef4 = ld fdef;
      fdef5 = force? fdef4;
      checkMissing(fdef5);
      return fdef5;
    };
    r59 = dyn new[, arguments, generic]("listOfMethods", p18, p19);
    check L76() else D25();
  D12():
    deopt 49 [f13];
  D22():
    deopt 79 [r50];
  D25():
    deopt 94 [r59];
  L8():
    getGeneric1 = ldf getGeneric;
    check L44() else D7();
  L9(r14):
    goto L5();
  L13():
    f17 = ld f;
    check L62() else D16();
  L40():
    getGeneric = ldf getGeneric;
    check L41() else D5();
  L56():
    f14 = force? f13;
    checkMissing(f14);
    is_function = ldf `is.function` in base;
    r26 = dyn is_function(f14);
    check L57() else D13();
  L58():
    stop = ldf stop;
    check L59() else D14();
  L69():
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L70() else L71();
  L76():
    st object = r59;
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L77() else L78();
  D5():
    deopt 19 [];
  D7():
    deopt 26 [];
  D13():
    deopt 52 [r26];
  D14():
    deopt 55 [];
  D16():
    deopt 60 [f17];
  L15(r52):
    popenv;
    return r52;
  L17(r61):
    c7 = `as.logical`(r61);
    if c7 then L79() else L18();
  L41():
    p3 = prom<V +>{
      f7 = ld f;
      f8 = force? f7;
      checkMissing(f8);
      return f8;
    };
    p4 = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    r13 = dyn getGeneric[, package](p3, p4);
    check L42() else D6();
  L44():
    p5 = prom<V +>{
      f9 = ld f;
      f10 = force? f9;
      checkMissing(f10);
      return f10;
    };
    p6 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    p7 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    r18 = dyn getGeneric1[, where, package](p5, p6, p7);
    check L45() else D8();
  L57():
    goto L12(r26);
  L59():
    p13 = prom<V +>{
      gettextf = ldf gettextf;
      p10 = prom<V +>{
        sQuote = ldf sQuote;
        r28 = dyn sQuote("f");
        return r28;
      };
      p12 = prom<V +>{
        dQuote = ldf dQuote;
        p11 = prom<V +>{
          sym3 = ldf class;
          base3 = ldf class in base;
          guard3 = `==`.4(sym3, base3);
          if guard3 then L1() else L2();
        L0(r31):
          return r31;
        L1():
          f15 = ld f;
          f16 = force? f15;
          checkMissing(f16);
          class = ldf class in base;
          r32 = dyn class(f16);
          goto L0(r32);
        L2():
          r30 = dyn base3(<sym f>);
          goto L0(r30);
        };
        r34 = dyn dQuote(p11);
        return r34;
      };
      r36 = dyn gettextf("argument %s must be a generic function or a single character string; got an object of class %s", p10, p12);
      return r36;
    };
    r38 = dyn stop[, domain](p13, NA_LGL);
    check L60() else D15();
  L62():
    f18 = force? f17;
    checkMissing(f18);
    st fdef = f18;
    deparse1 = ldf deparse1;
    check L63() else D17();
  L70():
    list = ldf list in base;
    r53 = dyn list();
    check L72() else D23();
  L71():
    r51 = dyn base5();
    goto L15(r51);
  L77():
    missing1 = ldf missing in base;
    r62 = dyn missing1(<sym where>);
    goto L17(r62);
  L78():
    r60 = dyn base6(<sym where>);
    goto L17(r60);
  D6():
    deopt 23 [r13];
  D8():
    deopt 32 [r18];
  D15():
    deopt 59 [r38];
  D17():
    deopt 64 [];
  D23():
    deopt 83 [r53];
  L18():
    isFALSE = ldf isFALSE;
    check L83() else D28();
  L19():
    sort = ldf sort;
    check L106() else D39();
  L42():
    st fdef = r13;
    goto L9(r13);
  L45():
    st fdef = r18;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L46() else L47();
  L60():
    goto L5();
  L63():
    p14 = prom<V +>{
      sym4 = ldf substitute;
      base4 = ldf substitute in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      substitute = ldf substitute in base;
      r41 = dyn substitute(<sym f>);
      goto L0(r41);
    L2():
      r39 = dyn base4(<sym f>);
      goto L0(r39);
    };
    r43 = dyn deparse1(p14);
    check L64() else D18();
  L72():
    goto L15(r53);
  L79():
    get = ldf get;
    check L80() else D26();
  D18():
    deopt 66 [r43];
  D26():
    deopt 100 [];
  D28():
    deopt 107 [];
  D39():
    deopt 146 [];
  L10(r20):
    c4 = `as.logical`(r20);
    if c4 then L49() else L11();
  L46():
    fdef = ld fdef;
    check L48() else D9();
  L47():
    r19 = dyn base1(<sym fdef>);
    goto L10(r19);
  L64():
    st f = r43;
    goto L5();
  L80():
    p20 = prom<V +>{
      inherited1 = ld inherited;
      inherited2 = force? inherited1;
      checkMissing(inherited2);
      c8 = `as.logical`(inherited2);
      if c8 then L1() else L0();
    L0():
      return ".MTable";
    L1():
      return ".AllMTable";
    };
    p22 = prom<V +>{
      environment = ldf environment;
      p21 = prom<V +>{
        fdef6 = ld fdef;
        fdef7 = force? fdef6;
        checkMissing(fdef7);
        return fdef7;
      };
      r65 = dyn environment(p21);
      return r65;
    };
    r67 = dyn get[, envir](p20, p22);
    check L81() else D27();
  L83():
    p23 = prom<V +>{
      inherited3 = ld inherited;
      inherited4 = force? inherited3;
      checkMissing(inherited4);
      return inherited4;
    };
    r70 = dyn isFALSE(p23);
    check L84() else D29();
  L106():
    p28 = prom<V +>{
      sym9 = ldf names;
      base9 = ldf names in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r89):
      return r89;
    L1():
      table = ld table;
      table1 = force? table;
      checkMissing(table1);
      names = ldf names in base;
      r90 = dyn names(table1);
      goto L0(r90);
    L2():
      r88 = dyn base9(<sym table>);
      goto L0(r88);
    };
    r92 = dyn sort(p28);
    check L107() else D40();
  D9():
    deopt 35 [fdef];
  D27():
    deopt 104 [r67];
  D29():
    deopt 109 [r70];
  D40():
    deopt 148 [r92];
  L11():
    goto L9(NULL);
  L48():
    fdef1 = force? fdef;
    checkMissing(fdef1);
    c3 = `==`(fdef1, NULL);
    goto L10(c3);
  L49():
    getGeneric2 = ldf getGeneric;
    check L50() else D10();
  L81():
    st table = r67;
    goto L19();
  L84():
    r71 = `!`(r70);
    c9 = `as.logical`(r71);
    if c9 then L85() else L20();
  L107():
    st objNames = r92;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L108() else L109();
  D10():
    deopt 39 [];
  L20():
    goto L21();
  L21():
    sym7 = ldf `as.environment`;
    base7 = ldf `as.environment` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L89() else L90();
  L26(r94):
    c13 = `as.logical`(r94);
    if c13 then L112() else L27();
  L50():
    p8 = prom<V +>{
      f11 = ld f;
      f12 = force? f11;
      checkMissing(f12);
      return f12;
    };
    p9 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    r23 = dyn getGeneric2[, package](p8, p9);
    check L51() else D11();
  L85():
    stop1 = ldf stop;
    check L86() else D30();
  L108():
    classes1 = ld classes;
    check L110() else D41();
  L109():
    r93 = dyn base10(<sym classes>);
    goto L26(r93);
  D11():
    deopt 43 [r23];
  D30():
    deopt 112 [];
  D41():
    deopt 152 [classes1];
  L22(r78):
    st where = r78;
    _TableMetaName = ldf `.TableMetaName`;
    check L93() else D34();
  L27():
    goto L29();
  L29():
    mget = ldf mget;
    check L123() else D49();
  L51():
    st fdef = r23;
    goto L9(r23);
  L86():
    p25 = prom<V +>{
      gettextf2 = ldf gettextf;
      p24 = prom<V +>{
        inherited5 = ld inherited;
        inherited6 = force? inherited5;
        checkMissing(inherited6);
        return inherited6;
      };
      r73 = dyn gettextf2("only FALSE is meaningful for 'inherited', when 'where' is supplied (got %s)", p24);
      return r73;
    };
    r75 = dyn stop1[, domain](p25, NA_LGL);
    check L87() else D31();
  L89():
    where3 = ld where;
    check L91() else D32();
  L90():
    r77 = dyn base7(<sym where>);
    goto L22(r77);
  L110():
    classes2 = force? classes1;
    checkMissing(classes2);
    length = ldf length in base;
    r95 = dyn length(classes2);
    check L111() else D42();
  L112():
    paste0 = ldf paste0;
    check L113() else D43();
  D31():
    deopt 116 [r75];
  D32():
    deopt 121 [where3];
  D34():
    deopt 127 [];
  D42():
    deopt 155 [r95];
  D43():
    deopt 157 [];
  D49():
    deopt 180 [];
  L87():
    goto L21();
  L91():
    where4 = force? where3;
    checkMissing(where4);
    as_environment = ldf `as.environment` in base;
    r79 = dyn as_environment(where4);
    check L92() else D33();
  L93():
    p26 = prom<V +>{
      f21 = ld f;
      f22 = force? f21;
      checkMissing(f22);
      return f22;
    };
    p27 = prom<V +>{
      __2 = ldf `@` in base;
      r81 = dyn __2(<sym fdef>, <sym package>);
      return r81;
    };
    r83 = dyn _TableMetaName(p26, p27);
    check L94() else D35();
  L111():
    goto L26(r95);
  L113():
    p29 = prom<V +>{
      classes3 = ld classes;
      classes4 = force? classes3;
      checkMissing(classes4);
      return classes4;
    };
    r97 = dyn paste0[, , , collapse]("#", p29, "#", "|");
    check L114() else D44();
  L123():
    p33 = prom<V +>{
      objNames6 = ld objNames;
      objNames7 = force? objNames6;
      checkMissing(objNames7);
      return objNames7;
    };
    p34 = prom<V +>{
      table2 = ld table;
      table3 = force? table2;
      checkMissing(table3);
      return table3;
    };
    r106 = dyn mget(p33, p34);
    check L124() else D50();
  D33():
    deopt 124 [r79];
  D35():
    deopt 130 [r83];
  D44():
    deopt 163 [r97];
  D50():
    deopt 183 [r106];
  L92():
    goto L22(r79);
  L94():
    st what = r83;
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L95() else L96();
  L114():
    st classesPattern = r97;
    grep = ldf grep;
    check L115() else D45();
  L124():
    l = ld object;
    ___ = ldf `@<-`;
    check L125() else D51();
  D45():
    deopt 166 [];
  D51():
    deopt 185 [r106, l, r106];
  L23(r85):
    c12 = `as.logical`(r85);
    if c12 then L102() else L25();
  L95():
    where5 = ld where;
    check L97() else D36();
  L96():
    r84 = dyn base8(<lang `<-`(table, `[[`(where, what))>);
    goto L23(r84);
  L115():
    p30 = prom<V +>{
      classesPattern = ld classesPattern;
      classesPattern1 = force? classesPattern;
      checkMissing(classesPattern1);
      return classesPattern1;
    };
    p32 = prom<V +>{
      paste1 = ldf paste0;
      p31 = prom<V +>{
        objNames = ld objNames;
        objNames1 = force? objNames;
        checkMissing(objNames1);
        return objNames1;
      };
      r100 = dyn paste1("#", p31, "#");
      return r100;
    };
    r102 = dyn grep(p30, p32);
    check L116() else D46();
  L125():
    r107 = dyn ___(l, NULL, ".Data", r106);
    check L126() else D52();
  D36():
    deopt 133 [where5];
  D46():
    deopt 169 [r102];
  D52():
    deopt 188 [r106, r107];
  L25():
    goto L19();
  L97():
    where6 = force? where5;
    checkMissing(where6);
    c10 = `is.object`(where6);
    if c10 then L98() else L99(where6);
  L102():
    object = ld object;
    check L103() else D38();
  L116():
    st which = r102;
    objNames2 = ld objNames;
    check L117() else D47();
  L126():
    st object = r107;
    objNames8 = ld objNames;
    check L127() else D53();
  D38():
    deopt 140 [object];
  D47():
    deopt 171 [objNames2];
  D53():
    deopt 190 [objNames8];
  L24(dx1):
    st table = dx1;
    c11 = `==`(dx1, NULL);
    goto L23(c11);
  L98():
    dr = tryDispatchBuiltin.1("[[", where6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L100() else L99(dr);
  L99(where8):
    what = ld what;
    check L101() else D37();
  L103():
    object1 = force? object;
    checkMissing(object1);
    popenv;
    return object1;
  L117():
    objNames3 = force? objNames2;
    checkMissing(objNames3);
    c14 = `is.object`(objNames3);
    if c14 then L118() else L119(objNames3);
  L127():
    objNames9 = force? objNames8;
    checkMissing(objNames9);
    l1 = ld object;
    ___1 = ldf `@<-`;
    check L128() else D54();
  D37():
    deopt 135 [where8, what];
  D54():
    deopt 193 [objNames9, l1, objNames9];
  L28(dx3):
    st objNames = dx3;
    goto L29();
  L100():
    dx = getTryDispatchBuiltinValue(dr);
    goto L24(dx);
  L101():
    what1 = force? what;
    __3 = ldf `[[` in base;
    r86 = dyn __3(where8, what1);
    goto L24(r86);
  L118():
    dr2 = tryDispatchBuiltin.1("[", objNames3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L120() else L119(dr2);
  L119(objNames5):
    which = ld which;
    check L121() else D48();
  L128():
    r108 = dyn ___1(l1, NULL, "names", objNames9);
    check L129() else D55();
  D48():
    deopt 173 [objNames5, which];
  D55():
    deopt 196 [objNames9, r108];
  L120():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L28(dx2);
  L121():
    which1 = force? which;
    __4 = ldf `[` in base;
    r103 = dyn __4(objNames5, which1);
    goto L28(r103);
  L129():
    st object = r108;
    strsplit = ldf strsplit;
    check L130() else D56();
  D56():
    deopt 199 [];
  L130():
    p35 = prom<V +>{
      objNames10 = ld objNames;
      objNames11 = force? objNames10;
      checkMissing(objNames11);
      return objNames11;
    };
    r110 = dyn strsplit[, , fixed](p35, "#", TRUE);
    check L131() else D57();
  D57():
    deopt 204 [r110];
  L131():
    l2 = ld object;
    ___2 = ldf `@<-`;
    check L132() else D58();
  D58():
    deopt 206 [r110, l2, r110];
  L132():
    r111 = dyn ___2(l2, NULL, "signatures", r110);
    check L133() else D59();
  D59():
    deopt 209 [r110, r111];
  L133():
    st object = r111;
    object2 = ld object;
    check L134() else D60();
  D60():
    deopt 211 [object2];
  L134():
    object3 = force? object2;
    checkMissing(object3);
    popenv;
    return object3;
  }
}