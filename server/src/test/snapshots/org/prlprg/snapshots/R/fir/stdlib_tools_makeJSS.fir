fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st makeJSS = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg r:cls, reg r1:cls, reg r2:cls, reg r3:cls, reg r4:cls, reg r5:cls, reg r6:cls, reg r7:cls, reg r8:cls, reg plainclean:*, reg plainclean1:V, reg emphclean:*, reg emphclean1:V, reg emphclean2:*, reg emphclean3:V, reg labelclean:cls, reg r9:V, reg label:cls, reg r10:V, reg labelclean1:cls, reg r11:V, reg plain:*, reg plain1:V, reg plainclean2:*, reg plainclean3:V, reg label1:cls, reg r12:V, reg label2:cls, reg r13:V, reg plainclean4:*, reg plainclean5:V, reg plainclean6:*, reg plainclean7:V, reg plain2:*, reg plain3:V, reg plainclean8:*, reg plainclean9:V, reg label3:cls, reg r14:V, reg r15:cls, reg r16:cls, reg r17:cls, reg r18:cls, reg r19:cls, reg r20:cls, reg r21:cls, reg r22:cls, reg r23:cls, reg r24:cls, reg r25:cls, reg r26:cls, reg r27:cls, reg r28:cls, reg r29:cls, reg r30:cls, reg r31:cls, reg r32:cls, reg r33:cls, reg r34:cls, reg r35:cls, reg r36:cls, reg r37:cls, reg r38:cls, reg r39:cls, reg r40:cls, reg r41:cls, reg environment:cls, reg r42:V |
    mkenv;
    r = clos inner3069041918;
    st collapse = r;
    r1 = clos inner2074706417;
    st addPeriod = r1;
    r2 = clos inner3010245897;
    st sentence = r2;
    r3 = clos inner3387720256;
    st plain = r3;
    r4 = clos inner1236783023;
    st plainclean = r4;
    r5 = clos inner1236783023;
    st emph = r5;
    r6 = clos inner1236783023;
    st emphclean = r6;
    r7 = clos inner499374233;
    st label = r7;
    r8 = clos inner499374233;
    st labelclean = r8;
    plainclean = ld plainclean;
    check L0() else D0();
  D0():
    deopt 27 [plainclean];
  L0():
    plainclean1 = force? plainclean;
    checkMissing(plainclean1);
    st fmtAddress = plainclean1;
    emphclean = ld emphclean;
    check L1() else D1();
  D1():
    deopt 30 [emphclean];
  L1():
    emphclean1 = force? emphclean;
    checkMissing(emphclean1);
    st fmtBook = emphclean1;
    emphclean2 = ld emphclean;
    check L2() else D2();
  D2():
    deopt 33 [emphclean2];
  L2():
    emphclean3 = force? emphclean2;
    checkMissing(emphclean3);
    st fmtBtitle = emphclean3;
    labelclean = ldf labelclean;
    check L3() else D3();
  D3():
    deopt 37 [];
  L3():
    r9 = dyn labelclean[prefix]("chapter ");
    check L4() else D4();
  D4():
    deopt 40 [r9];
  L4():
    st fmtChapter = r9;
    label = ldf label;
    check L5() else D5();
  D5():
    deopt 43 [];
  L5():
    r10 = dyn label[prefix, suffix]("\\doi{", "}");
    check L6() else D6();
  D6():
    deopt 48 [r10];
  L6():
    st fmtDOI = r10;
    labelclean1 = ldf labelclean;
    check L7() else D7();
  D7():
    deopt 51 [];
  L7():
    r11 = dyn labelclean1[suffix](" edition");
    check L8() else D8();
  D8():
    deopt 54 [r11];
  L8():
    st fmtEdition = r11;
    plain = ld plain;
    check L9() else D9();
  D9():
    deopt 56 [plain];
  L9():
    plain1 = force? plain;
    checkMissing(plain1);
    st fmtEprint = plain1;
    plainclean2 = ld plainclean;
    check L10() else D10();
  D10():
    deopt 59 [plainclean2];
  L10():
    plainclean3 = force? plainclean2;
    checkMissing(plainclean3);
    st fmtHowpublished = plainclean3;
    label1 = ldf label;
    check L11() else D11();
  D11():
    deopt 63 [];
  L11():
    r12 = dyn label1[prefix]("ISBN ");
    check L12() else D12();
  D12():
    deopt 66 [r12];
  L12():
    st fmtISBN = r12;
    label2 = ldf label;
    check L13() else D13();
  D13():
    deopt 69 [];
  L13():
    r13 = dyn label2[prefix]("ISSN ");
    check L14() else D14();
  D14():
    deopt 72 [r13];
  L14():
    st fmtISSN = r13;
    plainclean4 = ld plainclean;
    check L15() else D15();
  D15():
    deopt 74 [plainclean4];
  L15():
    plainclean5 = force? plainclean4;
    checkMissing(plainclean5);
    st fmtInstitution = plainclean5;
    plainclean6 = ld plainclean;
    check L16() else D16();
  D16():
    deopt 77 [plainclean6];
  L16():
    plainclean7 = force? plainclean6;
    checkMissing(plainclean7);
    st fmtNote = plainclean7;
    plain2 = ld plain;
    check L17() else D17();
  D17():
    deopt 80 [plain2];
  L17():
    plain3 = force? plain2;
    checkMissing(plain3);
    st fmtPages = plain3;
    plainclean8 = ld plainclean;
    check L18() else D18();
  D18():
    deopt 83 [plainclean8];
  L18():
    plainclean9 = force? plainclean8;
    checkMissing(plainclean9);
    st fmtSchool = plainclean9;
    label3 = ldf label;
    check L19() else D19();
  D19():
    deopt 87 [];
  L19():
    r14 = dyn label3[prefix, suffix]("\\url{", "}");
    check L20() else D20();
  D20():
    deopt 92 [r14];
  L20():
    st fmtUrl = r14;
    r15 = clos inner2269073876;
    st fmtTitle = r15;
    r16 = clos inner2098303389;
    st fmtYear = r16;
    r17 = clos inner1760082575;
    st fmtType = r17;
    r18 = clos inner1346946568;
    st volNum = r18;
    r19 = clos inner1752868405;
    st shortName = r19;
    r20 = clos inner1346946568;
    st authorList = r20;
    r21 = clos inner1346946568;
    st editorList = r21;
    r22 = clos inner1346946568;
    st extraInfo = r22;
    r23 = clos inner3035723593;
    st bookVolume = r23;
    r24 = clos inner3035723593;
    st bookPublisher = r24;
    r25 = clos inner1346946568;
    st procOrganization = r25;
    r26 = clos inner1346946568;
    st fmtTechreportnumber = r26;
    r27 = clos inner1346946568;
    st formatArticle = r27;
    r28 = clos inner3035723593;
    st formatBook = r28;
    r29 = clos inner1346946568;
    st formatInbook = r29;
    r30 = clos inner1346946568;
    st formatIncollection = r30;
    r31 = clos inner1346946568;
    st formatInProceedings = r31;
    r32 = clos inner1346946568;
    st formatManual = r32;
    r33 = clos inner1346946568;
    st formatMastersthesis = r33;
    r34 = clos inner1346946568;
    st formatPhdthesis = r34;
    r35 = clos inner1346946568;
    st formatMisc = r35;
    r36 = clos inner3035723593;
    st formatProceedings = r36;
    r37 = clos inner1346946568;
    st formatTechreport = r37;
    r38 = clos inner1346946568;
    st formatUnpublished = r38;
    r39 = clos inner1622975159;
    st sortKeys = r39;
    r40 = clos inner1346946568;
    st fmtPrefix = r40;
    r41 = clos inner966629742;
    st cite = r41;
    environment = ldf environment;
    check L21() else D21();
  D21():
    deopt 176 [];
  L21():
    r42 = dyn environment();
    check L22() else D22();
  D22():
    deopt 177 [r42];
  L22():
    popenv;
    return r42;
  }
}
fun inner3069041918(strings) {
  (reg strings:*) -+> V { var strings:*, reg paste:cls, reg strings1:*, reg strings2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st strings = strings;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      strings1 = ld strings;
      strings2 = force? strings1;
      checkMissing(strings2);
      return strings2;
    };
    r1 = dyn paste[, collapse](p, "\n");
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner2074706417(string) {
  (reg string:*) -+> V { var string:*, reg sub:cls, reg string1:*, reg string2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st string = string;
    sub = ldf sub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      string1 = ld string;
      string2 = force? string1;
      checkMissing(string2);
      return string2;
    };
    r1 = dyn sub("([^.?!])$", "\\1.", p);
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner3010245897(`...`, sep) {
  (reg ddd:dots, reg sep:*) -+> V { var `...`:dots?, var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg ddd1:dots?, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg strings:*, reg strings1:V, reg length:cls, reg r5:V, reg c1:L, reg addPeriod:cls, reg paste:cls, reg strings2:*, reg strings3:V, reg p:p(V +), reg sep1:*, reg sep2:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V |
    mkenv;
    st `...` = ddd;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L0(", ") else L0(sep);
  L0(sep_orDefault):
    st sep = sep_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L1(r1):
    st strings = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4():
    c = ldf c;
    check L6() else D0();
  L5():
    r = dyn base(<sym ...>);
    goto L1(r);
  D0():
    deopt 2 [];
  L2(r4):
    c1 = `as.logical`(r4);
    if c1 then L12() else L3();
  L6():
    ddd1 = ld `...`;
    r2 = dyn c[`...`](ddd1);
    check L7() else D1();
  L8():
    strings = ld strings;
    check L10() else D2();
  L9():
    r3 = dyn base1(<sym strings>);
    goto L2(r3);
  D1():
    deopt 4 [r2];
  D2():
    deopt 8 [strings];
  L3():
    invisible.0();
    popenv;
    return NULL;
  L7():
    goto L1(r2);
  L10():
    strings1 = force? strings;
    checkMissing(strings1);
    length = ldf length in base;
    r5 = dyn length(strings1);
    check L11() else D3();
  L12():
    addPeriod = ldf addPeriod;
    check L13() else D4();
  D3():
    deopt 11 [r5];
  D4():
    deopt 13 [];
  L11():
    goto L2(r5);
  L13():
    p2 = prom<V +>{
      paste = ldf paste;
      p = prom<V +>{
        strings2 = ld strings;
        strings3 = force? strings2;
        checkMissing(strings3);
        return strings3;
      };
      p1 = prom<V +>{
        sep1 = ld sep;
        sep2 = force? sep1;
        checkMissing(sep2);
        return sep2;
      };
      r8 = dyn paste[, collapse](p, p1);
      return r8;
    };
    r10 = dyn addPeriod(p2);
    check L14() else D5();
  D5():
    deopt 15 [r10];
  L14():
    popenv;
    return r10;
  }
}
fun inner3387720256(pages) {
  (reg pages:*) -+> V { var pages:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg pages1:*, reg pages2:V, reg length:cls, reg r2:V, reg c:L, reg collapse:cls, reg pages3:*, reg pages4:V, reg p:p(V +), reg r4:V |
    mkenv;
    st pages = pages;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `as.logical`(r1);
    if c then L6() else L1();
  L2():
    pages1 = ld pages;
    check L4() else D0();
  L3():
    r = dyn base(<sym pages>);
    goto L0(r);
  D0():
    deopt 2 [pages1];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L4():
    pages2 = force? pages1;
    checkMissing(pages2);
    length = ldf length in base;
    r2 = dyn length(pages2);
    check L5() else D1();
  L6():
    collapse = ldf collapse;
    check L7() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  L5():
    goto L0(r2);
  L7():
    p = prom<V +>{
      pages3 = ld pages;
      pages4 = force? pages3;
      checkMissing(pages4);
      return pages4;
    };
    r4 = dyn collapse(p);
    check L8() else D3();
  D3():
    deopt 9 [r4];
  L8():
    popenv;
    return r4;
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg plain:cls, reg cleanupLatex:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st s = s;
    plain = ldf plain;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      cleanupLatex = ldf cleanupLatex;
      p = prom<V +>{
        s1 = ld s;
        s2 = force? s1;
        checkMissing(s2);
        return s2;
      };
      r1 = dyn cleanupLatex(p);
      return r1;
    };
    r3 = dyn plain(p1);
    check L1() else D1();
  D1():
    deopt 3 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner499374233(prefix, suffix, style) {
  (reg prefix:*, reg suffix:*, reg style:*) -+> V { var prefix:*, reg prefix_isMissing:L, reg prefix_orDefault:*, var suffix:*, reg suffix_isMissing:L, reg suffix_orDefault:*, var style:*, reg style_isMissing:L, reg style_orDefault:*, reg plain:*, reg plain1:V, reg p:p(V +), reg force:cls, reg prefix1:*, reg prefix2:V, reg p1:p(V +), reg r2:V, reg force1:cls, reg suffix1:*, reg suffix2:V, reg p2:p(V +), reg r4:V, reg force2:cls, reg style1:*, reg style2:V, reg p3:p(V +), reg r6:V, reg r7:cls |
    mkenv;
    prefix_isMissing = missing.0(prefix);
    if prefix_isMissing then L0(NULL) else L0(prefix);
  L0(prefix_orDefault):
    st prefix = prefix_orDefault;
    suffix_isMissing = missing.0(suffix);
    if suffix_isMissing then L1(NULL) else L1(suffix);
  L1(suffix_orDefault):
    st suffix = suffix_orDefault;
    style_isMissing = missing.0(style);
    if style_isMissing then L2() else L3(style);
  L2():
    p = prom<V +>{
      plain = ld plain;
      plain1 = force? plain;
      checkMissing(plain1);
      return plain1;
    };
    goto L3(p);
  L3(style_orDefault):
    st style = style_orDefault;
    force = ldf force;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p1 = prom<V +>{
      prefix1 = ld prefix;
      prefix2 = force? prefix1;
      checkMissing(prefix2);
      return prefix2;
    };
    r2 = dyn force(p1);
    check L5() else D1();
  D1():
    deopt 3 [r2];
  L5():
    force1 = ldf force;
    check L6() else D2();
  D2():
    deopt 5 [];
  L6():
    p2 = prom<V +>{
      suffix1 = ld suffix;
      suffix2 = force? suffix1;
      checkMissing(suffix2);
      return suffix2;
    };
    r4 = dyn force1(p2);
    check L7() else D3();
  D3():
    deopt 7 [r4];
  L7():
    force2 = ldf force;
    check L8() else D4();
  D4():
    deopt 9 [];
  L8():
    p3 = prom<V +>{
      style1 = ld style;
      style2 = force? style1;
      checkMissing(style2);
      return style2;
    };
    r6 = dyn force2(p3);
    check L9() else D5();
  D5():
    deopt 11 [r6];
  L9():
    r7 = clos inner1236783023;
    popenv;
    return r7;
  }
}
fun inner2269073876(title) {
  (reg title:*) -+> V { var title:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg title1:*, reg title2:V, reg length:cls, reg r2:V, reg c:L, reg gsub:cls, reg title3:*, reg title4:V, reg p:p(V +), reg r4:V, reg paste0:cls, reg addPeriod:cls, reg collapse:cls, reg cleanupLatex:cls, reg title5:*, reg title6:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V |
    mkenv;
    st title = title;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `as.logical`(r1);
    if c then L6() else L1();
  L2():
    title1 = ld title;
    check L4() else D0();
  L3():
    r = dyn base(<sym title>);
    goto L0(r);
  D0():
    deopt 2 [title1];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L4():
    title2 = force? title1;
    checkMissing(title2);
    length = ldf length in base;
    r2 = dyn length(title2);
    check L5() else D1();
  L6():
    gsub = ldf gsub;
    check L7() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  L5():
    goto L0(r2);
  L7():
    p = prom<V +>{
      title3 = ld title;
      title4 = force? title3;
      checkMissing(title4);
      return title4;
    };
    r4 = dyn gsub("%", "\\\\\\%", p);
    check L8() else D3();
  D3():
    deopt 11 [r4];
  L8():
    st title = r4;
    paste0 = ldf paste0;
    check L9() else D4();
  D4():
    deopt 14 [];
  L9():
    p4 = prom<V +>{
      addPeriod = ldf addPeriod;
      p3 = prom<V +>{
        collapse = ldf collapse;
        p2 = prom<V +>{
          cleanupLatex = ldf cleanupLatex;
          p1 = prom<V +>{
            title5 = ld title;
            title6 = force? title5;
            checkMissing(title6);
            return title6;
          };
          r6 = dyn cleanupLatex(p1);
          return r6;
        };
        r8 = dyn collapse(p2);
        return r8;
      };
      r10 = dyn addPeriod(p3);
      return r10;
    };
    r12 = dyn paste0("\\dQuote{", p4, "}");
    check L10() else D5();
  D5():
    deopt 18 [r12];
  L10():
    popenv;
    return r12;
  }
}
fun inner2098303389(year) {
  (reg year:*) -+> V { var year:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg year1:*, reg year2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg paste0:cls, reg collapse:cls, reg year3:*, reg year4:V, reg p:p(V +), reg r6:V, reg p1:p(V +), reg r8:V |
    mkenv;
    st year = year;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L7() else L1();
  L3():
    year1 = ld year;
    check L5() else D0();
  L4():
    r = dyn base(<sym year>);
    goto L0(r);
  D0():
    deopt 2 [year1];
  L1():
    goto L2();
  L2():
    paste0 = ldf paste0;
    check L9() else D2();
  L5():
    year2 = force? year1;
    checkMissing(year2);
    length = ldf length in base;
    r2 = dyn length(year2);
    check L6() else D1();
  L7():
    st year = "????";
    goto L2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 13 [];
  L6():
    goto L0(r2);
  L9():
    p1 = prom<V +>{
      collapse = ldf collapse;
      p = prom<V +>{
        year3 = ld year;
        year4 = force? year3;
        checkMissing(year4);
        return year4;
      };
      r6 = dyn collapse(p);
      return r6;
    };
    r8 = dyn paste0("(", p1, ")");
    check L10() else D3();
  D3():
    deopt 17 [r8];
  L10():
    popenv;
    return r8;
  }
}
fun inner1760082575(type, default) {
  (reg type:*, reg default:*) -+> V { var type:*, var default:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg type1:*, reg type2:V, reg length:cls, reg r2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg c8:L, reg r6:V, reg type3:*, reg type4:V, reg nzchar:cls, reg r7:V, reg any:cls, reg r8:V, reg c9:L, reg c10:V, reg c12:L, reg plainclean:cls, reg type5:*, reg type6:V, reg p:p(V +), reg r10:V, reg default1:*, reg default2:V |
    mkenv;
    st type = type;
    st default = default;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    c = `as.logical`(r1);
    if c then L9() else L1(c);
  L5():
    type1 = ld type;
    check L7() else D0();
  L6():
    r = dyn base(<sym type>);
    goto L0(r);
  D0():
    deopt 2 [type1];
  L1(c2):
    c12 = `as.logical`(c2);
    if c12 then L18() else L4();
  L7():
    type2 = force? type1;
    checkMissing(type2);
    length = ldf length in base;
    r2 = dyn length(type2);
    check L8() else D1();
  L9():
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  D1():
    deopt 5 [r2];
  L2(c5, r4):
    c9 = `as.logical`(r4);
    c10 = `&&`(c5, c9);
    goto L1(c10);
  L4():
    default1 = ld default;
    check L22() else D7();
  L8():
    goto L0(r2);
  L10():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L11():
    r3 = dyn base1(<lang nzchar(type)>);
    goto L2(c, r3);
  L18():
    plainclean = ldf plainclean;
    check L19() else D5();
  D5():
    deopt 18 [];
  D7():
    deopt 21 [default1];
  L3(c8, r6):
    any = ldf any in base;
    r8 = dyn any(r6);
    check L16() else D4();
  L12():
    type3 = ld type;
    check L14() else D2();
  L13():
    r5 = dyn base2(<sym type>);
    goto L3(c, r5);
  L19():
    p = prom<V +>{
      type5 = ld type;
      type6 = force? type5;
      checkMissing(type6);
      return type6;
    };
    r10 = dyn plainclean(p);
    check L20() else D6();
  L22():
    default2 = force? default1;
    checkMissing(default2);
    popenv;
    return default2;
  D2():
    deopt 10 [c, type3];
  D4():
    deopt 15 [c8, r8];
  D6():
    deopt 20 [r10];
  L14():
    type4 = force? type3;
    checkMissing(type4);
    nzchar = ldf nzchar in base;
    r7 = dyn nzchar(type4);
    check L15() else D3();
  L16():
    goto L2(c8, r8);
  L20():
    popenv;
    return r10;
  D3():
    deopt 13 [c, r7];
  L15():
    goto L3(c, r7);
  }
}
fun inner1346946568(paper) {
  (reg paper:*) -+> V { var paper:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg paper1:*, reg paper2:V, reg c:L, reg paper4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg length:cls, reg r3:V, reg c1:L, reg paste0:cls, reg collapse:cls, reg paper5:*, reg paper6:V, reg c2:L, reg paper8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r4:V, reg p:p(V +), reg r6:V, reg p1:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg paper9:*, reg paper10:V, reg c3:L, reg paper12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r11:V, reg length1:cls, reg r12:V, reg c4:L, reg paste1:cls, reg result:*, reg result1:V, reg p2:p(V +), reg collapse1:cls, reg paper13:*, reg paper14:V, reg c5:L, reg paper16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r14:V, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg r18:V, reg result2:*, reg result3:V |
    mkenv;
    st paper = paper;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L13() else L1();
  L5():
    paper1 = ld paper;
    check L7() else D0();
  L6():
    r = dyn base(<lang `$`(paper, volume)>);
    goto L0(r);
  D0():
    deopt 2 [paper1];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L7():
    paper2 = force? paper1;
    checkMissing(paper2);
    c = `is.object`(paper2);
    if c then L9() else L10(paper2);
  L13():
    paste0 = ldf paste0;
    check L14() else D2();
  D2():
    deopt 8 [];
  L8(dx1):
    length = ldf length in base;
    r3 = dyn length(dx1);
    check L12() else D1();
  L9():
    dr = tryDispatchBuiltin.1("$", paper2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(paper4):
    r2 = `$`(paper4, <sym volume>);
    goto L8(r2);
  L14():
    p1 = prom<V +>{
      collapse = ldf collapse;
      p = prom<V +>{
        paper5 = ld paper;
        paper6 = force? paper5;
        checkMissing(paper6);
        c2 = `is.object`(paper6);
        if c2 then L1() else L2(paper6);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", paper6);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(paper8):
        r4 = `$`(paper8, <sym volume>);
        goto L0(r4);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r6 = dyn collapse(p);
      return r6;
    };
    r8 = dyn paste0("\\bold{", p1, "}");
    check L15() else D3();
  D1():
    deopt 6 [r3];
  D3():
    deopt 12 [r8];
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L12():
    goto L0(r3);
  L15():
    st result = r8;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L2(r10):
    c4 = `as.logical`(r10);
    if c4 then L24() else L3();
  L16():
    paper9 = ld paper;
    check L18() else D4();
  L17():
    r9 = dyn base1(<lang `$`(paper, number)>);
    goto L2(r9);
  D4():
    deopt 16 [paper9];
  L3():
    goto L4();
  L4():
    result2 = ld result;
    check L28() else D8();
  L18():
    paper10 = force? paper9;
    checkMissing(paper10);
    c3 = `is.object`(paper10);
    if c3 then L20() else L21(paper10);
  L24():
    paste1 = ldf paste0;
    check L25() else D6();
  D6():
    deopt 22 [];
  D8():
    deopt 31 [result2];
  L19(dx5):
    length1 = ldf length in base;
    r12 = dyn length1(dx5);
    check L23() else D5();
  L20():
    dr4 = tryDispatchBuiltin.1("$", paper10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L22() else L21(dr4);
  L21(paper12):
    r11 = `$`(paper12, <sym number>);
    goto L19(r11);
  L25():
    p2 = prom<V +>{
      result = ld result;
      result1 = force? result;
      checkMissing(result1);
      return result1;
    };
    p4 = prom<V +>{
      collapse1 = ldf collapse;
      p3 = prom<V +>{
        paper13 = ld paper;
        paper14 = force? paper13;
        checkMissing(paper14);
        c5 = `is.object`(paper14);
        if c5 then L1() else L2(paper14);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("$", paper14);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(paper16):
        r14 = `$`(paper16, <sym number>);
        goto L0(r14);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r16 = dyn collapse1(p3);
      return r16;
    };
    r18 = dyn paste1(p2, "(", p4, ")");
    check L26() else D7();
  L28():
    result3 = force? result2;
    checkMissing(result3);
    popenv;
    return result3;
  D5():
    deopt 20 [r12];
  D7():
    deopt 27 [r18];
  L22():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L19(dx4);
  L23():
    goto L2(r12);
  L26():
    st result = r18;
    goto L4();
  }
}
fun inner1752868405(person) {
  (reg person:*) -+> V { var person:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg person1:*, reg person2:V, reg c:L, reg person4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg length:cls, reg r3:V, reg c1:L, reg cleanupLatex:cls, reg person5:*, reg person6:V, reg c2:L, reg person8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r4:V, reg p:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg person9:*, reg person10:V, reg c3:L, reg person12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r9:V, reg length1:cls, reg r10:V, reg c4:L, reg paste:cls, reg result:*, reg result1:V, reg p1:p(V +), reg paste1:cls, reg substr:cls, reg sapply:cls, reg person13:*, reg person14:V, reg c5:L, reg person16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r12:V, reg p2:p(V +), reg cleanupLatex1:*, reg cleanupLatex2:V, reg p3:p(V +), reg r15:V, reg p4:p(V +), reg r17:V, reg p5:p(V +), reg r19:V, reg p6:p(V +), reg r21:V, reg result2:*, reg result3:V, reg paste2:cls, reg cleanupLatex3:cls, reg person17:*, reg person18:V, reg c6:L, reg person20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r22:V, reg p7:p(V +), reg r24:V, reg p8:p(V +), reg r26:V |
    mkenv;
    st person = person;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L12() else L1();
  L4():
    person1 = ld person;
    check L6() else D0();
  L5():
    r = dyn base(<lang `$`(person, family)>);
    goto L0(r);
  D0():
    deopt 2 [person1];
  L1():
    paste2 = ldf paste;
    check L29() else D9();
  L6():
    person2 = force? person1;
    checkMissing(person2);
    c = `is.object`(person2);
    if c then L8() else L9(person2);
  L12():
    cleanupLatex = ldf cleanupLatex;
    check L13() else D2();
  D2():
    deopt 8 [];
  D9():
    deopt 27 [];
  L7(dx1):
    length = ldf length in base;
    r3 = dyn length(dx1);
    check L11() else D1();
  L8():
    dr = tryDispatchBuiltin.1("$", person2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(person4):
    r2 = `$`(person4, <sym family>);
    goto L7(r2);
  L13():
    p = prom<V +>{
      person5 = ld person;
      person6 = force? person5;
      checkMissing(person6);
      c2 = `is.object`(person6);
      if c2 then L1() else L2(person6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", person6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(person8):
      r4 = `$`(person8, <sym family>);
      goto L0(r4);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r6 = dyn cleanupLatex(p);
    check L14() else D3();
  L29():
    p8 = prom<V +>{
      cleanupLatex3 = ldf cleanupLatex;
      p7 = prom<V +>{
        person17 = ld person;
        person18 = force? person17;
        checkMissing(person18);
        c6 = `is.object`(person18);
        if c6 then L1() else L2(person18);
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("$", person18);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(person20):
        r22 = `$`(person20, <sym given>);
        goto L0(r22);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      r24 = dyn cleanupLatex3(p7);
      return r24;
    };
    r26 = dyn paste2[, collapse](p8, " ");
    check L30() else D10();
  D1():
    deopt 6 [r3];
  D3():
    deopt 10 [r6];
  D10():
    deopt 31 [r26];
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L11():
    goto L0(r3);
  L14():
    st result = r6;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L30():
    popenv;
    return r26;
  L2(r8):
    c4 = `as.logical`(r8);
    if c4 then L23() else L3();
  L15():
    person9 = ld person;
    check L17() else D4();
  L16():
    r7 = dyn base1(<lang `$`(person, given)>);
    goto L2(r7);
  D4():
    deopt 14 [person9];
  L3():
    result2 = ld result;
    check L27() else D8();
  L17():
    person10 = force? person9;
    checkMissing(person10);
    c3 = `is.object`(person10);
    if c3 then L19() else L20(person10);
  L23():
    paste = ldf paste;
    check L24() else D6();
  D6():
    deopt 20 [];
  D8():
    deopt 24 [result2];
  L18(dx5):
    length1 = ldf length in base;
    r10 = dyn length1(dx5);
    check L22() else D5();
  L19():
    dr4 = tryDispatchBuiltin.1("$", person10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L21() else L20(dr4);
  L20(person12):
    r9 = `$`(person12, <sym given>);
    goto L18(r9);
  L24():
    p1 = prom<V +>{
      result = ld result;
      result1 = force? result;
      checkMissing(result1);
      return result1;
    };
    p6 = prom<V +>{
      paste1 = ldf paste;
      p5 = prom<V +>{
        substr = ldf substr;
        p4 = prom<V +>{
          sapply = ldf sapply;
          p2 = prom<V +>{
            person13 = ld person;
            person14 = force? person13;
            checkMissing(person14);
            c5 = `is.object`(person14);
            if c5 then L1() else L2(person14);
          L0(dx7):
            return dx7;
          L1():
            dr6 = tryDispatchBuiltin.1("$", person14);
            dc3 = getTryDispatchBuiltinDispatched(dr6);
            if dc3 then L3() else L2(dr6);
          L2(person16):
            r12 = `$`(person16, <sym given>);
            goto L0(r12);
          L3():
            dx6 = getTryDispatchBuiltinValue(dr6);
            goto L0(dx6);
          };
          p3 = prom<V +>{
            cleanupLatex1 = ld cleanupLatex;
            cleanupLatex2 = force? cleanupLatex1;
            checkMissing(cleanupLatex2);
            return cleanupLatex2;
          };
          r15 = dyn sapply(p2, p3);
          return r15;
        };
        r17 = dyn substr(p4, 1.0, 1.0);
        return r17;
      };
      r19 = dyn paste1[, collapse](p5, "");
      return r19;
    };
    r21 = dyn paste(p1, p6);
    check L25() else D7();
  L27():
    result3 = force? result2;
    checkMissing(result3);
    popenv;
    return result3;
  D5():
    deopt 18 [r10];
  D7():
    deopt 23 [r21];
  L21():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L18(dx4);
  L22():
    goto L2(r10);
  L25():
    popenv;
    return r21;
  }
}
fun inner3035723593(book) {
  (reg book:*) -+> V { var book:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg book1:*, reg book2:V, reg c:L, reg book4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg length:cls, reg r3:V, reg c1:L, reg paste:cls, reg collapse:cls, reg book5:*, reg book6:V, reg c2:L, reg book8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r4:V, reg p:p(V +), reg r6:V, reg p1:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg book9:*, reg book10:V, reg c3:L, reg book12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r12:V, reg length1:cls, reg r13:V, reg c4:L, reg paste1:cls, reg result:*, reg result1:V, reg p2:p(V +), reg collapse1:cls, reg book13:*, reg book14:V, reg c5:L, reg book16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r15:V, reg p3:p(V +), reg r17:V, reg p4:p(V +), reg r19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg book17:*, reg book18:V, reg c6:L, reg book20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r23:V, reg length2:cls, reg r24:V, reg c7:L, reg paste2:cls, reg result2:*, reg result3:V, reg p5:p(V +), reg collapse2:cls, reg book21:*, reg book22:V, reg c8:L, reg book24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r26:V, reg p6:p(V +), reg r28:V, reg p7:p(V +), reg r30:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r32:V, reg r33:V, reg result4:*, reg result5:V, reg nzchar:cls, reg r34:V, reg c9:L, reg result6:*, reg result7:V |
    mkenv;
    st book = book;
    st result = "";
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L19() else L1();
  L11():
    book1 = ld book;
    check L13() else D0();
  L12():
    r = dyn base(<lang `$`(book, volume)>);
    goto L0(r);
  D0():
    deopt 5 [book1];
  L1():
    goto L2();
  L2():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L13():
    book2 = force? book1;
    checkMissing(book2);
    c = `is.object`(book2);
    if c then L15() else L16(book2);
  L19():
    paste = ldf paste;
    check L20() else D2();
  D2():
    deopt 11 [];
  L3(r11):
    c4 = `as.logical`(r11);
    if c4 then L31() else L4();
  L14(dx1):
    length = ldf length in base;
    r3 = dyn length(dx1);
    check L18() else D1();
  L15():
    dr = tryDispatchBuiltin.1("$", book2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(dr);
  L16(book4):
    r2 = `$`(book4, <sym volume>);
    goto L14(r2);
  L20():
    p1 = prom<V +>{
      collapse = ldf collapse;
      p = prom<V +>{
        book5 = ld book;
        book6 = force? book5;
        checkMissing(book6);
        c2 = `is.object`(book6);
        if c2 then L1() else L2(book6);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", book6);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(book8):
        r4 = `$`(book8, <sym volume>);
        goto L0(r4);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r6 = dyn collapse(p);
      return r6;
    };
    r8 = dyn paste("volume", p1);
    check L21() else D3();
  L23():
    book9 = ld book;
    check L25() else D4();
  L24():
    r10 = dyn base1(<lang `$`(book, number)>);
    goto L3(r10);
  D1():
    deopt 9 [r3];
  D3():
    deopt 14 [r8];
  D4():
    deopt 20 [book9];
  L4():
    goto L5();
  L5():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L14(dx);
  L18():
    goto L0(r3);
  L21():
    st result = r8;
    goto L2();
  L25():
    book10 = force? book9;
    checkMissing(book10);
    c3 = `is.object`(book10);
    if c3 then L27() else L28(book10);
  L31():
    paste1 = ldf paste;
    check L32() else D6();
  D6():
    deopt 26 [];
  L6(r22):
    c7 = `as.logical`(r22);
    if c7 then L43() else L7();
  L26(dx5):
    length1 = ldf length in base;
    r13 = dyn length1(dx5);
    check L30() else D5();
  L27():
    dr4 = tryDispatchBuiltin.1("$", book10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L29() else L28(dr4);
  L28(book12):
    r12 = `$`(book12, <sym number>);
    goto L26(r12);
  L32():
    p2 = prom<V +>{
      result = ld result;
      result1 = force? result;
      checkMissing(result1);
      return result1;
    };
    p4 = prom<V +>{
      collapse1 = ldf collapse;
      p3 = prom<V +>{
        book13 = ld book;
        book14 = force? book13;
        checkMissing(book14);
        c5 = `is.object`(book14);
        if c5 then L1() else L2(book14);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("$", book14);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(book16):
        r15 = `$`(book16, <sym number>);
        goto L0(r15);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r17 = dyn collapse1(p3);
      return r17;
    };
    r19 = dyn paste1(p2, "number", p4);
    check L33() else D7();
  L35():
    book17 = ld book;
    check L37() else D8();
  L36():
    r21 = dyn base2(<lang `$`(book, series)>);
    goto L6(r21);
  D5():
    deopt 24 [r13];
  D7():
    deopt 30 [r19];
  D8():
    deopt 36 [book17];
  L7():
    goto L8();
  L8():
    sym3 = ldf nzchar;
    base3 = ldf nzchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L47() else L48();
  L29():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L26(dx4);
  L30():
    goto L3(r13);
  L33():
    st result = r19;
    goto L5();
  L37():
    book18 = force? book17;
    checkMissing(book18);
    c6 = `is.object`(book18);
    if c6 then L39() else L40(book18);
  L43():
    paste2 = ldf paste;
    check L44() else D10();
  D10():
    deopt 42 [];
  L9(r33):
    c9 = `as.logical`(r33);
    if c9 then L51() else L10();
  L38(dx9):
    length2 = ldf length in base;
    r24 = dyn length2(dx9);
    check L42() else D9();
  L39():
    dr8 = tryDispatchBuiltin.1("$", book18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L41() else L40(dr8);
  L40(book20):
    r23 = `$`(book20, <sym series>);
    goto L38(r23);
  L44():
    p5 = prom<V +>{
      result2 = ld result;
      result3 = force? result2;
      checkMissing(result3);
      return result3;
    };
    p7 = prom<V +>{
      collapse2 = ldf collapse;
      p6 = prom<V +>{
        book21 = ld book;
        book22 = force? book21;
        checkMissing(book22);
        c8 = `is.object`(book22);
        if c8 then L1() else L2(book22);
      L0(dx11):
        return dx11;
      L1():
        dr10 = tryDispatchBuiltin.1("$", book22);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(book24):
        r26 = `$`(book24, <sym series>);
        goto L0(r26);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx10);
      };
      r28 = dyn collapse2(p6);
      return r28;
    };
    r30 = dyn paste2(p5, "series", p7);
    check L45() else D11();
  L47():
    result4 = ld result;
    check L49() else D12();
  L48():
    r32 = dyn base3(<sym result>);
    goto L9(r32);
  D9():
    deopt 40 [r24];
  D11():
    deopt 46 [r30];
  D12():
    deopt 52 [result4];
  L10():
    invisible.0();
    popenv;
    return NULL;
  L41():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L38(dx8);
  L42():
    goto L6(r24);
  L45():
    st result = r30;
    goto L8();
  L49():
    result5 = force? result4;
    checkMissing(result5);
    nzchar = ldf nzchar in base;
    r34 = dyn nzchar(result5);
    check L50() else D13();
  L51():
    result6 = ld result;
    check L52() else D14();
  D13():
    deopt 55 [r34];
  D14():
    deopt 56 [result6];
  L50():
    goto L9(r34);
  L52():
    result7 = force? result6;
    checkMissing(result7);
    popenv;
    return result7;
  }
}
fun inner1622975159(bib) {
  (reg bib:*) -+> V { var bib:*, reg character:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg bib1:*, reg bib2:V, reg length:cls, reg r2:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg bib3:*, reg bib4:V, reg r7:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg authorList:cls, reg bib5:*, reg bib6:V, reg c1:L, reg bib8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg i9:I, reg r12:V, reg authors:*, reg authors1:V, reg length1:cls, reg r13:V, reg r14:V, reg c2:L, reg editorList:cls, reg bib9:*, reg bib10:V, reg c3:L, reg bib12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i12:*, reg i13:V, reg __1:cls, reg r15:V, reg p2:p(V +), reg r17:V, reg i14:I, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg i17:I, reg r20:V, reg authors2:*, reg authors3:V, reg length2:cls, reg r21:V, reg r22:V, reg c4:L, reg i20:I, reg authors4:*, reg authors5:V, reg l1:*, reg c5:L, reg i22:I, reg authors7:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i24:I, reg dx5:V, reg i25:*, reg i26:V, reg ___:cls, reg r24:V, reg result:*, reg result1:V |
    mkenv;
    st bib = bib;
    character = ldf character;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      bib1 = ld bib;
      bib2 = force? bib1;
      checkMissing(bib2);
      length = ldf length in base;
      r2 = dyn length(bib2);
      goto L0(r2);
    L2():
      r = dyn base(<sym bib>);
      goto L0(r);
    };
    r4 = dyn character(p);
    check L11() else D1();
  D1():
    deopt 3 [r4];
  L11():
    st result = r4;
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L0(r6):
    s = toForSeq(r6);
    l = length(s);
    i = 0;
    goto L1(i);
  L12():
    bib3 = ld bib;
    check L14() else D2();
  L13():
    r5 = dyn base1(<sym bib>);
    goto L0(r5);
  D2():
    deopt 6 [bib3];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L15() else L9();
  L14():
    bib4 = force? bib3;
    checkMissing(bib4);
    r7 = seq_along(bib4);
    goto L0(r7);
  L9():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    authorList = ldf authorList;
    check L16() else D3();
  L15():
    result = ld result;
    check L37() else D13();
  D3():
    deopt 10 [i2];
  D13():
    deopt 50 [result];
  L16():
    p1 = prom<V +>{
      bib5 = ld bib;
      bib6 = force? bib5;
      checkMissing(bib6);
      c1 = `is.object`(bib6);
      if c1 then L1() else L2(bib6);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", bib6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(bib8):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[[` in base;
      r8 = dyn __(bib8, i6);
      goto L0(r8);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r10 = dyn authorList(p1);
    check L17() else D4();
  L37():
    result1 = force? result;
    checkMissing(result1);
    popenv;
    return result1;
  D4():
    deopt 12 [i2, r10];
  L17():
    st authors = r10;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L2(i9, r12):
    r14 = `!`(r12);
    c2 = `as.logical`(r14);
    if c2 then L22() else L3();
  L18():
    authors = ld authors;
    check L20() else D5();
  L19():
    r11 = dyn base2(<sym authors>);
    goto L2(i2, r11);
  D5():
    deopt 16 [i2, authors];
  L3():
    goto L4(i9);
  L4(i14):
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L26() else L27();
  L20():
    authors1 = force? authors;
    checkMissing(authors1);
    length1 = ldf length in base;
    r13 = dyn length1(authors1);
    check L21() else D6();
  L22():
    editorList = ldf editorList;
    check L23() else D7();
  D6():
    deopt 19 [i2, r13];
  D7():
    deopt 22 [i9];
  L5(i17, r20):
    r22 = `!`(r20);
    c4 = `as.logical`(r22);
    if c4 then L30() else L6();
  L21():
    goto L2(i2, r13);
  L23():
    p2 = prom<V +>{
      bib9 = ld bib;
      bib10 = force? bib9;
      checkMissing(bib10);
      c3 = `is.object`(bib10);
      if c3 then L1() else L2(bib10);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", bib10);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(bib12):
      i12 = ld i;
      i13 = force? i12;
      __1 = ldf `[[` in base;
      r15 = dyn __1(bib12, i13);
      goto L0(r15);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r17 = dyn editorList(p2);
    check L24() else D8();
  L26():
    authors2 = ld authors;
    check L28() else D9();
  L27():
    r19 = dyn base3(<sym authors>);
    goto L5(i14, r19);
  D8():
    deopt 24 [i9, r17];
  D9():
    deopt 30 [i14, authors2];
  L6():
    goto L7(i17);
  L7(i20):
    authors4 = ld authors;
    check L32() else D11();
  L24():
    st authors = r17;
    goto L4(i9);
  L28():
    authors3 = force? authors2;
    checkMissing(authors3);
    length2 = ldf length in base;
    r21 = dyn length2(authors3);
    check L29() else D10();
  L30():
    st authors = "";
    goto L7(i17);
  D10():
    deopt 33 [i14, r21];
  D11():
    deopt 40 [i20, authors4];
  L29():
    goto L5(i14, r21);
  L32():
    authors5 = force? authors4;
    checkMissing(authors5);
    l1 = ld result;
    c5 = `is.object`(l1);
    if c5 then L33() else L34(i20, authors5, l1);
  L8(i24, dx5):
    st result = dx5;
    goto L1(i24);
  L33():
    dr4 = tryDispatchBuiltin.0("[<-", l1, authors5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L35() else L34(i20, authors5, dr4);
  L34(i22, authors7, l3):
    i25 = ld i;
    check L36() else D12();
  D12():
    deopt 43 [i22, authors7, l3, authors5, i25];
  L35():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L8(i20, dx4);
  L36():
    i26 = force? i25;
    ___ = ldf `[<-` in base;
    r24 = dyn ___(l3, authors5, i26);
    goto L8(i22, r24);
  }
}
fun inner966629742(key, bib, `...`) {
  (reg key:*, reg bib:*, reg ddd:dots) -+> V { var key:*, var bib:*, var `...`:dots?, reg __:cls, reg r:V, reg r1:cls, reg key1:*, reg key2:V, reg p:p(V +), reg bib1:*, reg bib2:V, reg p1:p(V +), reg ddd1:dots?, reg r4:V |
    mkenv;
    st key = key;
    st bib = bib;
    st `...` = ddd;
    __ = ldf `::`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn __("utils", "citeNatbib");
    check L1() else D1();
  D1():
    deopt 4 [r];
  L1():
    checkFun.0(r);
    r1 = r as cls;
    p = prom<V +>{
      key1 = ld key;
      key2 = force? key1;
      checkMissing(key2);
      return key2;
    };
    p1 = prom<V +>{
      bib1 = ld bib;
      bib2 = force? bib1;
      checkMissing(bib2);
      return bib2;
    };
    ddd1 = ld `...`;
    r4 = dyn r1[, , `...`](p, p1, ddd1);
    check L2() else D2();
  D2():
    deopt 9 [r4];
  L2():
    popenv;
    return r4;
  }
}