fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1383987391;
    st Rd2pdf_NEWS_in_Rd = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1383987391(f, pdf_file) {
  (reg f:*, reg pdf_file:*) -+> V { var f:*, var pdf_file:*, reg endsWith:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r1:V, reg c:L, reg readRDS:cls, reg f3:*, reg f4:V, reg p1:p(V +), reg r3:V, reg tempfile:cls, reg r5:V, reg grepl:cls, reg Sys_getenv:cls, reg r6:V, reg p2:p(V +), reg r8:V, reg c1:L, reg file_path:cls, reg r9:V, reg r10:V, reg file_path1:cls, reg tempdir:cls, reg r11:V, reg p3:p(V +), reg r13:V, reg file:cls, reg f5:*, reg f6:V, reg p4:p(V +), reg r15:V, reg Rd2latex:cls, reg f7:*, reg f8:V, reg p5:p(V +), reg f9:*, reg f10:V, reg p6:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r18:V, reg r19:V, reg c2:cls, reg r20:V, reg p7:p(V +), reg file_path2:cls, reg R_home:cls, reg r22:V, reg p8:p(V +), reg r24:V, reg p9:p(V +), reg r26:V, reg cat:cls, reg Sys_getenv1:cls, reg r27:V, reg p10:p(V +), reg _file_path_to_LaTeX_graphicspath:cls, reg file_path3:cls, reg R_home1:cls, reg r29:V, reg p11:p(V +), reg r31:V, reg p12:p(V +), reg r33:V, reg p13:p(V +), reg R_version:*, reg R_version1:V, reg c3:L, reg R_version3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r35:V, reg p14:p(V +), reg out:*, reg out1:V, reg p15:p(V +), reg r38:V, reg writeLines:cls, reg readLines:cls, reg f11:*, reg f12:V, reg p16:p(V +), reg r40:V, reg p17:p(V +), reg out2:*, reg out3:V, reg p18:p(V +), reg r43:V, reg writeLines1:cls, reg out4:*, reg out5:V, reg p19:p(V +), reg r45:V, reg close:cls, reg out6:*, reg out7:V, reg p20:p(V +), reg r47:V, reg setwd:cls, reg dirname:cls, reg f13:*, reg f14:V, reg p21:p(V +), reg r49:V, reg p22:p(V +), reg r51:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r52:V, reg on_exit:cls, reg r54:V, reg texi2pdf:cls, reg r55:V, reg setwd1:cls, reg od:*, reg od1:V, reg p23:p(V +), reg r57:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r58:V, reg on_exit1:cls, reg r60:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r61:V, reg r62:V, reg file_copy:cls, reg file_path4:cls, reg dirname1:cls, reg f15:*, reg f16:V, reg p24:p(V +), reg r64:V, reg p25:p(V +), reg r66:V, reg p26:p(V +), reg pdf_file1:*, reg pdf_file2:V, reg p27:p(V +), reg r69:V, reg invisible:cls, reg r70:V |
    mkenv;
    st f = f;
    st pdf_file = pdf_file;
    endsWith = ldf endsWith;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r1 = dyn endsWith(p, ".rds");
    check L8() else D1();
  D1():
    deopt 4 [r1];
  L8():
    c = `as.logical`(r1);
    if c then L9() else L0();
  L0():
    goto L1();
  L1():
    tempfile = ldf tempfile;
    check L13() else D4();
  L9():
    readRDS = ldf readRDS;
    check L10() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 13 [];
  L10():
    p1 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    r3 = dyn readRDS(p1);
    check L11() else D3();
  L13():
    r5 = dyn tempfile();
    check L14() else D5();
  D3():
    deopt 8 [r3];
  D5():
    deopt 14 [r5];
  L11():
    st f = r3;
    goto L1();
  L14():
    st f2 = r5;
    grepl = ldf grepl;
    check L15() else D6();
  D6():
    deopt 17 [];
  L15():
    p2 = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r6 = dyn Sys_getenv("TMPDIR");
      return r6;
    };
    r8 = dyn grepl(" ", p2);
    check L16() else D7();
  D7():
    deopt 20 [r8];
  L16():
    c1 = `as.logical`(r8);
    if c1 then L17() else L2();
  L2():
    file_path1 = ldf `file.path`;
    check L21() else D10();
  L3(r10):
    st f3 = r10;
    file = ldf file;
    check L23() else D12();
  L17():
    file_path = ldf `file.path`;
    check L18() else D8();
  D8():
    deopt 22 [];
  D10():
    deopt 27 [];
  D12():
    deopt 33 [];
  L18():
    r9 = dyn file_path("/tmp", "NEWS.tex");
    check L19() else D9();
  L21():
    p3 = prom<V +>{
      tempdir = ldf tempdir;
      r11 = dyn tempdir();
      return r11;
    };
    r13 = dyn file_path1(p3, "NEWS.tex");
    check L22() else D11();
  L23():
    p4 = prom<V +>{
      f5 = ld f3;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    r15 = dyn file(p4, "w");
    check L24() else D13();
  D9():
    deopt 25 [r9];
  D11():
    deopt 30 [r13];
  D13():
    deopt 36 [r15];
  L19():
    goto L3(r9);
  L22():
    goto L3(r13);
  L24():
    st out = r15;
    Rd2latex = ldf Rd2latex;
    check L25() else D14();
  D14():
    deopt 39 [];
  L25():
    p5 = prom<V +>{
      f7 = ld f;
      f8 = force? f7;
      checkMissing(f8);
      return f8;
    };
    p6 = prom<V +>{
      f9 = ld f2;
      f10 = force? f9;
      checkMissing(f10);
      return f10;
    };
    p7 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r19):
      return r19;
    L1():
      c2 = ldf c in base;
      r20 = dyn c2("install", "render");
      goto L0(r20);
    L2():
      r18 = dyn base("install", "render");
      goto L0(r18);
    };
    p9 = prom<V +>{
      file_path2 = ldf `file.path`;
      p8 = prom<V +>{
        R_home = ldf `R.home`;
        r22 = dyn R_home("share");
        return r22;
      };
      r24 = dyn file_path2(p8, "Rd", "macros", "system.Rd");
      return r24;
    };
    r26 = dyn Rd2latex[, , stages, outputEncoding, writeEncoding, macros](p5, p6, p7, "UTF-8", FALSE, p9);
    check L26() else D15();
  D15():
    deopt 50 [r26];
  L26():
    cat = ldf cat;
    check L27() else D16();
  D16():
    deopt 52 [];
  L27():
    p10 = prom<V +>{
      Sys_getenv1 = ldf `Sys.getenv`;
      r27 = dyn Sys_getenv1("R_PAPERSIZE");
      return r27;
    };
    p13 = prom<V +>{
      _file_path_to_LaTeX_graphicspath = ldf `.file_path_to_LaTeX_graphicspath`;
      p12 = prom<V +>{
        file_path3 = ldf `file.path`;
        p11 = prom<V +>{
          R_home1 = ldf `R.home`;
          r29 = dyn R_home1("doc");
          return r29;
        };
        r31 = dyn file_path3(p11, "html");
        return r31;
      };
      r33 = dyn _file_path_to_LaTeX_graphicspath(p12);
      return r33;
    };
    p14 = prom<V +>{
      R_version = ld `R.version`;
      R_version1 = force? R_version;
      checkMissing(R_version1);
      c3 = `is.object`(R_version1);
      if c3 then L1() else L2(R_version1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", R_version1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(R_version3):
      r35 = `$`(R_version3, <sym version.string>);
      goto L0(r35);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p15 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    r38 = dyn cat[, , , , , , , , , , , , , , , , , sep, file]("\\documentclass[", p10, "paper]{book}\n", "\\usepackage[hyper]{Rd}\n", "\\usepackage[utf8]{inputenc}\n", "\\usepackage{graphicx}\n", "\\setkeys{Gin}{width=0.7\\textwidth}\n", p13, "\n", "\\hypersetup{pdfpagemode=None,pdfstartview=FitH}\n", "\\begin{document}\n", "\\chapter*{}\\sloppy\n", "\\begin{center}\n\\huge\n", "NEWS for ", p14, "\n", "\\end{center}\n", "", p15);
    check L28() else D17();
  D17():
    deopt 74 [r38];
  L28():
    writeLines = ldf writeLines;
    check L29() else D18();
  D18():
    deopt 76 [];
  L29():
    p17 = prom<V +>{
      readLines = ldf readLines;
      p16 = prom<V +>{
        f11 = ld f2;
        f12 = force? f11;
        checkMissing(f12);
        return f12;
      };
      r40 = dyn readLines(p16);
      return r40;
    };
    p18 = prom<V +>{
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      return out3;
    };
    r43 = dyn writeLines(p17, p18);
    check L30() else D19();
  D19():
    deopt 79 [r43];
  L30():
    writeLines1 = ldf writeLines;
    check L31() else D20();
  D20():
    deopt 81 [];
  L31():
    p19 = prom<V +>{
      out4 = ld out;
      out5 = force? out4;
      checkMissing(out5);
      return out5;
    };
    r45 = dyn writeLines1("\\end{document}", p19);
    check L32() else D21();
  D21():
    deopt 84 [r45];
  L32():
    close = ldf close;
    check L33() else D22();
  D22():
    deopt 86 [];
  L33():
    p20 = prom<V +>{
      out6 = ld out;
      out7 = force? out6;
      checkMissing(out7);
      return out7;
    };
    r47 = dyn close(p20);
    check L34() else D23();
  D23():
    deopt 88 [r47];
  L34():
    setwd = ldf setwd;
    check L35() else D24();
  D24():
    deopt 90 [];
  L35():
    p22 = prom<V +>{
      dirname = ldf dirname;
      p21 = prom<V +>{
        f13 = ld f3;
        f14 = force? f13;
        checkMissing(f14);
        return f14;
      };
      r49 = dyn dirname(p21);
      return r49;
    };
    r51 = dyn setwd(p22);
    check L36() else D25();
  D25():
    deopt 92 [r51];
  L36():
    st od = r51;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L4():
    texi2pdf = ldf texi2pdf;
    check L39() else D26();
  L37():
    on_exit = ldf `on.exit` in base;
    r54 = dyn on_exit(<lang setwd(od)>);
    goto L4();
  L38():
    r52 = dyn base1(<lang setwd(od)>);
    goto L4();
  D26():
    deopt 98 [];
  L39():
    r55 = dyn texi2pdf[, quiet, texi2dvi]("NEWS.tex", TRUE, "emulation");
    check L40() else D27();
  D27():
    deopt 104 [r55];
  L40():
    setwd1 = ldf setwd;
    check L41() else D28();
  D28():
    deopt 106 [];
  L41():
    p23 = prom<V +>{
      od = ld od;
      od1 = force? od;
      checkMissing(od1);
      return od1;
    };
    r57 = dyn setwd1(p23);
    check L42() else D29();
  D29():
    deopt 108 [r57];
  L42():
    sym2 = ldf `on.exit`;
    base2 = ldf `on.exit` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L43() else L44();
  L5():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  L43():
    on_exit1 = ldf `on.exit` in base;
    r60 = dyn on_exit1();
    goto L5();
  L44():
    r58 = dyn base2();
    goto L5();
  L6(r62):
    popenv;
    return r62;
  L45():
    file_copy = ldf `file.copy`;
    check L47() else D30();
  L46():
    r61 = dyn base3(<lang file.copy(file.path(dirname(f3), "NEWS.pdf"), pdf_file, overwrite=TRUE)>);
    goto L6(r61);
  D30():
    deopt 115 [];
  L47():
    p26 = prom<V +>{
      file_path4 = ldf `file.path`;
      p25 = prom<V +>{
        dirname1 = ldf dirname;
        p24 = prom<V +>{
          f15 = ld f3;
          f16 = force? f15;
          checkMissing(f16);
          return f16;
        };
        r64 = dyn dirname1(p24);
        return r64;
      };
      r66 = dyn file_path4(p25, "NEWS.pdf");
      return r66;
    };
    p27 = prom<V +>{
      pdf_file1 = ld pdf_file;
      pdf_file2 = force? pdf_file1;
      checkMissing(pdf_file2);
      return pdf_file2;
    };
    r69 = dyn file_copy[, , overwrite](p26, p27, TRUE);
    check L48() else D31();
  D31():
    deopt 120 [r69];
  L48():
    invisible = ldf invisible in base;
    r70 = dyn invisible(r69);
    check L49() else D32();
  D32():
    deopt 122 [r70];
  L49():
    goto L6(r70);
  }
}