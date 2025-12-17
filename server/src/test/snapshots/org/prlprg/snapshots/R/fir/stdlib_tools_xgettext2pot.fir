fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3840841519;
    st xgettext2pot = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3840841519(dir, potFile, name, version, bugs) {
  (reg dir:*, reg potFile:*, reg name:*, reg version:*, reg bugs:*) -+> V { var dir:*, var potFile:*, var name:*, reg name_isMissing:L, reg name_orDefault:*, var version:*, var bugs:*, reg file_path_as_absolute:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg missing:cls, reg r4:V, reg c:L, reg paste0:cls, reg basename:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg unique:cls, reg unlist:cls, reg xgettext:cls, reg dir5:*, reg dir6:V, reg p3:p(V +), reg r11:V, reg p4:p(V +), reg r13:V, reg p5:p(V +), reg r15:V, reg msgid:*, reg msgid1:V, reg c1:L, reg msgid3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg msgid6:V, reg r17:V, reg msgid7:*, reg msgid8:V, reg nzchar:cls, reg r18:V, reg __:cls, reg r19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg msgid9:*, reg msgid10:V, reg length:cls, reg r22:V, reg r23:V, reg c2:L, reg shQuote:cls, reg encodeString:cls, reg msgid11:*, reg msgid12:V, reg p6:p(V +), reg r25:V, reg p7:p(V +), reg r27:V, reg xngettext:cls, reg dir7:*, reg dir8:V, reg p8:p(V +), reg r30:V, reg unique1:cls, reg unlist1:cls, reg msgid_plural:*, reg msgid_plural1:V, reg p9:p(V +), reg r32:V, reg p10:p(V +), reg r34:V, reg file:cls, reg potFile1:*, reg potFile2:V, reg p11:p(V +), reg r36:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r37:V, reg on_exit:cls, reg r39:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r40:V, reg r41:V, reg missing1:cls, reg r42:V, reg c3:L, reg paste1:cls, reg R_version:*, reg R_version1:V, reg c4:L, reg R_version3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r43:V, reg p12:p(V +), reg R_version4:*, reg R_version5:V, reg c5:L, reg R_version7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r45:V, reg p13:p(V +), reg r47:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r49:V, reg r50:V, reg missing2:cls, reg r51:V, reg c6:L, reg writeLines:cls, reg con:*, reg con1:V, reg p14:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r54:V, reg r55:V, reg sprintf:cls, reg name1:*, reg name2:V, reg p15:p(V +), reg version1:*, reg version2:V, reg p16:p(V +), reg r58:V, reg sprintf1:cls, reg bugs1:*, reg bugs2:V, reg p17:p(V +), reg r60:V, reg paste2:cls, reg format:cls, reg Sys_time:cls, reg r61:V, reg p18:p(V +), reg r63:V, reg p19:p(V +), reg r65:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r66:V, reg r67:V, reg un:*, reg un1:V, reg length1:cls, reg r68:V, reg c7:L, reg r69:V, reg c8:cls, reg r70:V, reg p20:p(V +), reg r72:V, reg msgid13:*, reg msgid14:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c9:L, reg x:V, reg writeLines1:cls, reg con2:*, reg con3:V, reg p21:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r74:V, reg r75:V, reg paste3:cls, reg e:*, reg e1:V, reg p22:p(V +), reg r77:V, reg c10:cls, reg r78:V, reg p23:p(V +), reg r80:V, reg msgid_plural2:*, reg msgid_plural3:V, reg s1:V, reg l1:I, reg i5:I, reg i6:I, reg i7:I, reg c11:L, reg x1:V, reg ee:*, reg ee1:V, reg s2:V, reg l2:I, reg i10:I, reg i11:I, reg i12:I, reg i13:I, reg c12:L, reg x2:V, reg _in_:cls, reg e2:*, reg e3:V, reg c13:L, reg e5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __1:cls, reg r81:V, reg p24:p(V +), reg un2:*, reg un3:V, reg p25:p(V +), reg r84:V, reg c14:L, reg writeLines2:cls, reg con4:*, reg con5:V, reg p26:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r86:V, reg r87:V, reg paste4:cls, reg shQuote1:cls, reg encodeString1:cls, reg e6:*, reg e7:V, reg c15:L, reg e9:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __2:cls, reg r88:V, reg p27:p(V +), reg r90:V, reg p28:p(V +), reg r92:V, reg p29:p(V +), reg r94:V, reg paste5:cls, reg shQuote2:cls, reg encodeString2:cls, reg e10:*, reg e11:V, reg c16:L, reg e13:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __3:cls, reg r95:V, reg p30:p(V +), reg r97:V, reg p31:p(V +), reg r99:V, reg p32:p(V +), reg r101:V, reg c17:cls, reg r102:V, reg p33:p(V +), reg r104:V, reg un4:*, reg un5:V, reg c18:L, reg i24:I, reg i25:I, reg un7:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i28:I, reg i29:I, reg dx13:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r105:V, reg i34:I, reg i35:I, reg un10:V, reg r106:V, reg e14:*, reg e15:V, reg un11:*, reg un12:V, reg match:cls, reg r107:V, reg r108:V, reg __4:cls, reg r109:V, reg i36:I, reg i37:I |
    mkenv;
    st dir = dir;
    st potFile = potFile;
    name_isMissing = missing.0(name);
    if name_isMissing then L0("R") else L0(name);
  L0(name_orDefault):
    st name = name_orDefault;
    st version = version;
    st bugs = bugs;
    file_path_as_absolute = ldf file_path_as_absolute;
    check L26() else D0();
  D0():
    deopt 1 [];
  L26():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn file_path_as_absolute(p);
    check L27() else D1();
  D1():
    deopt 3 [r1];
  L27():
    st dir = r1;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L1(r3):
    c = `as.logical`(r3);
    if c then L30() else L2();
  L28():
    missing = ldf missing in base;
    r4 = dyn missing(<sym potFile>);
    goto L1(r4);
  L29():
    r2 = dyn base(<sym potFile>);
    goto L1(r2);
  L2():
    goto L3();
  L3():
    unique = ldf unique;
    check L34() else D4();
  L30():
    paste0 = ldf paste0;
    check L31() else D2();
  D2():
    deopt 9 [];
  D4():
    deopt 18 [];
  L31():
    p2 = prom<V +>{
      basename = ldf basename;
      p1 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r6 = dyn basename(p1);
      return r6;
    };
    r8 = dyn paste0("R-", p2, ".pot");
    check L32() else D3();
  L34():
    p5 = prom<V +>{
      unlist = ldf unlist;
      p4 = prom<V +>{
        xgettext = ldf xgettext;
        p3 = prom<V +>{
          dir5 = ld dir;
          dir6 = force? dir5;
          checkMissing(dir6);
          return dir6;
        };
        r11 = dyn xgettext[, asCall](p3, FALSE);
        return r11;
      };
      r13 = dyn unlist(p4);
      return r13;
    };
    r15 = dyn unique(p5);
    check L35() else D5();
  D3():
    deopt 13 [r8];
  D5():
    deopt 20 [r15];
  L32():
    st potFile = r8;
    goto L3();
  L35():
    st msgid = r15;
    msgid = ld msgid;
    check L36() else D6();
  D6():
    deopt 22 [msgid];
  L36():
    msgid1 = force? msgid;
    checkMissing(msgid1);
    c1 = `is.object`(msgid1);
    if c1 then L37() else L38(msgid1);
  L4(dx1):
    st msgid = dx1;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L44() else L45();
  L37():
    dr = tryDispatchBuiltin.1("[", msgid1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L39() else L38(dr);
  L38(msgid3):
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  L5(msgid6, r17):
    __ = ldf `[` in base;
    r19 = dyn __(msgid6, r17);
    goto L4(r19);
  L6(r21):
    r23 = `>`(r21, 0);
    c2 = `as.logical`(r23);
    if c2 then L48() else L7();
  L39():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L40():
    msgid7 = ld msgid;
    check L42() else D7();
  L41():
    r16 = dyn base1(<sym msgid>);
    goto L5(msgid3, r16);
  L44():
    msgid9 = ld msgid;
    check L46() else D9();
  L45():
    r20 = dyn base2(<sym msgid>);
    goto L6(r20);
  D7():
    deopt 26 [msgid3, msgid7];
  D9():
    deopt 34 [msgid9];
  L7():
    goto L8();
  L8():
    xngettext = ldf xngettext;
    check L52() else D13();
  L42():
    msgid8 = force? msgid7;
    checkMissing(msgid8);
    nzchar = ldf nzchar in base;
    r18 = dyn nzchar(msgid8);
    check L43() else D8();
  L46():
    msgid10 = force? msgid9;
    checkMissing(msgid10);
    length = ldf length in base;
    r22 = dyn length(msgid10);
    check L47() else D10();
  L48():
    shQuote = ldf shQuote;
    check L49() else D11();
  D8():
    deopt 29 [msgid3, r18];
  D10():
    deopt 37 [r22];
  D11():
    deopt 41 [];
  D13():
    deopt 50 [];
  L43():
    goto L5(msgid3, r18);
  L47():
    goto L6(r22);
  L49():
    p7 = prom<V +>{
      encodeString = ldf encodeString;
      p6 = prom<V +>{
        msgid11 = ld msgid;
        msgid12 = force? msgid11;
        checkMissing(msgid12);
        return msgid12;
      };
      r25 = dyn encodeString(p6);
      return r25;
    };
    r27 = dyn shQuote[, type](p7, "cmd");
    check L50() else D12();
  L52():
    p8 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    r30 = dyn xngettext(p8);
    check L53() else D14();
  D12():
    deopt 45 [r27];
  D14():
    deopt 52 [r30];
  L50():
    st msgid = r27;
    goto L8();
  L53():
    st msgid_plural = r30;
    unique1 = ldf unique;
    check L54() else D15();
  D15():
    deopt 55 [];
  L54():
    p10 = prom<V +>{
      unlist1 = ldf unlist;
      p9 = prom<V +>{
        msgid_plural = ld msgid_plural;
        msgid_plural1 = force? msgid_plural;
        checkMissing(msgid_plural1);
        return msgid_plural1;
      };
      r32 = dyn unlist1(p9);
      return r32;
    };
    r34 = dyn unique1(p10);
    check L55() else D16();
  D16():
    deopt 57 [r34];
  L55():
    st un = r34;
    file = ldf file;
    check L56() else D17();
  D17():
    deopt 60 [];
  L56():
    p11 = prom<V +>{
      potFile1 = ld potFile;
      potFile2 = force? potFile1;
      checkMissing(potFile2);
      return potFile2;
    };
    r36 = dyn file(p11, "wt");
    check L57() else D18();
  D18():
    deopt 63 [r36];
  L57():
    st con = r36;
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L58() else L59();
  L9():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L60() else L61();
  L58():
    on_exit = ldf `on.exit` in base;
    r39 = dyn on_exit(<lang close(con)>);
    goto L9();
  L59():
    r37 = dyn base3(<lang close(con)>);
    goto L9();
  L10(r41):
    c3 = `as.logical`(r41);
    if c3 then L62() else L11();
  L60():
    missing1 = ldf missing in base;
    r42 = dyn missing1(<sym version>);
    goto L10(r42);
  L61():
    r40 = dyn base4(<sym version>);
    goto L10(r40);
  L11():
    goto L12();
  L12():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L66() else L67();
  L62():
    paste1 = ldf paste;
    check L63() else D19();
  D19():
    deopt 72 [];
  L13(r50):
    c6 = `as.logical`(r50);
    if c6 then L68() else L14();
  L63():
    p12 = prom<V +>{
      R_version = ld `R.version`;
      R_version1 = force? R_version;
      checkMissing(R_version1);
      c4 = `is.object`(R_version1);
      if c4 then L1() else L2(R_version1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", R_version1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(R_version3):
      r43 = `$`(R_version3, <sym major>);
      goto L0(r43);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p13 = prom<V +>{
      R_version4 = ld `R.version`;
      R_version5 = force? R_version4;
      checkMissing(R_version5);
      c5 = `is.object`(R_version5);
      if c5 then L1() else L2(R_version5);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", R_version5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(R_version7):
      r45 = `$`(R_version7, <sym minor>);
      goto L0(r45);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r47 = dyn paste1[, , sep](p12, p13, ".");
    check L64() else D20();
  L66():
    missing2 = ldf missing in base;
    r51 = dyn missing2(<sym bugs>);
    goto L13(r51);
  L67():
    r49 = dyn base5(<sym bugs>);
    goto L13(r49);
  D20():
    deopt 77 [r47];
  L14():
    goto L15();
  L15():
    writeLines = ldf writeLines;
    check L70() else D21();
  L64():
    st version = r47;
    goto L12();
  L68():
    st bugs = "bugs.r-project.org";
    goto L15();
  D21():
    deopt 90 [];
  L70():
    p14 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    p20 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L4() else L5();
    L0(r55):
      return r55;
    L4():
      sprintf = ldf sprintf;
      p15 = prom<V +>{
        name1 = ld name;
        name2 = force? name1;
        checkMissing(name2);
        return name2;
      };
      p16 = prom<V +>{
        version1 = ld version;
        version2 = force? version1;
        checkMissing(version2);
        return version2;
      };
      r58 = dyn sprintf("\"Project-Id-Version: %s %s\\n\"", p15, p16);
      sprintf1 = ldf sprintf;
      p17 = prom<V +>{
        bugs1 = ld bugs;
        bugs2 = force? bugs1;
        checkMissing(bugs2);
        return bugs2;
      };
      r60 = dyn sprintf1("\"Report-Msgid-Bugs-To: %s\\n\"", p17);
      paste2 = ldf paste0;
      p19 = prom<V +>{
        format = ldf format;
        p18 = prom<V +>{
          Sys_time = ldf `Sys.time`;
          r61 = dyn Sys_time();
          return r61;
        };
        r63 = dyn format(p18, "%Y-%m-%d %H:%M");
        return r63;
      };
      r65 = dyn paste2("\"POT-Creation-Date: ", p19, "\\n\"");
      sym7 = ldf length;
      base7 = ldf length in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L6() else L7();
    L5():
      r54 = dyn base6("msgid \"\"", "msgstr \"\"", <lang sprintf("\"Project-Id-Version: %s %s\\n\"", name, version)>, <lang sprintf("\"Report-Msgid-Bugs-To: %s\\n\"", bugs)>, <lang paste0("\"POT-Creation-Date: ", format(Sys.time(), "%Y-%m-%d %H:%M"), "\\n\"")>, "\"PO-Revision-Date: YEAR-MO-DA HO:MI+ZONE\\n\"", "\"Last-Translator: FULL NAME <EMAIL@ADDRESS>\\n\"", "\"Language-Team: LANGUAGE <LL@li.org>\\n\"", "\"Language: \\n\"", "\"MIME-Version: 1.0\\n\"", "\"Content-Type: text/plain; charset=CHARSET\\n\"", "\"Content-Transfer-Encoding: 8bit\\n\"", <lang if(length(un), "\"Plural-Forms: nplurals=INTEGER; plural=EXPRESSION;\\n\"")>);
      goto L0(r54);
    L1(r67):
      c7 = `as.logical`(r67);
      if c7 then L8() else L2();
    L6():
      un = ld un;
      un1 = force? un;
      checkMissing(un1);
      length1 = ldf length in base;
      r68 = dyn length1(un1);
      goto L1(r68);
    L7():
      r66 = dyn base7(<sym un>);
      goto L1(r66);
    L2():
      goto L3(NULL);
    L3(r69):
      c8 = ldf c in base;
      r70 = dyn c8("msgid \"\"", "msgstr \"\"", r58, r60, r65, "\"PO-Revision-Date: YEAR-MO-DA HO:MI+ZONE\\n\"", "\"Last-Translator: FULL NAME <EMAIL@ADDRESS>\\n\"", "\"Language-Team: LANGUAGE <LL@li.org>\\n\"", "\"Language: \\n\"", "\"MIME-Version: 1.0\\n\"", "\"Content-Type: text/plain; charset=CHARSET\\n\"", "\"Content-Transfer-Encoding: 8bit\\n\"", r69);
      goto L0(r70);
    L8():
      goto L3("\"Plural-Forms: nplurals=INTEGER; plural=EXPRESSION;\\n\"");
    };
    r72 = dyn writeLines[con, ](p14, p20);
    check L71() else D22();
  D22():
    deopt 94 [r72];
  L71():
    msgid13 = ld msgid;
    check L72() else D23();
  D23():
    deopt 95 [msgid13];
  L72():
    msgid14 = force? msgid13;
    checkMissing(msgid14);
    s = toForSeq(msgid14);
    l = length(s);
    i = 0;
    goto L16(i);
  L16(i1):
    i2 = `+`.1(i1, 1);
    c9 = `<`.1(l, i2);
    if c9 then L73() else L17();
  L17():
    x = `[[`(s, i2, NULL, TRUE);
    st e = x;
    writeLines1 = ldf writeLines;
    check L74() else D24();
  L73():
    msgid_plural2 = ld msgid_plural;
    check L76() else D26();
  D24():
    deopt 98 [i2];
  D26():
    deopt 106 [msgid_plural2];
  L74():
    p21 = prom<V +>{
      con2 = ld con;
      con3 = force? con2;
      checkMissing(con3);
      return con3;
    };
    p23 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r75):
      return r75;
    L1():
      paste3 = ldf paste;
      p22 = prom<V +>{
        e = ld e;
        e1 = force? e;
        checkMissing(e1);
        return e1;
      };
      r77 = dyn paste3("msgid", p22);
      c10 = ldf c in base;
      r78 = dyn c10("", r77, "msgstr \"\"");
      goto L0(r78);
    L2():
      r74 = dyn base8("", <lang paste("msgid", e)>, "msgstr \"\"");
      goto L0(r74);
    };
    r80 = dyn writeLines1[con, ](p21, p23);
    check L75() else D25();
  L76():
    msgid_plural3 = force? msgid_plural2;
    checkMissing(msgid_plural3);
    s1 = toForSeq(msgid_plural3);
    l1 = length(s1);
    i5 = 0;
    goto L18(i5);
  D25():
    deopt 102 [i2, r80];
  L18(i6):
    i7 = `+`.1(i6, 1);
    c11 = `<`.1(l1, i7);
    if c11 then L77() else L25();
  L75():
    goto L16(i2);
  L25():
    x1 = `[[`(s1, i7, NULL, TRUE);
    st ee = x1;
    ee = ld ee;
    check L78() else D27();
  L77():
    invisible.0();
    popenv;
    return i7;
  D27():
    deopt 108 [i7, ee];
  L78():
    ee1 = force? ee;
    checkMissing(ee1);
    s2 = toForSeq(ee1);
    l2 = length(s2);
    i10 = 0;
    goto L19(i7, i10);
  L19(i11, i12):
    i13 = `+`.1(i12, 1);
    c12 = `<`.1(l2, i13);
    if c12 then L79() else L24();
  L24():
    x2 = `[[`(s2, i13, NULL, TRUE);
    st e = x2;
    _in_ = ldf `%in%`;
    check L80() else D28();
  L79():
    goto L18(i11);
  D28():
    deopt 111 [i11, i13];
  L80():
    p24 = prom<V +>{
      e2 = ld e;
      e3 = force? e2;
      checkMissing(e3);
      c13 = `is.object`(e3);
      if c13 then L1() else L2(e3);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", e3);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(e5):
      __1 = ldf `[` in base;
      r81 = dyn __1(e5, 1);
      goto L0(r81);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p25 = prom<V +>{
      un2 = ld un;
      un3 = force? un2;
      checkMissing(un3);
      return un3;
    };
    r84 = dyn _in_(p24, p25);
    check L81() else D29();
  D29():
    deopt 114 [i11, i13, r84];
  L81():
    c14 = `as.logical`(r84);
    if c14 then L82() else L20();
  L20():
    goto L23(i11, i13);
  L23(i36, i37):
    goto L19(i36, i37);
  L82():
    writeLines2 = ldf writeLines;
    check L83() else D30();
  D30():
    deopt 116 [i11, i13];
  L83():
    p26 = prom<V +>{
      con4 = ld con;
      con5 = force? con4;
      checkMissing(con5);
      return con5;
    };
    p33 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r87):
      return r87;
    L1():
      paste4 = ldf paste;
      p29 = prom<V +>{
        shQuote1 = ldf shQuote;
        p28 = prom<V +>{
          encodeString1 = ldf encodeString;
          p27 = prom<V +>{
            e6 = ld e;
            e7 = force? e6;
            checkMissing(e7);
            c15 = `is.object`(e7);
            if c15 then L1() else L2(e7);
          L0(dx9):
            return dx9;
          L1():
            dr8 = tryDispatchBuiltin.1("[", e7);
            dc4 = getTryDispatchBuiltinDispatched(dr8);
            if dc4 then L3() else L2(dr8);
          L2(e9):
            __2 = ldf `[` in base;
            r88 = dyn __2(e9, 1);
            goto L0(r88);
          L3():
            dx8 = getTryDispatchBuiltinValue(dr8);
            goto L0(dx8);
          };
          r90 = dyn encodeString1(p27);
          return r90;
        };
        r92 = dyn shQuote1[, type](p28, "cmd");
        return r92;
      };
      r94 = dyn paste4("msgid       ", p29);
      paste5 = ldf paste;
      p32 = prom<V +>{
        shQuote2 = ldf shQuote;
        p31 = prom<V +>{
          encodeString2 = ldf encodeString;
          p30 = prom<V +>{
            e10 = ld e;
            e11 = force? e10;
            checkMissing(e11);
            c16 = `is.object`(e11);
            if c16 then L1() else L2(e11);
          L0(dx11):
            return dx11;
          L1():
            dr10 = tryDispatchBuiltin.1("[", e11);
            dc5 = getTryDispatchBuiltinDispatched(dr10);
            if dc5 then L3() else L2(dr10);
          L2(e13):
            __3 = ldf `[` in base;
            r95 = dyn __3(e13, 2);
            goto L0(r95);
          L3():
            dx10 = getTryDispatchBuiltinValue(dr10);
            goto L0(dx10);
          };
          r97 = dyn encodeString2(p30);
          return r97;
        };
        r99 = dyn shQuote2[, type](p31, "cmd");
        return r99;
      };
      r101 = dyn paste5("msgid_plural", p32);
      c17 = ldf c in base;
      r102 = dyn c17("", r94, r101, "msgstr[0]    \"\"", "msgstr[1]    \"\"");
      goto L0(r102);
    L2():
      r86 = dyn base9("", <lang paste("msgid       ", shQuote(encodeString(`[`(e, 1)), type="cmd"))>, <lang paste("msgid_plural", shQuote(encodeString(`[`(e, 2)), type="cmd"))>, "msgstr[0]    \"\"", "msgstr[1]    \"\"");
      goto L0(r86);
    };
    r104 = dyn writeLines2[con, ](p26, p33);
    check L84() else D31();
  D31():
    deopt 120 [i11, i13, r104];
  L84():
    un4 = ld un;
    check L85() else D32();
  D32():
    deopt 121 [i11, i13, un4];
  L85():
    un5 = force? un4;
    checkMissing(un5);
    c18 = `is.object`(un5);
    if c18 then L86() else L87(i11, i13, un5);
  L21(i28, i29, dx13):
    st un = dx13;
    goto L23(i28, i29);
  L86():
    dr12 = tryDispatchBuiltin.1("[", un5);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L88() else L87(i11, i13, dr12);
  L87(i24, i25, un7):
    sym10 = ldf match;
    base10 = ldf match in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L89() else L90();
  L22(i34, i35, un10, r106):
    r108 = `-`(<missing>, r106);
    __4 = ldf `[` in base;
    r109 = dyn __4(un10, r108);
    goto L21(i34, i35, r109);
  L88():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L21(i11, i13, dx12);
  L89():
    e14 = ld e;
    check L91() else D33();
  L90():
    r105 = dyn base10(<sym e>, <sym un>);
    goto L22(i24, i25, un7, r105);
  D33():
    deopt 125 [i24, i25, un7, e14];
  L91():
    e15 = force? e14;
    checkMissing(e15);
    un11 = ld un;
    check L92() else D34();
  D34():
    deopt 127 [i24, i25, un7, un11];
  L92():
    un12 = force? un11;
    checkMissing(un12);
    match = ldf match in base;
    r107 = dyn match(e15, un12, NA_INT, NULL);
    check L93() else D35();
  D35():
    deopt 132 [i24, i25, un7, r107];
  L93():
    goto L22(i24, i25, un7, r107);
  }
}