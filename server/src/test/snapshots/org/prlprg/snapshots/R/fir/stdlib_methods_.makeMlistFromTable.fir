fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3304223108;
    st `.makeMlistFromTable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3304223108(generic, where) {
  (reg generic:*, reg where:*) -+> V { var generic:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg _MlistDefunct:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg where1:*, reg where2:V, reg c:V, reg c1:L, reg environment:cls, reg generic1:*, reg generic2:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg where3:*, reg where4:V, reg as_environment:cls, reg r8:V, reg _TableMetaName:cls, reg __:cls, reg r9:V, reg p1:p(V +), reg __1:cls, reg r11:V, reg p2:p(V +), reg r13:V, reg exists:cls, reg what:*, reg what1:V, reg p3:p(V +), reg where5:*, reg where6:V, reg p4:p(V +), reg r16:V, reg c2:L, reg get:cls, reg what2:*, reg what3:V, reg p5:p(V +), reg where7:*, reg where8:V, reg p6:p(V +), reg r19:V, reg new_env:cls, reg r21:V, reg new:cls, reg as_name:cls, reg __2:cls, reg r22:V, reg c3:L, reg r24:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __3:cls, reg r25:V, reg p7:p(V +), reg r27:V, reg p8:p(V +), reg r29:V, reg sort:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:V, reg table:*, reg table1:V, reg names:cls, reg r32:V, reg p9:p(V +), reg r34:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg allNames:*, reg allNames1:V, reg length:cls, reg r37:V, reg r38:V, reg c4:L, reg value:*, reg value1:V, reg __4:cls, reg r41:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r42:V, reg r43:V, reg unique:cls, reg gsub:cls, reg allNames2:*, reg allNames3:V, reg p10:p(V +), reg r45:V, reg p11:p(V +), reg r47:V, reg nchar:cls, reg r48:V, reg r49:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg r51:V, reg nargs:*, reg nargs1:V, reg length1:cls, reg r52:V, reg r53:V, reg c5:L, reg warning:cls, reg paste:cls, reg nargs2:*, reg nargs3:V, reg p12:p(V +), reg r55:V, reg p13:p(V +), reg r57:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r58:V, reg r59:V, reg nargs4:*, reg nargs5:V, reg max:cls, reg r60:V, reg nargs6:*, reg nargs7:V, reg l:*, reg length__:cls, reg r62:V, reg nargs8:*, reg nargs9:V, reg r63:V, reg c6:L, reg _makeMlist1:cls, reg as_name1:cls, reg argNames:*, reg argNames1:V, reg c7:L, reg argNames3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __5:cls, reg r64:V, reg p14:p(V +), reg r66:V, reg p15:p(V +), reg mget:cls, reg allNames4:*, reg allNames5:V, reg p16:p(V +), reg table2:*, reg table3:V, reg p17:p(V +), reg r70:V, reg p18:p(V +), reg r72:V, reg _makeMlist2:cls, reg argNames4:*, reg argNames5:V, reg p19:p(V +), reg mget1:cls, reg allNames6:*, reg allNames7:V, reg p20:p(V +), reg table4:*, reg table5:V, reg p21:p(V +), reg r76:V, reg p22:p(V +), reg r78:V |
    mkenv;
    st generic = generic;
    where_isMissing = missing.0(where);
    if where_isMissing then L0(NULL) else L0(where);
  L0(where_orDefault):
    st where = where_orDefault;
    _MlistDefunct = ldf `.MlistDefunct`;
    check L16() else D0();
  D0():
    deopt 1 [];
  L16():
    r = dyn _MlistDefunct(".makeMlistFromTable()");
    check L17() else D1();
  D1():
    deopt 3 [r];
  L17():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L1(r2):
    c1 = `as.logical`(r2);
    if c1 then L21() else L2();
  L18():
    where1 = ld where;
    check L20() else D2();
  L19():
    r1 = dyn base(<sym where>);
    goto L1(r1);
  D2():
    deopt 5 [where1];
  L2():
    sym1 = ldf `as.environment`;
    base1 = ldf `as.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L3():
    exists = ldf exists;
    check L31() else D9();
  L20():
    where2 = force? where1;
    checkMissing(where2);
    c = `==`(where2, NULL);
    goto L1(c);
  L21():
    st what = ".MTable";
    environment = ldf environment;
    check L22() else D3();
  D3():
    deopt 12 [];
  D9():
    deopt 30 [];
  L4(r7):
    st where = r7;
    _TableMetaName = ldf `.TableMetaName`;
    check L29() else D7();
  L22():
    p = prom<V +>{
      generic1 = ld generic;
      generic2 = force? generic1;
      checkMissing(generic2);
      return generic2;
    };
    r4 = dyn environment(p);
    check L23() else D4();
  L25():
    where3 = ld where;
    check L27() else D5();
  L26():
    r6 = dyn base1(<sym where>);
    goto L4(r6);
  L31():
    p3 = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    p4 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r16 = dyn exists[, envir, inherits](p3, p4, FALSE);
    check L32() else D10();
  D4():
    deopt 14 [r4];
  D5():
    deopt 18 [where3];
  D7():
    deopt 24 [];
  D10():
    deopt 36 [r16];
  L23():
    st where = r4;
    goto L3();
  L27():
    where4 = force? where3;
    checkMissing(where4);
    as_environment = ldf `as.environment` in base;
    r8 = dyn as_environment(where4);
    check L28() else D6();
  L29():
    p1 = prom<V +>{
      __ = ldf `@` in base;
      r9 = dyn __(<sym generic>, <sym generic>);
      return r9;
    };
    p2 = prom<V +>{
      __1 = ldf `@` in base;
      r11 = dyn __1(<sym generic>, <sym package>);
      return r11;
    };
    r13 = dyn _TableMetaName(p1, p2);
    check L30() else D8();
  L32():
    c2 = `as.logical`(r16);
    if c2 then L33() else L5();
  D6():
    deopt 21 [r8];
  D8():
    deopt 27 [r13];
  L5():
    new_env = ldf `new.env`;
    check L37() else D13();
  L6():
    new = ldf new;
    check L39() else D15();
  L28():
    goto L4(r8);
  L30():
    st what = r13;
    goto L3();
  L33():
    get = ldf get;
    check L34() else D11();
  D11():
    deopt 38 [];
  D13():
    deopt 45 [];
  D15():
    deopt 49 [];
  L34():
    p5 = prom<V +>{
      what2 = ld what;
      what3 = force? what2;
      checkMissing(what3);
      return what3;
    };
    p6 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r19 = dyn get[, envir](p5, p6);
    check L35() else D12();
  L37():
    r21 = dyn new_env();
    check L38() else D14();
  L39():
    p8 = prom<V +>{
      as_name = ldf `as.name`;
      p7 = prom<V +>{
        __2 = ldf `@` in base;
        r22 = dyn __2(<sym generic>, <sym signature>);
        c3 = `is.object`(r22);
        if c3 then L1() else L2(r22);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[[", r22);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(r24):
        __3 = ldf `[[` in base;
        r25 = dyn __3(r24, 1.0);
        goto L0(r25);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r27 = dyn as_name(p7);
      return r27;
    };
    r29 = dyn new[, argument]("MethodsList", p8);
    check L40() else D16();
  D12():
    deopt 42 [r19];
  D14():
    deopt 46 [r21];
  D16():
    deopt 53 [r29];
  L35():
    st table = r19;
    goto L6();
  L38():
    st table = r21;
    goto L6();
  L40():
    st value = r29;
    sort = ldf sort;
    check L41() else D17();
  D17():
    deopt 56 [];
  L41():
    p9 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      table = ld table;
      table1 = force? table;
      checkMissing(table1);
      names = ldf names in base;
      r32 = dyn names(table1);
      goto L0(r32);
    L2():
      r30 = dyn base2(<sym table>);
      goto L0(r30);
    };
    r34 = dyn sort(p9);
    check L42() else D18();
  D18():
    deopt 58 [r34];
  L42():
    st allNames = r34;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L7(r36):
    r38 = `==`(r36, 0);
    c4 = `as.logical`(r38);
    if c4 then L47() else L8();
  L43():
    allNames = ld allNames;
    check L45() else D19();
  L44():
    r35 = dyn base3(<sym allNames>);
    goto L7(r35);
  D19():
    deopt 62 [allNames];
  L8():
    __4 = ldf `@` in base;
    r41 = dyn __4(<sym generic>, <sym signature>);
    st argNames = r41;
    sym4 = ldf nchar;
    base4 = ldf nchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L51() else L52();
  L45():
    allNames1 = force? allNames;
    checkMissing(allNames1);
    length = ldf length in base;
    r37 = dyn length(allNames1);
    check L46() else D20();
  L47():
    value = ld value;
    check L48() else D21();
  D20():
    deopt 65 [r37];
  D21():
    deopt 68 [value];
  L10(r43):
    r49 = `+`(r43, 1.0);
    st nargs = r49;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L56() else L57();
  L46():
    goto L7(r37);
  L48():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  L51():
    unique = ldf unique;
    check L53() else D22();
  L52():
    r42 = dyn base4(<lang unique(gsub("[^#]", "", allNames))>);
    goto L10(r42);
  D22():
    deopt 79 [];
  L11(r51):
    r53 = `>`(r51, 1);
    c5 = `as.logical`(r53);
    if c5 then L60() else L12();
  L53():
    p11 = prom<V +>{
      gsub = ldf gsub;
      p10 = prom<V +>{
        allNames2 = ld allNames;
        allNames3 = force? allNames2;
        checkMissing(allNames3);
        return allNames3;
      };
      r45 = dyn gsub("[^#]", "", p10);
      return r45;
    };
    r47 = dyn unique(p11);
    check L54() else D23();
  L56():
    nargs = ld nargs;
    check L58() else D25();
  L57():
    r50 = dyn base5(<sym nargs>);
    goto L11(r50);
  D23():
    deopt 81 [r47];
  D25():
    deopt 92 [nargs];
  L12():
    goto L14();
  L14():
    nargs6 = ld nargs;
    check L68() else D31();
  L54():
    nchar = ldf nchar in base;
    r48 = dyn nchar(r47, "chars", FALSE, NA_LGL);
    check L55() else D24();
  L58():
    nargs1 = force? nargs;
    checkMissing(nargs1);
    length1 = ldf length in base;
    r52 = dyn length1(nargs1);
    check L59() else D26();
  L60():
    warning = ldf warning;
    check L61() else D27();
  D24():
    deopt 86 [r48];
  D26():
    deopt 95 [r52];
  D27():
    deopt 99 [];
  D31():
    deopt 115 [nargs6];
  L55():
    goto L10(r48);
  L59():
    goto L11(r52);
  L61():
    p13 = prom<V +>{
      paste = ldf paste;
      p12 = prom<V +>{
        nargs2 = ld nargs;
        nargs3 = force? nargs2;
        checkMissing(nargs3);
        return nargs3;
      };
      r55 = dyn paste[, collapse](p12, ", ");
      return r55;
    };
    r57 = dyn warning[, , , domain]("something weird:  inconsistent number of args in methods table strings:", p13, " (using the largest value)", NA_LGL);
    check L62() else D28();
  L68():
    nargs7 = force? nargs6;
    checkMissing(nargs7);
    l = ld argNames;
    length__ = ldf `length<-`;
    check L69() else D32();
  D28():
    deopt 105 [r57];
  D32():
    deopt 118 [nargs7, l, nargs7];
  L62():
    sym6 = ldf max;
    base6 = ldf max in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L63() else L64();
  L69():
    r62 = dyn length__(l, NULL, nargs7);
    check L70() else D33();
  D33():
    deopt 120 [nargs7, r62];
  L13(r59):
    st nargs = r59;
    goto L14();
  L63():
    nargs4 = ld nargs;
    check L65() else D29();
  L64():
    r58 = dyn base6(<sym nargs>);
    goto L13(r58);
  L70():
    st argNames = r62;
    nargs8 = ld nargs;
    check L71() else D34();
  D29():
    deopt 108 [nargs4];
  D34():
    deopt 122 [nargs8];
  L65():
    nargs5 = force? nargs4;
    checkMissing(nargs5);
    max = ldf max in base;
    r60 = dyn max(nargs5);
    check L66() else D30();
  L71():
    nargs9 = force? nargs8;
    checkMissing(nargs9);
    r63 = `==`(nargs9, 1.0);
    c6 = `as.logical`(r63);
    if c6 then L72() else L15();
  D30():
    deopt 111 [r60];
  L15():
    _makeMlist2 = ldf `.makeMlist2`;
    check L76() else D37();
  L66():
    goto L13(r60);
  L72():
    _makeMlist1 = ldf `.makeMlist1`;
    check L73() else D35();
  D35():
    deopt 127 [];
  D37():
    deopt 132 [];
  L73():
    p15 = prom<V +>{
      as_name1 = ldf `as.name`;
      p14 = prom<V +>{
        argNames = ld argNames;
        argNames1 = force? argNames;
        checkMissing(argNames1);
        c7 = `is.object`(argNames1);
        if c7 then L1() else L2(argNames1);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[[", argNames1);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(argNames3):
        __5 = ldf `[[` in base;
        r64 = dyn __5(argNames3, 1);
        goto L0(r64);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r66 = dyn as_name1(p14);
      return r66;
    };
    p18 = prom<V +>{
      mget = ldf mget;
      p16 = prom<V +>{
        allNames4 = ld allNames;
        allNames5 = force? allNames4;
        checkMissing(allNames5);
        return allNames5;
      };
      p17 = prom<V +>{
        table2 = ld table;
        table3 = force? table2;
        checkMissing(table3);
        return table3;
      };
      r70 = dyn mget(p16, p17);
      return r70;
    };
    r72 = dyn _makeMlist1(p15, p18);
    check L74() else D36();
  L76():
    p19 = prom<V +>{
      argNames4 = ld argNames;
      argNames5 = force? argNames4;
      checkMissing(argNames5);
      return argNames5;
    };
    p22 = prom<V +>{
      mget1 = ldf mget;
      p20 = prom<V +>{
        allNames6 = ld allNames;
        allNames7 = force? allNames6;
        checkMissing(allNames7);
        return allNames7;
      };
      p21 = prom<V +>{
        table4 = ld table;
        table5 = force? table4;
        checkMissing(table5);
        return table5;
      };
      r76 = dyn mget1(p20, p21);
      return r76;
    };
    r78 = dyn _makeMlist2(p19, p22);
    check L77() else D38();
  D36():
    deopt 130 [r72];
  D38():
    deopt 135 [r78];
  L74():
    popenv;
    return r72;
  L77():
    popenv;
    return r78;
  }
}