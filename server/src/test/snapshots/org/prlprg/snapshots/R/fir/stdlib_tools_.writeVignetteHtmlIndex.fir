fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner13777378;
    st `.writeVignetteHtmlIndex` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner13777378(pkg, con, vignetteIndex) {
  (reg pkg:*, reg con:*, reg vignetteIndex:*) -+> V { var pkg:*, var con:*, var vignetteIndex:*, reg vignetteIndex_isMissing:L, reg vignetteIndex_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg HTMLheader:cls, reg r2:V, reg paste0:cls, reg pkg1:*, reg pkg2:V, reg p:p(V +), reg r4:V, reg NROW:cls, reg vignetteIndex1:*, reg vignetteIndex2:V, reg p1:p(V +), reg r6:V, reg r7:V, reg c:L, reg r8:V, reg cbind:cls, reg pkg3:*, reg pkg4:V, reg p2:p(V +), reg as_matrix:cls, reg vignetteIndex3:*, reg vignetteIndex4:V, reg c1:L, reg vignetteIndex6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg c2:cls, reg r12:V, reg __:cls, reg r13:V, reg p3:p(V +), reg r15:V, reg p4:p(V +), reg r17:V, reg makeVignetteTable:cls, reg vignetteIndex10:*, reg vignetteIndex11:V, reg p5:p(V +), reg r19:V, reg c3:cls, reg r20:V, reg list_files:cls, reg system_file:cls, reg pkg5:*, reg pkg6:V, reg p6:p(V +), reg r22:V, reg p7:p(V +), reg r24:V, reg NROW1:cls, reg vignetteIndex12:*, reg vignetteIndex13:V, reg p8:p(V +), reg r26:V, reg c4:L, reg setdiff:cls, reg otherfiles:*, reg otherfiles1:V, reg p9:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg vignetteIndex14:*, reg vignetteIndex15:V, reg c5:L, reg vignetteIndex17:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r30:V, reg r31:V, reg c6:cls, reg r32:V, reg __1:cls, reg r33:V, reg c7:cls, reg r34:V, reg p10:p(V +), reg r36:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r38:V, reg r39:V, reg otherfiles2:*, reg otherfiles3:V, reg length:cls, reg r40:V, reg c8:L, reg ifelse:cls, reg dir_exists:cls, reg system_file1:cls, reg file_path:cls, reg otherfiles4:*, reg otherfiles5:V, reg p11:p(V +), reg r42:V, reg p12:p(V +), reg pkg7:*, reg pkg8:V, reg p13:p(V +), reg r45:V, reg p14:p(V +), reg r47:V, reg p15:p(V +), reg paste1:cls, reg otherfiles6:*, reg otherfiles7:V, reg p16:p(V +), reg r50:V, reg p17:p(V +), reg otherfiles8:*, reg otherfiles9:V, reg p18:p(V +), reg r53:V, reg paste2:cls, reg otherfiles10:*, reg otherfiles11:V, reg p19:p(V +), reg otherfiles12:*, reg otherfiles13:V, reg p20:p(V +), reg r56:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r57:V, reg r58:V, reg html:*, reg html1:V, reg paste3:cls, reg iconv:cls, reg urls:*, reg urls1:V, reg p21:p(V +), reg r60:V, reg p22:p(V +), reg r62:V, reg c9:cls, reg r63:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r65:V, reg r66:V, reg html2:*, reg html3:V, reg c10:cls, reg r67:V, reg writeLines:cls, reg html4:*, reg html5:V, reg p23:p(V +), reg con1:*, reg con2:V, reg p24:p(V +), reg r70:V |
    mkenv;
    st pkg = pkg;
    st con = con;
    vignetteIndex_isMissing = missing.0(vignetteIndex);
    if vignetteIndex_isMissing then L0(NULL) else L0(vignetteIndex);
  L0(vignetteIndex_orDefault):
    st vignetteIndex = vignetteIndex_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L1(r1):
    st html = r1;
    list_files = ldf `list.files`;
    check L26() else D11();
  L11():
    HTMLheader = ldf HTMLheader;
    check L13() else D0();
  L12():
    r = dyn base(<lang HTMLheader("Vignettes and other documentation")>, <lang paste0("<h2>Vignettes from package '", pkg, "'</h2>")>, <lang if(`==`(NROW(vignetteIndex), 0), "The package contains no vignette meta-information.", {
        `<-`(vignetteIndex, cbind(Package=pkg, as.matrix(`[`(vignetteIndex, , c("File", "Title", "PDF", "R")))));
        makeVignetteTable(vignetteIndex, depth=3)
      })>);
    goto L1(r);
  D0():
    deopt 3 [];
  D11():
    deopt 37 [];
  L13():
    r2 = dyn HTMLheader("Vignettes and other documentation");
    check L14() else D1();
  L26():
    p7 = prom<V +>{
      system_file = ldf `system.file`;
      p6 = prom<V +>{
        pkg5 = ld pkg;
        pkg6 = force? pkg5;
        checkMissing(pkg6);
        return pkg6;
      };
      r22 = dyn system_file[, package]("doc", p6);
      return r22;
    };
    r24 = dyn list_files(p7);
    check L27() else D12();
  D1():
    deopt 5 [r2];
  D12():
    deopt 39 [r24];
  L14():
    paste0 = ldf paste0;
    check L15() else D2();
  L27():
    st otherfiles = r24;
    NROW1 = ldf NROW;
    check L28() else D13();
  D2():
    deopt 7 [];
  D13():
    deopt 42 [];
  L15():
    p = prom<V +>{
      pkg1 = ld pkg;
      pkg2 = force? pkg1;
      checkMissing(pkg2);
      return pkg2;
    };
    r4 = dyn paste0("<h2>Vignettes from package '", p, "'</h2>");
    check L16() else D3();
  L28():
    p8 = prom<V +>{
      vignetteIndex12 = ld vignetteIndex;
      vignetteIndex13 = force? vignetteIndex12;
      checkMissing(vignetteIndex13);
      return vignetteIndex13;
    };
    r26 = dyn NROW1(p8);
    check L29() else D14();
  D3():
    deopt 11 [r4];
  D14():
    deopt 44 [r26];
  L16():
    NROW = ldf NROW;
    check L17() else D4();
  L29():
    c4 = `as.logical`(r26);
    if c4 then L30() else L4();
  D4():
    deopt 13 [];
  L4():
    goto L5();
  L5():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L34() else L35();
  L17():
    p1 = prom<V +>{
      vignetteIndex1 = ld vignetteIndex;
      vignetteIndex2 = force? vignetteIndex1;
      checkMissing(vignetteIndex2);
      return vignetteIndex2;
    };
    r6 = dyn NROW(p1);
    check L18() else D5();
  L30():
    setdiff = ldf setdiff;
    check L31() else D15();
  D5():
    deopt 15 [r6];
  D15():
    deopt 46 [];
  L6(r39):
    c8 = `as.logical`(r39);
    if c8 then L38() else L7();
  L18():
    r7 = `==`(r6, 0);
    c = `as.logical`(r7);
    if c then L19() else L2();
  L31():
    p9 = prom<V +>{
      otherfiles = ld otherfiles;
      otherfiles1 = force? otherfiles;
      checkMissing(otherfiles1);
      return otherfiles1;
    };
    p10 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L3() else L4();
    L0(r29):
      return r29;
    L3():
      vignetteIndex14 = ld vignetteIndex;
      vignetteIndex15 = force? vignetteIndex14;
      checkMissing(vignetteIndex15);
      c5 = `is.object`(vignetteIndex15);
      if c5 then L5() else L6(vignetteIndex15);
    L4():
      r28 = dyn base2(<lang `[`(vignetteIndex, , c("PDF", "File", "R"))>, "index.html");
      goto L0(r28);
    L1(dx3):
      c7 = ldf c in base;
      r34 = dyn c7(dx3, "index.html");
      goto L0(r34);
    L5():
      dr2 = tryDispatchBuiltin.1("[", vignetteIndex15);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(vignetteIndex17):
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L8() else L9();
    L2(r31):
      __1 = ldf `[` in base;
      r33 = dyn __1(vignetteIndex15, <missing>, r31);
      goto L1(r33);
    L7():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    L8():
      c6 = ldf c in base;
      r32 = dyn c6("PDF", "File", "R");
      goto L2(r32);
    L9():
      r30 = dyn base3("PDF", "File", "R");
      goto L2(r30);
    };
    r36 = dyn setdiff(p9, p10);
    check L32() else D16();
  L34():
    otherfiles2 = ld otherfiles;
    check L36() else D17();
  L35():
    r38 = dyn base4(<sym otherfiles>);
    goto L6(r38);
  D16():
    deopt 49 [r36];
  D17():
    deopt 55 [otherfiles2];
  L2():
    cbind = ldf cbind;
    check L21() else D6();
  L3(r8):
    c3 = ldf c in base;
    r20 = dyn c3(r2, r4, r8);
    check L25() else D10();
  L7():
    goto L9();
  L9():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L50() else L51();
  L19():
    goto L3("The package contains no vignette meta-information.");
  L32():
    st otherfiles = r36;
    goto L5();
  L36():
    otherfiles3 = force? otherfiles2;
    checkMissing(otherfiles3);
    length = ldf length in base;
    r40 = dyn length(otherfiles3);
    check L37() else D18();
  L38():
    ifelse = ldf ifelse;
    check L39() else D19();
  D6():
    deopt 21 [];
  D10():
    deopt 34 [r20];
  D18():
    deopt 58 [r40];
  D19():
    deopt 60 [];
  L10(r66):
    st html = r66;
    writeLines = ldf writeLines;
    check L54() else D29();
  L21():
    p2 = prom<V +>{
      pkg3 = ld pkg;
      pkg4 = force? pkg3;
      checkMissing(pkg4);
      return pkg4;
    };
    p4 = prom<V +>{
      as_matrix = ldf `as.matrix`;
      p3 = prom<V +>{
        vignetteIndex3 = ld vignetteIndex;
        vignetteIndex4 = force? vignetteIndex3;
        checkMissing(vignetteIndex4);
        c1 = `is.object`(vignetteIndex4);
        if c1 then L2() else L3(vignetteIndex4);
      L0(dx1):
        return dx1;
      L2():
        dr = tryDispatchBuiltin.1("[", vignetteIndex4);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L4() else L3(dr);
      L3(vignetteIndex6):
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L5() else L6();
      L1(r11):
        __ = ldf `[` in base;
        r13 = dyn __(vignetteIndex4, <missing>, r11);
        goto L0(r13);
      L4():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      L5():
        c2 = ldf c in base;
        r12 = dyn c2("File", "Title", "PDF", "R");
        goto L1(r12);
      L6():
        r10 = dyn base1("File", "Title", "PDF", "R");
        goto L1(r10);
      };
      r15 = dyn as_matrix(p3);
      return r15;
    };
    r17 = dyn cbind[Package, ](p2, p4);
    check L22() else D7();
  L25():
    goto L1(r20);
  L37():
    goto L6(r40);
  L39():
    p15 = prom<V +>{
      dir_exists = ldf `dir.exists`;
      p14 = prom<V +>{
        system_file1 = ldf `system.file`;
        p12 = prom<V +>{
          file_path = ldf `file.path`;
          p11 = prom<V +>{
            otherfiles4 = ld otherfiles;
            otherfiles5 = force? otherfiles4;
            checkMissing(otherfiles5);
            return otherfiles5;
          };
          r42 = dyn file_path("doc", p11);
          return r42;
        };
        p13 = prom<V +>{
          pkg7 = ld pkg;
          pkg8 = force? pkg7;
          checkMissing(pkg8);
          return pkg8;
        };
        r45 = dyn system_file1[, package](p12, p13);
        return r45;
      };
      r47 = dyn dir_exists(p14);
      return r47;
    };
    p17 = prom<V +>{
      paste1 = ldf paste0;
      p16 = prom<V +>{
        otherfiles6 = ld otherfiles;
        otherfiles7 = force? otherfiles6;
        checkMissing(otherfiles7);
        return otherfiles7;
      };
      r50 = dyn paste1(p16, "/");
      return r50;
    };
    p18 = prom<V +>{
      otherfiles8 = ld otherfiles;
      otherfiles9 = force? otherfiles8;
      checkMissing(otherfiles9);
      return otherfiles9;
    };
    r53 = dyn ifelse(p15, p17, p18);
    check L40() else D20();
  L50():
    html2 = ld html;
    check L52() else D27();
  L51():
    r65 = dyn base6(<sym html>, "</div></body></html>");
    goto L10(r65);
  D7():
    deopt 25 [r17];
  D20():
    deopt 64 [r53];
  D27():
    deopt 98 [html2];
  D29():
    deopt 105 [];
  L22():
    st vignetteIndex = r17;
    makeVignetteTable = ldf makeVignetteTable;
    check L23() else D8();
  L40():
    st otherfiles = r53;
    paste2 = ldf paste0;
    check L41() else D21();
  L52():
    html3 = force? html2;
    checkMissing(html3);
    c10 = ldf c in base;
    r67 = dyn c10(html3, "</div></body></html>");
    check L53() else D28();
  L54():
    p23 = prom<V +>{
      html4 = ld html;
      html5 = force? html4;
      checkMissing(html5);
      return html5;
    };
    p24 = prom<V +>{
      con1 = ld con;
      con2 = force? con1;
      checkMissing(con2);
      return con2;
    };
    r70 = dyn writeLines[, con](p23, p24);
    check L55() else D30();
  D8():
    deopt 28 [];
  D21():
    deopt 67 [];
  D28():
    deopt 102 [r67];
  D30():
    deopt 109 [r70];
  L23():
    p5 = prom<V +>{
      vignetteIndex10 = ld vignetteIndex;
      vignetteIndex11 = force? vignetteIndex10;
      checkMissing(vignetteIndex11);
      return vignetteIndex11;
    };
    r19 = dyn makeVignetteTable[, depth](p5, 3);
    check L24() else D9();
  L41():
    p19 = prom<V +>{
      otherfiles10 = ld otherfiles;
      otherfiles11 = force? otherfiles10;
      checkMissing(otherfiles11);
      return otherfiles11;
    };
    p20 = prom<V +>{
      otherfiles12 = ld otherfiles;
      otherfiles13 = force? otherfiles12;
      checkMissing(otherfiles13);
      return otherfiles13;
    };
    r56 = dyn paste2("<a href=\"", p19, "\">", p20, "</a>");
    check L42() else D22();
  L53():
    goto L10(r67);
  L55():
    popenv;
    return r70;
  D9():
    deopt 32 [r19];
  D22():
    deopt 73 [r56];
  L24():
    goto L3(r19);
  L42():
    st urls = r56;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L43() else L44();
  L8(r58):
    st html = r58;
    goto L9();
  L43():
    html = ld html;
    check L45() else D23();
  L44():
    r57 = dyn base5(<sym html>, "<h2>Other files in the <span class=\"samp\">doc</span> directory</h2>", "<table style=\"width: 100%;\">", "<col style=\"width: 24%;\" />", "<col style=\"width: 50%;\" />", "<col style=\"width: 24%;\" />", <lang paste0("<tr><td></td><td><span class=\"samp\">", iconv(urls, "", "UTF-8"), "</span></td></tr>")>, "</table>");
    goto L8(r57);
  D23():
    deopt 77 [html];
  L45():
    html1 = force? html;
    checkMissing(html1);
    paste3 = ldf paste0;
    check L46() else D24();
  D24():
    deopt 85 [];
  L46():
    p22 = prom<V +>{
      iconv = ldf iconv;
      p21 = prom<V +>{
        urls = ld urls;
        urls1 = force? urls;
        checkMissing(urls1);
        return urls1;
      };
      r60 = dyn iconv(p21, "", "UTF-8");
      return r60;
    };
    r62 = dyn paste3("<tr><td></td><td><span class=\"samp\">", p22, "</span></td></tr>");
    check L47() else D25();
  D25():
    deopt 89 [r62];
  L47():
    c9 = ldf c in base;
    r63 = dyn c9(html1, "<h2>Other files in the <span class=\"samp\">doc</span> directory</h2>", "<table style=\"width: 100%;\">", "<col style=\"width: 24%;\" />", "<col style=\"width: 50%;\" />", "<col style=\"width: 24%;\" />", r62, "</table>");
    check L48() else D26();
  D26():
    deopt 92 [r63];
  L48():
    goto L8(r63);
  }
}