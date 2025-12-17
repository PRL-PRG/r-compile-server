fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1470732655;
    st removeMethods = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1470732655(f, where, all) {
  (reg f:*, reg where:*, reg all:*) -+> V { var f:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), var all:*, reg all_isMissing:L, reg all_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg missing:cls, reg r6:V, reg p2:p(V +), reg getGeneric:cls, reg f1:*, reg f2:V, reg p3:p(V +), reg where1:*, reg where2:V, reg p4:p(V +), reg r10:V, reg is:cls, reg fdef:*, reg fdef1:V, reg p5:p(V +), reg r12:V, reg r13:V, reg c:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg f3:*, reg f4:V, reg p6:p(V +), reg r15:V, reg p7:p(V +), reg sQuote1:cls, reg getPackageName:cls, reg where3:*, reg where4:V, reg p8:p(V +), reg r18:V, reg p9:p(V +), reg r20:V, reg p10:p(V +), reg r22:V, reg p11:p(V +), reg r24:V, reg getMethodsForDispatch:cls, reg fdef2:*, reg fdef3:V, reg p12:p(V +), reg r28:V, reg getMethod:cls, reg fdef4:*, reg fdef5:V, reg p13:p(V +), reg r30:V, reg _TableMetaName:cls, reg __:cls, reg r31:V, reg p14:p(V +), reg __1:cls, reg r33:V, reg p15:p(V +), reg r35:V, reg methodsPackageMetaName:cls, reg __2:cls, reg r36:V, reg p16:p(V +), reg __3:cls, reg r38:V, reg p17:p(V +), reg r40:V, reg _findAll:cls, reg fMetaName:*, reg fMetaName1:V, reg p18:p(V +), reg where5:*, reg where6:V, reg p19:p(V +), reg r43:V, reg all1:*, reg all2:V, reg r44:V, reg c1:L, reg allWhere:*, reg allWhere1:V, reg c2:L, reg allWhere3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __4:cls, reg r45:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r46:V, reg r47:V, reg rep:cls, reg r48:V, reg cacheGenericsMetaData:cls, reg f5:*, reg f6:V, reg p20:p(V +), reg fdef6:*, reg fdef7:V, reg p21:p(V +), reg where7:*, reg where8:V, reg p22:p(V +), reg r52:V, reg _uncacheGeneric:cls, reg f7:*, reg f8:V, reg p23:p(V +), reg fdef8:*, reg fdef9:V, reg p24:p(V +), reg r55:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r56:V, reg r57:V, reg allWhere4:*, reg allWhere5:V, reg r58:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r59:V, reg i7:I, reg r60:V, reg allWhere6:*, reg allWhere7:V, reg c4:L, reg i9:I, reg allWhere9:V, reg dr2:V, reg dc1:L, reg dx3:V, reg i11:I, reg dx4:V, reg i12:*, reg i13:V, reg __5:cls, reg r61:V, reg as_environment:cls, reg r62:V, reg environmentIsLocked:cls, reg db:*, reg db1:V, reg p25:p(V +), reg r64:V, reg c5:L, reg warning1:cls, reg gettextf1:cls, reg sQuote2:cls, reg f9:*, reg f10:V, reg p26:p(V +), reg r66:V, reg p27:p(V +), reg sQuote3:cls, reg getPackageName1:cls, reg db2:*, reg db3:V, reg p28:p(V +), reg r69:V, reg p29:p(V +), reg r71:V, reg p30:p(V +), reg r73:V, reg p31:p(V +), reg r75:V, reg l1:*, reg c6:L, reg i17:I, reg r77:L, reg l3:*, reg dr4:V, reg dc2:L, reg dx5:V, reg i19:I, reg dx6:V, reg i20:*, reg i21:V, reg ____:cls, reg r80:V, reg exists:cls, reg fMetaName2:*, reg fMetaName3:V, reg p32:p(V +), reg db4:*, reg db5:V, reg p33:p(V +), reg r84:V, reg c7:L, reg get:cls, reg fMetaName4:*, reg fMetaName5:V, reg p34:p(V +), reg db6:*, reg db7:V, reg p35:p(V +), reg r87:V, reg _mergeMethodsTable:cls, reg fdef10:*, reg fdef11:V, reg p36:p(V +), reg methods:*, reg methods1:V, reg p37:p(V +), reg theseMethods:*, reg theseMethods1:V, reg p38:p(V +), reg r91:V, reg rm:cls, reg fMetaName6:*, reg fMetaName7:V, reg p39:p(V +), reg db8:*, reg db9:V, reg p40:p(V +), reg r94:V, reg exists1:cls, reg oldMetaName:*, reg oldMetaName1:V, reg p41:p(V +), reg db10:*, reg db11:V, reg p42:p(V +), reg r97:V, reg c8:L, reg rm1:cls, reg oldMetaName2:*, reg oldMetaName3:V, reg p43:p(V +), reg db12:*, reg db13:V, reg p44:p(V +), reg r100:V, reg i28:I, reg r101:V, reg i29:I, reg all3:*, reg all4:V, reg c9:L, reg c11:V, reg __6:cls, reg r103:V, reg r104:cls, reg value:*, reg value1:V, reg p45:p(V +), reg r106:V, reg c12:L, reg c13:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r107:V, reg r108:V, reg allWhere10:*, reg allWhere11:V, reg r109:I, reg s1:V, reg l4:I, reg i30:I, reg i31:I, reg i32:I, reg c15:L, reg x1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r110:V, reg i37:I, reg r111:V, reg allWhere12:*, reg allWhere13:V, reg c16:L, reg i39:I, reg allWhere15:V, reg dr6:V, reg dc3:L, reg dx7:V, reg i41:I, reg dx8:V, reg i42:*, reg i43:V, reg __7:cls, reg r112:V, reg as_environment1:cls, reg r113:V, reg doGeneric:*, reg doGeneric1:V, reg c17:L, reg i45:I, reg c19:V, reg isGeneric:cls, reg f11:*, reg f12:V, reg p46:p(V +), reg db14:*, reg db15:V, reg p47:p(V +), reg r116:V, reg c20:L, reg c21:V, reg c23:L, reg all5:*, reg all6:V, reg c24:L, reg i50:I, reg c26:V, reg is1:cls, reg default:*, reg default1:V, reg p48:p(V +), reg r118:V, reg c27:L, reg c28:V, reg c30:L, reg as:cls, reg default2:*, reg default3:V, reg p49:p(V +), reg r120:V, reg rm2:cls, reg f13:*, reg f14:V, reg p50:p(V +), reg db16:*, reg db17:V, reg p51:p(V +), reg r123:V, reg existsFunction:cls, reg f15:*, reg f16:V, reg p52:p(V +), reg db18:*, reg db19:V, reg p53:p(V +), reg r126:V, reg r127:V, reg c31:L, reg message:cls, reg gettextf2:cls, reg sQuote4:cls, reg f17:*, reg f18:V, reg p54:p(V +), reg r129:V, reg p55:p(V +), reg r131:V, reg p56:p(V +), reg r133:V, reg assign:cls, reg f19:*, reg f20:V, reg p57:p(V +), reg default4:*, reg default5:V, reg p58:p(V +), reg db20:*, reg db21:V, reg p59:p(V +), reg r137:V, reg i56:I, reg r138:V, reg i57:I, reg resetGeneric:cls, reg f21:*, reg f22:V, reg p60:p(V +), reg fdef12:*, reg fdef13:V, reg p61:p(V +), reg db22:*, reg db23:V, reg p62:p(V +), reg default6:*, reg default7:V, reg p63:p(V +), reg r144:V, reg i58:I, reg sym6:cls, reg base6:cls, reg guard6:L, reg r146:V, reg r147:V, reg value2:*, reg value3:V, reg any:cls, reg r148:V |
    mkenv;
    st f = f;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L1(p1);
  L1(where_orDefault):
    st where = where_orDefault;
    all_isMissing = missing.0(all);
    if all_isMissing then L2() else L3(all);
  L2():
    p2 = prom<V +>{
      sym = ldf missing;
      base = ldf missing in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      missing = ldf missing in base;
      r6 = dyn missing(<sym where>);
      goto L0(r6);
    L2():
      r4 = dyn base(<sym where>);
      goto L0(r4);
    };
    goto L3(p2);
  L3(all_orDefault):
    st all = all_orDefault;
    getGeneric = ldf getGeneric;
    check L37() else D0();
  D0():
    deopt 1 [];
  L37():
    p3 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p4 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r10 = dyn getGeneric[, where](p3, p4);
    check L38() else D1();
  D1():
    deopt 5 [r10];
  L38():
    st fdef = r10;
    is = ldf is;
    check L39() else D2();
  D2():
    deopt 8 [];
  L39():
    p5 = prom<V +>{
      fdef = ld fdef;
      fdef1 = force? fdef;
      checkMissing(fdef1);
      return fdef1;
    };
    r12 = dyn is(p5, "genericFunction");
    check L40() else D3();
  D3():
    deopt 11 [r12];
  L40():
    r13 = `!`(r12);
    c = `as.logical`(r13);
    if c then L41() else L4();
  L4():
    getMethodsForDispatch = ldf getMethodsForDispatch;
    check L46() else D6();
  L41():
    warning = ldf warning;
    check L42() else D4();
  D4():
    deopt 14 [];
  D6():
    deopt 25 [];
  L42():
    p11 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        sQuote = ldf sQuote;
        p6 = prom<V +>{
          f3 = ld f;
          f4 = force? f3;
          checkMissing(f4);
          return f4;
        };
        r15 = dyn sQuote(p6);
        return r15;
      };
      p10 = prom<V +>{
        sQuote1 = ldf sQuote;
        p9 = prom<V +>{
          getPackageName = ldf getPackageName;
          p8 = prom<V +>{
            where3 = ld where;
            where4 = force? where3;
            checkMissing(where4);
            return where4;
          };
          r18 = dyn getPackageName(p8);
          return r18;
        };
        r20 = dyn sQuote1(p9);
        return r20;
      };
      r22 = dyn gettextf("%s is not an S4 generic function in %s; methods not removed", p7, p10);
      return r22;
    };
    r24 = dyn warning[, domain](p11, NA_LGL);
    check L43() else D5();
  L46():
    p12 = prom<V +>{
      fdef2 = ld fdef;
      fdef3 = force? fdef2;
      checkMissing(fdef3);
      return fdef3;
    };
    r28 = dyn getMethodsForDispatch(p12);
    check L47() else D7();
  D5():
    deopt 18 [r24];
  D7():
    deopt 27 [r28];
  L43():
    popenv;
    return FALSE;
  L47():
    st methods = r28;
    getMethod = ldf getMethod;
    check L48() else D8();
  D8():
    deopt 30 [];
  L48():
    p13 = prom<V +>{
      fdef4 = ld fdef;
      fdef5 = force? fdef4;
      checkMissing(fdef5);
      return fdef5;
    };
    r30 = dyn getMethod[, , optional](p13, "ANY", TRUE);
    check L49() else D9();
  D9():
    deopt 35 [r30];
  L49():
    st default = r30;
    _TableMetaName = ldf `.TableMetaName`;
    check L50() else D10();
  D10():
    deopt 38 [];
  L50():
    p14 = prom<V +>{
      __ = ldf `@` in base;
      r31 = dyn __(<sym fdef>, <sym generic>);
      return r31;
    };
    p15 = prom<V +>{
      __1 = ldf `@` in base;
      r33 = dyn __1(<sym fdef>, <sym package>);
      return r33;
    };
    r35 = dyn _TableMetaName(p14, p15);
    check L51() else D11();
  D11():
    deopt 41 [r35];
  L51():
    st fMetaName = r35;
    methodsPackageMetaName = ldf methodsPackageMetaName;
    check L52() else D12();
  D12():
    deopt 44 [];
  L52():
    p16 = prom<V +>{
      __2 = ldf `@` in base;
      r36 = dyn __2(<sym fdef>, <sym generic>);
      return r36;
    };
    p17 = prom<V +>{
      __3 = ldf `@` in base;
      r38 = dyn __3(<sym fdef>, <sym package>);
      return r38;
    };
    r40 = dyn methodsPackageMetaName("M", p16, p17);
    check L53() else D13();
  D13():
    deopt 48 [r40];
  L53():
    st oldMetaName = r40;
    _findAll = ldf `.findAll`;
    check L54() else D14();
  D14():
    deopt 51 [];
  L54():
    p18 = prom<V +>{
      fMetaName = ld fMetaName;
      fMetaName1 = force? fMetaName;
      checkMissing(fMetaName1);
      return fMetaName1;
    };
    p19 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r43 = dyn _findAll(p18, p19);
    check L55() else D15();
  D15():
    deopt 54 [r43];
  L55():
    st allWhere = r43;
    all1 = ld all;
    check L56() else D16();
  D16():
    deopt 56 [all1];
  L56():
    all2 = force? all1;
    checkMissing(all2);
    r44 = `!`(all2);
    c1 = `as.logical`(r44);
    if c1 then L57() else L6();
  L6():
    goto L8();
  L8():
    sym1 = ldf rep;
    base1 = ldf rep in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L63() else L64();
  L57():
    allWhere = ld allWhere;
    check L58() else D17();
  D17():
    deopt 59 [allWhere];
  L9(r47):
    st value = r47;
    cacheGenericsMetaData = ldf cacheGenericsMetaData;
    check L65() else D18();
  L58():
    allWhere1 = force? allWhere;
    checkMissing(allWhere1);
    c2 = `is.object`(allWhere1);
    if c2 then L59() else L60(allWhere1);
  L63():
    rep = ldf rep in base;
    r48 = dyn rep(TRUE, <lang length(allWhere)>);
    goto L9(r48);
  L64():
    r46 = dyn base1(TRUE, <lang length(allWhere)>);
    goto L9(r46);
  D18():
    deopt 72 [];
  L7(dx1):
    st allWhere = dx1;
    goto L8();
  L59():
    dr = tryDispatchBuiltin.1("[", allWhere1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L61() else L60(dr);
  L60(allWhere3):
    __4 = ldf `[` in base;
    r45 = dyn __4(allWhere3, 1);
    goto L7(r45);
  L65():
    p20 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    p21 = prom<V +>{
      fdef6 = ld fdef;
      fdef7 = force? fdef6;
      checkMissing(fdef7);
      return fdef7;
    };
    p22 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r52 = dyn cacheGenericsMetaData(p20, p21, FALSE, p22);
    check L66() else D19();
  D19():
    deopt 77 [r52];
  L61():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L66():
    _uncacheGeneric = ldf `.uncacheGeneric`;
    check L67() else D20();
  D20():
    deopt 79 [];
  L67():
    p23 = prom<V +>{
      f7 = ld f;
      f8 = force? f7;
      checkMissing(f8);
      return f8;
    };
    p24 = prom<V +>{
      fdef8 = ld fdef;
      fdef9 = force? fdef8;
      checkMissing(fdef9);
      return fdef9;
    };
    r55 = dyn _uncacheGeneric(p23, p24);
    check L68() else D21();
  D21():
    deopt 82 [r55];
  L68():
    st doGeneric = TRUE;
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L69() else L70();
  L10(r57):
    s = toForSeq(r57);
    l = length(s);
    i = 0;
    goto L11(i);
  L69():
    allWhere4 = ld allWhere;
    check L71() else D22();
  L70():
    r56 = dyn base2(<sym allWhere>);
    goto L10(r56);
  D22():
    deopt 87 [allWhere4];
  L11(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L72() else L21();
  L71():
    allWhere5 = force? allWhere4;
    checkMissing(allWhere5);
    r58 = seq_along(allWhere5);
    goto L10(r58);
  L21():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    sym3 = ldf `as.environment`;
    base3 = ldf `as.environment` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L73() else L74();
  L72():
    all3 = ld all;
    check L108() else D43();
  D43():
    deopt 169 [all3];
  L12(i7, r60):
    st db = r60;
    environmentIsLocked = ldf environmentIsLocked;
    check L81() else D26();
  L73():
    allWhere6 = ld allWhere;
    check L75() else D23();
  L74():
    r59 = dyn base3(<lang `[[`(allWhere, i)>);
    goto L12(i2, r59);
  L108():
    all4 = force? all3;
    checkMissing(all4);
    c9 = `as.logical`(all4);
    if c9 then L109() else L22(c9);
  D23():
    deopt 92 [i2, allWhere6];
  D26():
    deopt 101 [i7];
  L22(c11):
    st all = c11;
    sym4 = ldf seq_along;
    base4 = ldf seq_along in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L114() else L115();
  L75():
    allWhere7 = force? allWhere6;
    checkMissing(allWhere7);
    c4 = `is.object`(allWhere7);
    if c4 then L76() else L77(i2, allWhere7);
  L81():
    p25 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    r64 = dyn environmentIsLocked(p25);
    check L82() else D27();
  L109():
    __6 = ldf `::`;
    check L110() else D44();
  D27():
    deopt 103 [i7, r64];
  D44():
    deopt 172 [c9];
  L13(i11, dx4):
    as_environment = ldf `as.environment` in base;
    r62 = dyn as_environment(dx4);
    check L80() else D25();
  L23(r108):
    s1 = toForSeq(r108);
    l4 = length(s1);
    i30 = 0;
    goto L24(i30);
  L76():
    dr2 = tryDispatchBuiltin.1("[[", allWhere7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L78() else L77(i2, dr2);
  L77(i9, allWhere9):
    i12 = ld i;
    check L79() else D24();
  L82():
    c5 = `as.logical`(r64);
    if c5 then L83() else L14();
  L110():
    r103 = dyn __6("base", "all");
    check L111() else D45();
  L114():
    allWhere10 = ld allWhere;
    check L116() else D47();
  L115():
    r107 = dyn base4(<sym allWhere>);
    goto L23(r107);
  D24():
    deopt 94 [i9, allWhere9, i12];
  D25():
    deopt 98 [i11, r62];
  D45():
    deopt 175 [c9, r103];
  D47():
    deopt 182 [allWhere10];
  L14():
    exists = ldf exists;
    check L92() else D31();
  L24(i31):
    i32 = `+`.1(i31, 1);
    c15 = `<`.1(l4, i32);
    if c15 then L117() else L35();
  L78():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L13(i2, dx3);
  L79():
    i13 = force? i12;
    __5 = ldf `[[` in base;
    r61 = dyn __5(allWhere9, i13);
    goto L13(i9, r61);
  L80():
    goto L12(i11, r62);
  L83():
    warning1 = ldf warning;
    check L84() else D28();
  L111():
    checkFun.0(r103);
    r104 = r103 as cls;
    p45 = prom<V +>{
      value = ld value;
      value1 = force? value;
      checkMissing(value1);
      return value1;
    };
    r106 = dyn r104(p45);
    check L112() else D46();
  L116():
    allWhere11 = force? allWhere10;
    checkMissing(allWhere11);
    r109 = seq_along(allWhere11);
    goto L23(r109);
  D28():
    deopt 105 [i7];
  D31():
    deopt 122 [i7];
  D46():
    deopt 178 [c9, r106];
  L35():
    x1 = `[[`(s1, i32, NULL, TRUE);
    st i = x1;
    sym5 = ldf `as.environment`;
    base5 = ldf `as.environment` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L118() else L119();
  L84():
    p31 = prom<V +>{
      gettextf1 = ldf gettextf;
      p27 = prom<V +>{
        sQuote2 = ldf sQuote;
        p26 = prom<V +>{
          f9 = ld f;
          f10 = force? f9;
          checkMissing(f10);
          return f10;
        };
        r66 = dyn sQuote2(p26);
        return r66;
      };
      p30 = prom<V +>{
        sQuote3 = ldf sQuote;
        p29 = prom<V +>{
          getPackageName1 = ldf getPackageName;
          p28 = prom<V +>{
            db2 = ld db;
            db3 = force? db2;
            checkMissing(db3);
            return db3;
          };
          r69 = dyn getPackageName1(p28);
          return r69;
        };
        r71 = dyn sQuote3(p29);
        return r71;
      };
      r73 = dyn gettextf1("cannot remove methods for %s in locked environment/package %s", p27, p30);
      return r73;
    };
    r75 = dyn warning1[, domain](p31, NA_LGL);
    check L85() else D29();
  L92():
    p32 = prom<V +>{
      fMetaName2 = ld fMetaName;
      fMetaName3 = force? fMetaName2;
      checkMissing(fMetaName3);
      return fMetaName3;
    };
    p33 = prom<V +>{
      db4 = ld db;
      db5 = force? db4;
      checkMissing(db5);
      return db5;
    };
    r84 = dyn exists[, , inherits](p32, p33, FALSE);
    check L93() else D32();
  L112():
    c12 = `as.logical`(r106);
    c13 = `&&`(c9, c12);
    goto L22(c13);
  L117():
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L154() else L155();
  D29():
    deopt 109 [i7, r75];
  D32():
    deopt 127 [i7, r84];
  L25(i37, r111):
    st db = r111;
    doGeneric = ld doGeneric;
    check L126() else D51();
  L36(r147):
    popenv;
    return r147;
  L85():
    l1 = ld value;
    c6 = `is.object`(l1);
    if c6 then L86() else L87(i7, FALSE, l1);
  L93():
    c7 = `as.logical`(r84);
    if c7 then L94() else L17();
  L118():
    allWhere12 = ld allWhere;
    check L120() else D48();
  L119():
    r110 = dyn base5(<lang `[[`(allWhere, i)>);
    goto L25(i32, r110);
  L154():
    value2 = ld value;
    check L156() else D69();
  L155():
    r146 = dyn base6(<sym value>);
    goto L36(r146);
  D48():
    deopt 187 [i32, allWhere12];
  D51():
    deopt 195 [i37, doGeneric];
  D69():
    deopt 264 [value2];
  L15(i19, dx6):
    st value = dx6;
    goto L11(i19);
  L17():
    goto L20(i7);
  L20(i29):
    goto L11(i29);
  L86():
    dr4 = tryDispatchBuiltin.0("[[<-", l1, FALSE);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L88() else L87(i7, FALSE, dr4);
  L87(i17, r77, l3):
    i20 = ld i;
    check L89() else D30();
  L94():
    get = ldf get;
    check L95() else D33();
  L120():
    allWhere13 = force? allWhere12;
    checkMissing(allWhere13);
    c16 = `is.object`(allWhere13);
    if c16 then L121() else L122(i32, allWhere13);
  L126():
    doGeneric1 = force? doGeneric;
    checkMissing(doGeneric1);
    c17 = `as.logical`(doGeneric1);
    if c17 then L127() else L27(i37, c17);
  L156():
    value3 = force? value2;
    checkMissing(value3);
    any = ldf any in base;
    r148 = dyn any(value3);
    check L157() else D70();
  D30():
    deopt 113 [i17, r77, l3, FALSE, i20];
  D33():
    deopt 129 [i7];
  D70():
    deopt 267 [r148];
  L26(i41, dx8):
    as_environment1 = ldf `as.environment` in base;
    r113 = dyn as_environment1(dx8);
    check L125() else D50();
  L27(i45, c19):
    c23 = `as.logical`(c19);
    if c23 then L131() else L28();
  L88():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L15(i7, dx5);
  L89():
    i21 = force? i20;
    ____ = ldf `[[<-` in base;
    r80 = dyn ____(l3, FALSE, i21);
    goto L15(i17, r80);
  L95():
    p34 = prom<V +>{
      fMetaName4 = ld fMetaName;
      fMetaName5 = force? fMetaName4;
      checkMissing(fMetaName5);
      return fMetaName5;
    };
    p35 = prom<V +>{
      db6 = ld db;
      db7 = force? db6;
      checkMissing(db7);
      return db7;
    };
    r87 = dyn get(p34, p35);
    check L96() else D34();
  L121():
    dr6 = tryDispatchBuiltin.1("[[", allWhere13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L123() else L122(i32, dr6);
  L122(i39, allWhere15):
    i42 = ld i;
    check L124() else D49();
  L127():
    isGeneric = ldf isGeneric;
    check L128() else D52();
  L157():
    goto L36(r148);
  D34():
    deopt 132 [i7, r87];
  D49():
    deopt 189 [i39, allWhere15, i42];
  D50():
    deopt 193 [i41, r113];
  D52():
    deopt 198 [i37, c17];
  L28():
    goto L34(i45);
  L34(i58):
    goto L24(i58);
  L96():
    st theseMethods = r87;
    _mergeMethodsTable = ldf `.mergeMethodsTable`;
    check L97() else D35();
  L123():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L26(i32, dx7);
  L124():
    i43 = force? i42;
    __7 = ldf `[[` in base;
    r112 = dyn __7(allWhere15, i43);
    goto L26(i39, r112);
  L125():
    goto L25(i41, r113);
  L128():
    p46 = prom<V +>{
      f11 = ld f;
      f12 = force? f11;
      checkMissing(f12);
      return f12;
    };
    p47 = prom<V +>{
      db14 = ld db;
      db15 = force? db14;
      checkMissing(db15);
      return db15;
    };
    r116 = dyn isGeneric(p46, p47);
    check L129() else D53();
  L131():
    all5 = ld all;
    check L132() else D54();
  D35():
    deopt 135 [i7];
  D53():
    deopt 201 [i37, c17, r116];
  D54():
    deopt 203 [i45, all5];
  L97():
    p36 = prom<V +>{
      fdef10 = ld fdef;
      fdef11 = force? fdef10;
      checkMissing(fdef11);
      return fdef11;
    };
    p37 = prom<V +>{
      methods = ld methods;
      methods1 = force? methods;
      checkMissing(methods1);
      return methods1;
    };
    p38 = prom<V +>{
      theseMethods = ld theseMethods;
      theseMethods1 = force? theseMethods;
      checkMissing(theseMethods1);
      return theseMethods1;
    };
    r91 = dyn _mergeMethodsTable(p36, p37, p38, FALSE);
    check L98() else D36();
  L129():
    c20 = `as.logical`(r116);
    c21 = `&&`(c17, c20);
    goto L27(i37, c21);
  L132():
    all6 = force? all5;
    checkMissing(all6);
    c24 = `as.logical`(all6);
    if c24 then L133() else L29(i45, c24);
  D36():
    deopt 140 [i7, r91];
  L29(i50, c26):
    c30 = `as.logical`(c26);
    if c30 then L137() else L30();
  L98():
    rm = ldf rm;
    check L99() else D37();
  L133():
    is1 = ldf is;
    check L134() else D55();
  D37():
    deopt 142 [i7];
  D55():
    deopt 206 [i45, c24];
  L30():
    resetGeneric = ldf resetGeneric;
    check L151() else D67();
  L33(i57):
    st doGeneric = FALSE;
    goto L34(i57);
  L99():
    p39 = prom<V +>{
      fMetaName6 = ld fMetaName;
      fMetaName7 = force? fMetaName6;
      checkMissing(fMetaName7);
      return fMetaName7;
    };
    p40 = prom<V +>{
      db8 = ld db;
      db9 = force? db8;
      checkMissing(db9);
      return db9;
    };
    r94 = dyn rm[list, pos](p39, p40);
    check L100() else D38();
  L134():
    p48 = prom<V +>{
      default = ld default;
      default1 = force? default;
      checkMissing(default1);
      return default1;
    };
    r118 = dyn is1(p48, "derivedDefaultMethod");
    check L135() else D56();
  L137():
    as = ldf as;
    check L138() else D57();
  D38():
    deopt 147 [i7, r94];
  D56():
    deopt 209 [i45, c24, r118];
  D57():
    deopt 212 [i50];
  D67():
    deopt 246 [i50];
  L100():
    exists1 = ldf exists;
    check L101() else D39();
  L135():
    c27 = `as.logical`(r118);
    c28 = `&&`(c24, c27);
    goto L29(i45, c28);
  L138():
    p49 = prom<V +>{
      default2 = ld default;
      default3 = force? default2;
      checkMissing(default3);
      return default3;
    };
    r120 = dyn as(p49, "function");
    check L139() else D58();
  L151():
    p60 = prom<V +>{
      f21 = ld f;
      f22 = force? f21;
      checkMissing(f22);
      return f22;
    };
    p61 = prom<V +>{
      fdef12 = ld fdef;
      fdef13 = force? fdef12;
      checkMissing(fdef13);
      return fdef13;
    };
    p62 = prom<V +>{
      db22 = ld db;
      db23 = force? db22;
      checkMissing(db23);
      return db23;
    };
    p63 = prom<V +>{
      default6 = ld default;
      default7 = force? default6;
      checkMissing(default7);
      return default7;
    };
    r144 = dyn resetGeneric[, , where, deflt](p60, p61, p62, p63);
    check L152() else D68();
  D39():
    deopt 149 [i7];
  D58():
    deopt 215 [i50, r120];
  D68():
    deopt 253 [i50, r144];
  L101():
    p41 = prom<V +>{
      oldMetaName = ld oldMetaName;
      oldMetaName1 = force? oldMetaName;
      checkMissing(oldMetaName1);
      return oldMetaName1;
    };
    p42 = prom<V +>{
      db10 = ld db;
      db11 = force? db10;
      checkMissing(db11);
      return db11;
    };
    r97 = dyn exists1[, , inherits](p41, p42, FALSE);
    check L102() else D40();
  L139():
    st default = r120;
    rm2 = ldf rm;
    check L140() else D59();
  L152():
    goto L33(i50);
  D40():
    deopt 154 [i7, r97];
  D59():
    deopt 218 [i50];
  L102():
    c8 = `as.logical`(r97);
    if c8 then L103() else L18();
  L140():
    p50 = prom<V +>{
      f13 = ld f;
      f14 = force? f13;
      checkMissing(f14);
      return f14;
    };
    p51 = prom<V +>{
      db16 = ld db;
      db17 = force? db16;
      checkMissing(db17);
      return db17;
    };
    r123 = dyn rm2[list, pos](p50, p51);
    check L141() else D60();
  D60():
    deopt 223 [i50, r123];
  L18():
    goto L19(i7, NULL);
  L19(i28, r101):
    goto L20(i28);
  L103():
    rm1 = ldf rm;
    check L104() else D41();
  L141():
    existsFunction = ldf existsFunction;
    check L142() else D61();
  D41():
    deopt 156 [i7];
  D61():
    deopt 225 [i50];
  L104():
    p43 = prom<V +>{
      oldMetaName2 = ld oldMetaName;
      oldMetaName3 = force? oldMetaName2;
      checkMissing(oldMetaName3);
      return oldMetaName3;
    };
    p44 = prom<V +>{
      db12 = ld db;
      db13 = force? db12;
      checkMissing(db13);
      return db13;
    };
    r100 = dyn rm1[list, pos](p43, p44);
    check L105() else D42();
  L142():
    p52 = prom<V +>{
      f15 = ld f;
      f16 = force? f15;
      checkMissing(f16);
      return f16;
    };
    p53 = prom<V +>{
      db18 = ld db;
      db19 = force? db18;
      checkMissing(db19);
      return db19;
    };
    r126 = dyn existsFunction(p52, FALSE, p53);
    check L143() else D62();
  D42():
    deopt 161 [i7, r100];
  D62():
    deopt 229 [i50, r126];
  L105():
    goto L19(i7, r100);
  L143():
    r127 = `!`(r126);
    c31 = `as.logical`(r127);
    if c31 then L144() else L31();
  L31():
    goto L32(i50, NULL);
  L32(i56, r138):
    goto L33(i56);
  L144():
    message = ldf message;
    check L145() else D63();
  D63():
    deopt 232 [i50];
  L145():
    p56 = prom<V +>{
      gettextf2 = ldf gettextf;
      p55 = prom<V +>{
        sQuote4 = ldf sQuote;
        p54 = prom<V +>{
          f17 = ld f;
          f18 = force? f17;
          checkMissing(f18);
          return f18;
        };
        r129 = dyn sQuote4(p54);
        return r129;
      };
      r131 = dyn gettextf2("Restoring default function definition of %s", p55);
      return r131;
    };
    r133 = dyn message[, domain](p56, NA_LGL);
    check L146() else D64();
  D64():
    deopt 236 [i50, r133];
  L146():
    assign = ldf assign;
    check L147() else D65();
  D65():
    deopt 238 [i50];
  L147():
    p57 = prom<V +>{
      f19 = ld f;
      f20 = force? f19;
      checkMissing(f20);
      return f20;
    };
    p58 = prom<V +>{
      default4 = ld default;
      default5 = force? default4;
      checkMissing(default5);
      return default5;
    };
    p59 = prom<V +>{
      db20 = ld db;
      db21 = force? db20;
      checkMissing(db21);
      return db21;
    };
    r137 = dyn assign(p57, p58, p59);
    check L148() else D66();
  D66():
    deopt 242 [i50, r137];
  L148():
    goto L32(i50, r137);
  }
}