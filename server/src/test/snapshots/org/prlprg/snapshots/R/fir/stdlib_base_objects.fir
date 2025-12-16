fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner858255830;
    st objects = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner858255830(name, pos, envir, `all.names`, pattern, sorted) {
  (reg name:*, reg pos:*, reg envir:*, reg all_names:*, reg pattern:*, reg sorted:*) -+> V { var name:*, var pos:*, reg pos_isMissing:L, reg pos_orDefault:*, reg p:p(V +), var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg pos1:*, reg pos2:V, reg as_environment:cls, reg r3:V, reg p1:p(V +), var `all.names`:*, reg all_names_isMissing:L, reg all_names_orDefault:*, var pattern:*, var sorted:*, reg sorted_isMissing:L, reg sorted_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg missing:cls, reg r7:V, reg r8:V, reg c:L, reg tryCatch:cls, reg name1:*, reg name2:V, reg p2:p(V +), reg r10:cls, reg p3:p(V +), reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg pos3:*, reg pos4:V, reg inherits:cls, reg r15:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg substitute:cls, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg name3:*, reg name4:V, reg c2:L, reg r21:V, reg c3:L, reg deparse:cls, reg name5:*, reg name6:V, reg p4:p(V +), reg r23:V, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg name7:*, reg name8:V, reg p5:p(V +), reg r26:V, reg p6:p(V +), reg r28:V, reg p7:p(V +), reg r30:V, reg name9:*, reg name10:V, reg name11:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg envir1:*, reg envir2:V, reg all_names1:*, reg all_names2:V, reg sorted1:*, reg sorted2:V, reg ls:cls, reg r33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg missing1:cls, reg r36:V, reg r37:V, reg c4:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg grep:cls, reg pattern1:*, reg pattern2:V, reg p8:p(V +), reg r41:V, reg length:cls, reg r42:V, reg c5:L, reg c7:V, reg ll:*, reg ll1:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r43:V, reg c10:L, reg ll4:V, reg r44:V, reg grep1:cls, reg pattern3:*, reg pattern4:V, reg p9:p(V +), reg r46:V, reg length1:cls, reg r47:V, reg r48:V, reg c11:L, reg c12:V, reg c14:L, reg pattern5:*, reg pattern6:V, reg r49:V, reg c15:L, reg warning1:cls, reg r50:V, reg r51:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r52:V, reg r53:V, reg grep2:cls, reg pattern7:*, reg pattern8:V, reg p10:p(V +), reg r55:V, reg length2:cls, reg r56:V, reg c16:L, reg sub:cls, reg pattern9:*, reg pattern10:V, reg p11:p(V +), reg r58:V, reg warning2:cls, reg r59:V, reg grep3:cls, reg pattern11:*, reg pattern12:V, reg p12:p(V +), reg all_names3:*, reg all_names4:V, reg p13:p(V +), reg r63:V, reg all_names5:*, reg all_names6:V |
    mkenv;
    st name = name;
    pos_isMissing = missing.0(pos);
    if pos_isMissing then L0() else L1(pos);
  L0():
    p = prom<V +>{
      return -1;
    };
    goto L1(p);
  L1(pos_orDefault):
    st pos = pos_orDefault;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L2() else L3(envir);
  L2():
    p1 = prom<V +>{
      sym = ldf `as.environment`;
      base = ldf `as.environment` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      pos1 = ld pos;
      pos2 = force? pos1;
      checkMissing(pos2);
      as_environment = ldf `as.environment` in base;
      r3 = dyn as_environment(pos2);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym pos>);
      goto L0(r1);
    };
    goto L3(p1);
  L3(envir_orDefault):
    st envir = envir_orDefault;
    all_names_isMissing = missing.0(all_names);
    if all_names_isMissing then L4(FALSE) else L4(all_names);
  L4(all_names_orDefault):
    st `all.names` = all_names_orDefault;
    st pattern = pattern;
    sorted_isMissing = missing.0(sorted);
    if sorted_isMissing then L5(TRUE) else L5(sorted);
  L5(sorted_orDefault):
    st sorted = sorted_orDefault;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L6(r6):
    r8 = `!`(r6);
    c = `as.logical`(r8);
    if c then L30() else L7();
  L28():
    missing = ldf missing in base;
    r7 = dyn missing(<sym name>);
    goto L6(r7);
  L29():
    r5 = dyn base1(<sym name>);
    goto L6(r5);
  L7():
    goto L15();
  L15():
    sym5 = ldf `.Internal`;
    base5 = ldf `.Internal` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L52() else L53();
  L30():
    tryCatch = ldf tryCatch;
    check L31() else D0();
  D0():
    deopt 5 [];
  L16(r32):
    st `all.names` = r32;
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L58() else L59();
  L31():
    p2 = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p3 = prom<V +>{
      r10 = clos inner1560918050;
      return r10;
    };
    r12 = dyn tryCatch[, error](p2, p3);
    check L32() else D1();
  L52():
    envir1 = ld envir;
    check L54() else D10();
  L53():
    r31 = dyn base5(<lang ls(envir, all.names, sorted)>);
    goto L16(r31);
  D1():
    deopt 9 [r12];
  D10():
    deopt 50 [envir1];
  L17(r35):
    r37 = `!`(r35);
    c4 = `as.logical`(r37);
    if c4 then L60() else L18();
  L32():
    st pos = r12;
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L54():
    envir2 = force? envir1;
    checkMissing(envir2);
    all_names1 = ld `all.names`;
    check L55() else D11();
  L58():
    missing1 = ldf missing in base;
    r36 = dyn missing1(<sym pattern>);
    goto L17(r36);
  L59():
    r34 = dyn base6(<sym pattern>);
    goto L17(r34);
  D11():
    deopt 52 [all_names1];
  L8(r14):
    c1 = `as.logical`(r14);
    if c1 then L37() else L9();
  L18():
    all_names5 = ld `all.names`;
    check L95() else D33();
  L33():
    pos3 = ld pos;
    check L35() else D2();
  L34():
    r13 = dyn base2(<sym pos>, "error");
    goto L8(r13);
  L55():
    all_names2 = force? all_names1;
    checkMissing(all_names2);
    sorted1 = ld sorted;
    check L56() else D12();
  L60():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L61() else L62();
  D2():
    deopt 13 [pos3];
  D12():
    deopt 54 [sorted1];
  D33():
    deopt 131 [all_names5];
  L9():
    goto L14(NULL);
  L14(name11):
    goto L15();
  L19(r39):
    st ll = r39;
    c5 = `as.logical`(r39);
    if c5 then L66() else L20(c5);
  L35():
    pos4 = force? pos3;
    checkMissing(pos4);
    inherits = ldf inherits in base;
    r15 = dyn inherits(pos4, "error", FALSE);
    check L36() else D3();
  L37():
    sym3 = ldf substitute;
    base3 = ldf substitute in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L56():
    sorted2 = force? sorted1;
    checkMissing(sorted2);
    ls = ldf ls in base;
    r33 = dyn ls(envir2, all_names2, sorted2);
    check L57() else D13();
  L61():
    grep = ldf grep;
    check L63() else D14();
  L62():
    r38 = dyn base7(<lang grep("[", pattern, fixed=TRUE)>);
    goto L19(r38);
  L95():
    all_names6 = force? all_names5;
    checkMissing(all_names6);
    popenv;
    return all_names6;
  D3():
    deopt 18 [r15];
  D13():
    deopt 57 [r33];
  D14():
    deopt 66 [];
  L10(r17):
    st name = r17;
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L40() else L41();
  L20(c7):
    c14 = `as.logical`(c7);
    if c14 then L74() else L22();
  L36():
    goto L8(r15);
  L38():
    substitute = ldf substitute in base;
    r18 = dyn substitute(<sym name>);
    goto L10(r18);
  L39():
    r16 = dyn base3(<sym name>);
    goto L10(r16);
  L57():
    goto L16(r33);
  L63():
    p8 = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    r41 = dyn grep[, , fixed]("[", p8, TRUE);
    check L64() else D15();
  L66():
    ll = ld ll;
    check L67() else D17();
  D15():
    deopt 71 [r41];
  D17():
    deopt 75 [c5, ll];
  L11(r20):
    r21 = `!`(r20);
    c3 = `as.logical`(r21);
    if c3 then L43() else L12();
  L22():
    goto L27();
  L27():
    grep3 = ldf grep;
    check L92() else D31();
  L40():
    name3 = ld name;
    check L42() else D4();
  L41():
    r19 = dyn base4(<sym name>);
    goto L11(r19);
  L64():
    length = ldf length in base;
    r42 = dyn length(r41);
    check L65() else D16();
  L67():
    ll1 = force? ll;
    checkMissing(ll1);
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L68() else L69();
  L74():
    pattern5 = ld pattern;
    check L75() else D21();
  D4():
    deopt 24 [name3];
  D16():
    deopt 73 [r42];
  D21():
    deopt 89 [pattern5];
  D31():
    deopt 125 [];
  L12():
    goto L13();
  L13():
    warning = ldf warning;
    check L47() else D7();
  L21(c10, ll4, r44):
    r48 = `!=`(ll4, r44);
    c11 = `as.logical`(r48);
    c12 = `&&`(c10, c11);
    goto L20(c12);
  L42():
    name4 = force? name3;
    checkMissing(name4);
    c2 = `is.character`(name4);
    goto L11(c2);
  L43():
    deparse = ldf deparse;
    check L44() else D5();
  L65():
    goto L19(r42);
  L68():
    grep1 = ldf grep;
    check L70() else D18();
  L69():
    r43 = dyn base8(<lang grep("]", pattern, fixed=TRUE)>);
    goto L21(c5, ll1, r43);
  L75():
    pattern6 = force? pattern5;
    checkMissing(pattern6);
    r49 = `==`(pattern6, "[");
    c15 = `as.logical`(r49);
    if c15 then L76() else L23();
  L92():
    p12 = prom<V +>{
      pattern11 = ld pattern;
      pattern12 = force? pattern11;
      checkMissing(pattern12);
      return pattern12;
    };
    p13 = prom<V +>{
      all_names3 = ld `all.names`;
      all_names4 = force? all_names3;
      checkMissing(all_names4);
      return all_names4;
    };
    r63 = dyn grep3[, , value](p12, p13, TRUE);
    check L93() else D32();
  D5():
    deopt 29 [];
  D7():
    deopt 36 [];
  D18():
    deopt 79 [c5, ll1];
  D32():
    deopt 130 [r63];
  L23():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L80() else L81();
  L24(r51):
    goto L27();
  L44():
    p4 = prom<V +>{
      name5 = ld name;
      name6 = force? name5;
      checkMissing(name6);
      return name6;
    };
    r23 = dyn deparse(p4);
    check L45() else D6();
  L47():
    p7 = prom<V +>{
      gettextf = ldf gettextf;
      p6 = prom<V +>{
        sQuote = ldf sQuote;
        p5 = prom<V +>{
          name7 = ld name;
          name8 = force? name7;
          checkMissing(name8);
          return name8;
        };
        r26 = dyn sQuote(p5);
        return r26;
      };
      r28 = dyn gettextf("%s converted to character string", p6);
      return r28;
    };
    r30 = dyn warning[, domain](p7, NA_LGL);
    check L48() else D8();
  L70():
    p9 = prom<V +>{
      pattern3 = ld pattern;
      pattern4 = force? pattern3;
      checkMissing(pattern4);
      return pattern4;
    };
    r46 = dyn grep1[, , fixed]("]", p9, TRUE);
    check L71() else D19();
  L76():
    st pattern = "\\[";
    warning1 = ldf warning;
    check L77() else D22();
  L93():
    popenv;
    return r63;
  D6():
    deopt 31 [r23];
  D8():
    deopt 40 [r30];
  D19():
    deopt 84 [c5, ll1, r46];
  D22():
    deopt 97 [];
  L25(r53):
    c16 = `as.logical`(r53);
    if c16 then L85() else L26();
  L45():
    st name = r23;
    goto L13();
  L48():
    name9 = ld name;
    check L49() else D9();
  L71():
    length1 = ldf length in base;
    r47 = dyn length1(r46);
    check L72() else D20();
  L77():
    r50 = dyn warning1("replaced regular expression pattern '[' by  '\\\\['");
    check L78() else D23();
  L80():
    grep2 = ldf grep;
    check L82() else D24();
  L81():
    r52 = dyn base9(<lang grep("[^\\\\]\\[<-", pattern)>);
    goto L25(r52);
  D9():
    deopt 41 [name9];
  D20():
    deopt 86 [c5, ll1, r47];
  D23():
    deopt 99 [r50];
  D24():
    deopt 103 [];
  L26():
    goto L24(NULL);
  L49():
    name10 = force? name9;
    checkMissing(name10);
    st pos = name10;
    goto L14(name10);
  L72():
    goto L21(c5, ll1, r47);
  L78():
    goto L24(r50);
  L82():
    p10 = prom<V +>{
      pattern7 = ld pattern;
      pattern8 = force? pattern7;
      checkMissing(pattern8);
      return pattern8;
    };
    r55 = dyn grep2("[^\\\\]\\[<-", p10);
    check L83() else D25();
  L85():
    sub = ldf sub;
    check L86() else D27();
  D25():
    deopt 106 [r55];
  D27():
    deopt 110 [];
  L83():
    length2 = ldf length in base;
    r56 = dyn length2(r55);
    check L84() else D26();
  L86():
    p11 = prom<V +>{
      pattern9 = ld pattern;
      pattern10 = force? pattern9;
      checkMissing(pattern10);
      return pattern10;
    };
    r58 = dyn sub("\\[<-", "\\\\\\[<-", p11);
    check L87() else D28();
  D26():
    deopt 108 [r56];
  D28():
    deopt 114 [r58];
  L84():
    goto L25(r56);
  L87():
    st pattern = r58;
    warning2 = ldf warning;
    check L88() else D29();
  D29():
    deopt 117 [];
  L88():
    r59 = dyn warning2("replaced '[<-' by '\\\\[<-' in regular expression pattern");
    check L89() else D30();
  D30():
    deopt 119 [r59];
  L89():
    goto L24(r59);
  }
}
fun inner1560918050(e) {
  (reg e:*) -+> V { var e:*, reg e1:*, reg e2:V |
    mkenv;
    st e = e;
    e1 = ld e;
    check L0() else D0();
  D0():
    deopt 0 [e1];
  L0():
    e2 = force? e1;
    checkMissing(e2);
    popenv;
    return e2;
  }
}