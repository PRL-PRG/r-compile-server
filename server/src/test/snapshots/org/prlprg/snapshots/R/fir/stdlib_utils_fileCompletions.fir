fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3257120693;
    st fileCompletions = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3257120693(token) {
  (reg token:*) -+> V { var token:*, reg correctFilenameToken:cls, reg r:V, reg tryCatch:cls, reg eval:cls, reg str2expression:cls, reg paste0:cls, reg token1:*, reg token2:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg identity:*, reg identity1:V, reg p4:p(V +), reg r9:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg pfilename:*, reg pfilename1:V, reg inherits:cls, reg r12:V, reg c:L, reg character:cls, reg r13:V, reg path_expand:cls, reg pfilename2:*, reg pfilename3:V, reg p5:p(V +), reg r17:V, reg Sys_glob:cls, reg sprintf:cls, reg pfilename_expanded:*, reg pfilename_expanded1:V, reg p6:p(V +), reg r19:V, reg p7:p(V +), reg r21:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg comps:*, reg comps1:V, reg length:cls, reg r24:V, reg r25:V, reg c1:L, reg c3:V, reg endsWith:cls, reg comps2:*, reg comps3:V, reg p8:p(V +), reg r27:V, reg c4:L, reg c5:V, reg c7:L, reg list_files:cls, reg comps4:*, reg comps5:V, reg p9:p(V +), reg r29:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:V, reg filesInside:*, reg filesInside1:V, reg length1:cls, reg r32:V, reg c8:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg comps6:*, reg comps7:V, reg file_path:cls, reg comps8:*, reg comps9:V, reg p10:p(V +), reg filesInside2:*, reg filesInside3:V, reg p11:p(V +), reg r37:V, reg c9:cls, reg r38:V, reg r39:V, reg pfilename_expanded2:*, reg pfilename_expanded3:V, reg pfilename4:*, reg pfilename5:V, reg r41:V, reg c10:L, reg sub:cls, reg path_expand1:cls, reg r42:V, reg p12:p(V +), reg comps10:*, reg comps11:V, reg p13:p(V +), reg r45:V, reg pfilename6:*, reg pfilename7:V, reg token3:*, reg token4:V, reg r47:V, reg c11:L, reg substring:cls, reg comps12:*, reg comps13:V, reg p14:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r49:V, reg r50:V, reg pfilename8:*, reg pfilename9:V, reg nchar:cls, reg r51:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r54:V, reg r55:V, reg r56:V, reg token5:*, reg token6:V, reg nchar1:cls, reg r57:V, reg r58:V, reg r59:V, reg p15:p(V +), reg r61:V, reg gsub:cls, reg comps14:*, reg comps15:V, reg p16:p(V +), reg r64:V, reg comps16:*, reg comps17:V |
    mkenv;
    st token = token;
    correctFilenameToken = ldf correctFilenameToken;
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    r = dyn correctFilenameToken();
    check L16() else D1();
  D1():
    deopt 2 [r];
  L16():
    st pfilename = r;
    tryCatch = ldf tryCatch;
    check L17() else D2();
  D2():
    deopt 5 [];
  L17():
    p3 = prom<V +>{
      eval = ldf eval;
      p2 = prom<V +>{
        str2expression = ldf str2expression;
        p1 = prom<V +>{
          paste0 = ldf paste0;
          p = prom<V +>{
            token1 = ld token;
            token2 = force? token1;
            checkMissing(token2);
            return token2;
          };
          r2 = dyn paste0("\"", p, "\"");
          return r2;
        };
        r4 = dyn str2expression(p1);
        return r4;
      };
      r6 = dyn eval(p2);
      return r6;
    };
    p4 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r9 = dyn tryCatch[, error](p3, p4);
    check L18() else D3();
  D3():
    deopt 9 [r9];
  L18():
    st pfilename = r9;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L0(r11):
    c = `as.logical`(r11);
    if c then L23() else L1();
  L19():
    pfilename = ld pfilename;
    check L21() else D4();
  L20():
    r10 = dyn base(<sym pfilename>, "error");
    goto L0(r10);
  D4():
    deopt 13 [pfilename];
  L1():
    path_expand = ldf `path.expand`;
    check L28() else D8();
  L21():
    pfilename1 = force? pfilename;
    checkMissing(pfilename1);
    inherits = ldf inherits in base;
    r12 = dyn inherits(pfilename1, "error", FALSE);
    check L22() else D5();
  L23():
    character = ldf character;
    check L24() else D6();
  D5():
    deopt 18 [r12];
  D6():
    deopt 20 [];
  D8():
    deopt 26 [];
  L22():
    goto L0(r12);
  L24():
    r13 = dyn character();
    check L25() else D7();
  L28():
    p5 = prom<V +>{
      pfilename2 = ld pfilename;
      pfilename3 = force? pfilename2;
      checkMissing(pfilename3);
      return pfilename3;
    };
    r17 = dyn path_expand(p5);
    check L29() else D9();
  D7():
    deopt 21 [r13];
  D9():
    deopt 28 [r17];
  L25():
    popenv;
    return r13;
  L29():
    st `pfilename.expanded` = r17;
    Sys_glob = ldf `Sys.glob`;
    check L30() else D10();
  D10():
    deopt 31 [];
  L30():
    p7 = prom<V +>{
      sprintf = ldf sprintf;
      p6 = prom<V +>{
        pfilename_expanded = ld `pfilename.expanded`;
        pfilename_expanded1 = force? pfilename_expanded;
        checkMissing(pfilename_expanded1);
        return pfilename_expanded1;
      };
      r19 = dyn sprintf("%s*", p6);
      return r19;
    };
    r21 = dyn Sys_glob[, dirmark](p7, TRUE);
    check L31() else D11();
  D11():
    deopt 35 [r21];
  L31():
    st comps = r21;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L3(r23):
    r25 = `==`(r23, 1.0);
    c1 = `as.logical`(r25);
    if c1 then L36() else L4(c1);
  L32():
    comps = ld comps;
    check L34() else D12();
  L33():
    r22 = dyn base1(<sym comps>);
    goto L3(r22);
  D12():
    deopt 39 [comps];
  L4(c3):
    c7 = `as.logical`(c3);
    if c7 then L40() else L5();
  L34():
    comps1 = force? comps;
    checkMissing(comps1);
    length = ldf length in base;
    r24 = dyn length(comps1);
    check L35() else D13();
  L36():
    endsWith = ldf endsWith;
    check L37() else D14();
  D13():
    deopt 42 [r24];
  D14():
    deopt 46 [c1];
  L5():
    goto L10();
  L10():
    pfilename_expanded2 = ld `pfilename.expanded`;
    check L56() else D24();
  L35():
    goto L3(r24);
  L37():
    p8 = prom<V +>{
      comps2 = ld comps;
      comps3 = force? comps2;
      checkMissing(comps3);
      return comps3;
    };
    r27 = dyn endsWith(p8, "/");
    check L38() else D15();
  L40():
    list_files = ldf `list.files`;
    check L41() else D16();
  D15():
    deopt 49 [c1, r27];
  D16():
    deopt 52 [];
  D24():
    deopt 84 [pfilename_expanded2];
  L38():
    c4 = `as.logical`(r27);
    c5 = `&&`(c1, c4);
    goto L4(c5);
  L41():
    p9 = prom<V +>{
      comps4 = ld comps;
      comps5 = force? comps4;
      checkMissing(comps5);
      return comps5;
    };
    r29 = dyn list_files[, `all.files`, `full.names`, `no..`](p9, TRUE, FALSE, TRUE);
    check L42() else D17();
  L56():
    pfilename_expanded3 = force? pfilename_expanded2;
    checkMissing(pfilename_expanded3);
    pfilename4 = ld pfilename;
    check L57() else D25();
  D17():
    deopt 60 [r29];
  D25():
    deopt 85 [pfilename_expanded3, pfilename4];
  L42():
    st filesInside = r29;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L43() else L44();
  L57():
    pfilename5 = force? pfilename4;
    checkMissing(pfilename5);
    r41 = `!=`(pfilename_expanded3, pfilename5);
    c10 = `as.logical`(r41);
    if c10 then L58() else L11();
  L6(r31):
    c8 = `as.logical`(r31);
    if c8 then L47() else L7();
  L11():
    goto L12();
  L12():
    pfilename6 = ld pfilename;
    check L62() else D28();
  L43():
    filesInside = ld filesInside;
    check L45() else D18();
  L44():
    r30 = dyn base2(<sym filesInside>);
    goto L6(r30);
  L58():
    sub = ldf sub;
    check L59() else D26();
  D18():
    deopt 64 [filesInside];
  D26():
    deopt 89 [];
  D28():
    deopt 99 [pfilename6];
  L7():
    goto L9(NULL);
  L9(r39):
    goto L10();
  L45():
    filesInside1 = force? filesInside;
    checkMissing(filesInside1);
    length1 = ldf length in base;
    r32 = dyn length1(filesInside1);
    check L46() else D19();
  L47():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L59():
    p12 = prom<V +>{
      path_expand1 = ldf `path.expand`;
      r42 = dyn path_expand1("~");
      return r42;
    };
    p13 = prom<V +>{
      comps10 = ld comps;
      comps11 = force? comps10;
      checkMissing(comps11);
      return comps11;
    };
    r45 = dyn sub[, , , fixed](p12, "~", p13, TRUE);
    check L60() else D27();
  L62():
    pfilename7 = force? pfilename6;
    checkMissing(pfilename7);
    token3 = ld token;
    check L63() else D29();
  D19():
    deopt 67 [r32];
  D27():
    deopt 95 [r45];
  D29():
    deopt 100 [pfilename7, token3];
  L8(r34):
    st comps = r34;
    goto L9(r34);
  L46():
    goto L6(r32);
  L48():
    comps6 = ld comps;
    check L50() else D20();
  L49():
    r33 = dyn base3(<sym comps>, <lang file.path(comps, filesInside)>);
    goto L8(r33);
  L60():
    st comps = r45;
    goto L12();
  L63():
    token4 = force? token3;
    checkMissing(token4);
    r47 = `!=`(pfilename7, token4);
    c11 = `as.logical`(r47);
    if c11 then L64() else L13();
  D20():
    deopt 70 [comps6];
  L13():
    goto L14();
  L14():
    gsub = ldf gsub;
    check L68() else D32();
  L50():
    comps7 = force? comps6;
    checkMissing(comps7);
    file_path = ldf `file.path`;
    check L51() else D21();
  L64():
    substring = ldf substring;
    check L65() else D30();
  D21():
    deopt 73 [];
  D30():
    deopt 104 [];
  D32():
    deopt 113 [];
  L51():
    p10 = prom<V +>{
      comps8 = ld comps;
      comps9 = force? comps8;
      checkMissing(comps9);
      return comps9;
    };
    p11 = prom<V +>{
      filesInside2 = ld filesInside;
      filesInside3 = force? filesInside2;
      checkMissing(filesInside3);
      return filesInside3;
    };
    r37 = dyn file_path(p10, p11);
    check L52() else D22();
  L65():
    p14 = prom<V +>{
      comps12 = ld comps;
      comps13 = force? comps12;
      checkMissing(comps13);
      return comps13;
    };
    p15 = prom<V +>{
      sym4 = ldf nchar;
      base4 = ldf nchar in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r50):
      sym5 = ldf nchar;
      base5 = ldf nchar in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L4() else L5();
    L2():
      pfilename8 = ld pfilename;
      pfilename9 = force? pfilename8;
      checkMissing(pfilename9);
      nchar = ldf nchar in base;
      r51 = dyn nchar(pfilename9, "chars", FALSE, NA_LGL);
      goto L0(r51);
    L3():
      r49 = dyn base4(<sym pfilename>);
      goto L0(r49);
    L1(r55, r56):
      r58 = `-`(r55, r56);
      r59 = `+`(r58, 1);
      return r59;
    L4():
      token5 = ld token;
      token6 = force? token5;
      checkMissing(token6);
      nchar1 = ldf nchar in base;
      r57 = dyn nchar1(token6, "chars", FALSE, NA_LGL);
      goto L1(r50, r57);
    L5():
      r54 = dyn base5(<sym token>);
      goto L1(r50, r54);
    };
    r61 = dyn substring(p14, p15, 1000);
    check L66() else D31();
  L68():
    p16 = prom<V +>{
      comps14 = ld comps;
      comps15 = force? comps14;
      checkMissing(comps15);
      return comps15;
    };
    r64 = dyn gsub("([\\\\'\"])", "\\\\\\1", p16);
    check L69() else D33();
  D22():
    deopt 76 [r37];
  D31():
    deopt 108 [r61];
  D33():
    deopt 117 [r64];
  L52():
    c9 = ldf c in base;
    r38 = dyn c9(comps7, r37);
    check L53() else D23();
  L66():
    st comps = r61;
    goto L14();
  L69():
    st comps = r64;
    comps16 = ld comps;
    check L70() else D34();
  D23():
    deopt 78 [r38];
  D34():
    deopt 119 [comps16];
  L53():
    goto L8(r38);
  L70():
    comps17 = force? comps16;
    checkMissing(comps17);
    popenv;
    return comps17;
  }
}