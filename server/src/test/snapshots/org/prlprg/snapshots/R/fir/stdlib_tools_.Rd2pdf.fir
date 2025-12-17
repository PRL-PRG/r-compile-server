fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner546318811;
    st `.Rd2pdf` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner546318811(pkgdir, outfile, title, silent, description, only_meta, enc, outputEncoding, files_or_dir, OSdir, internals, index, pkglist) {
  (reg pkgdir:*, reg outfile:*, reg title:*, reg silent:*, reg description:*, reg only_meta:*, reg enc:*, reg outputEncoding:*, reg files_or_dir:*, reg OSdir:*, reg internals:*, reg index:*, reg pkglist:*) -+> V { var pkgdir:*, var outfile:*, var title:*, var silent:*, reg silent_isMissing:L, reg silent_orDefault:*, var description:*, reg description_isMissing:L, reg description_orDefault:*, var only_meta:*, reg only_meta_isMissing:L, reg only_meta_orDefault:*, var enc:*, reg enc_isMissing:L, reg enc_orDefault:*, var outputEncoding:*, reg outputEncoding_isMissing:L, reg outputEncoding_orDefault:*, var files_or_dir:*, var OSdir:*, var internals:*, reg internals_isMissing:L, reg internals_orDefault:*, var index:*, reg index_isMissing:L, reg index_orDefault:*, var pkglist:*, reg pkglist_isMissing:L, reg pkglist_orDefault:*, reg file:cls, reg outfile1:*, reg outfile2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg enc1:*, reg enc2:V, reg nzchar:cls, reg r4:V, reg r5:V, reg c:L, reg file_exists:cls, reg file_path:cls, reg pkgdir1:*, reg pkgdir2:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg c1:L, reg read_dcf:cls, reg f:*, reg f1:V, reg p3:p(V +), reg r12:V, reg c2:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r15:V, reg enc3:*, reg enc4:V, reg r16:V, reg c3:L, reg desc:*, reg desc1:V, reg c4:L, reg desc3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg pkg_enc:*, reg pkg_enc1:V, reg is_na:cls, reg r20:V, reg r21:V, reg c5:L, reg pkg_enc2:*, reg pkg_enc3:V, reg pkg_enc4:V, reg pkg_enc5:V, reg writeLines:cls, reg out:*, reg out1:V, reg p4:p(V +), reg r23:V, reg cat:cls, reg Sys_getenv:cls, reg r24:V, reg p5:p(V +), reg Sys_getenv1:cls, reg r26:V, reg p6:p(V +), reg out2:*, reg out3:V, reg p7:p(V +), reg r29:V, reg index1:*, reg index2:V, reg c6:L, reg writeLines1:cls, reg out4:*, reg out5:V, reg p8:p(V +), reg r31:V, reg Sys_getenv2:cls, reg r33:V, reg latex_canonical_encoding:cls, reg outputEncoding1:*, reg outputEncoding2:V, reg p9:p(V +), reg r35:V, reg latex_outputEncoding:*, reg latex_outputEncoding1:V, reg r36:V, reg asUTF8:*, reg asUTF9:V, reg c7:L, reg c9:V, reg inputenc:*, reg inputenc1:V, reg r37:V, reg c10:L, reg c11:V, reg c13:L, reg paste0:cls, reg r38:V, reg r39:V, reg paste1:cls, reg asUTF10:*, reg asUTF11:V, reg c14:L, reg paste2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r40:V, reg r41:V, reg description1:*, reg description2:V, reg c15:L, reg r42:V, reg latex_outputEncoding2:*, reg latex_outputEncoding3:V, reg c16:cls, reg r43:V, reg p10:p(V +), reg r45:V, reg p11:p(V +), reg inputenc2:*, reg inputenc3:V, reg p12:p(V +), reg r48:V, reg writeLines2:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r49:V, reg r50:V, reg setEncoding:*, reg setEncoding1:V, reg inputenc4:*, reg inputenc5:V, reg r51:V, reg c17:L, reg c19:V, reg asUTF12:*, reg asUTF13:V, reg c20:L, reg c21:V, reg c23:L, reg r52:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r53:V, reg r54:V, reg Sys_getenv3:cls, reg r55:V, reg nzchar1:cls, reg r56:V, reg c24:L, reg c26:V, reg asUTF14:*, reg asUTF15:V, reg c27:L, reg c28:V, reg c30:L, reg r57:V, reg useGraphicx:*, reg useGraphicx1:V, reg index3:*, reg index4:V, reg c31:L, reg r58:V, reg c32:cls, reg r59:V, reg p13:p(V +), reg out6:*, reg out7:V, reg p14:p(V +), reg r62:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r63:V, reg r64:V, reg title1:*, reg title2:V, reg nzchar2:cls, reg r65:V, reg r66:V, reg c33:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r67:V, reg r68:V, reg desc4:*, reg desc5:V, reg c34:L, reg c35:L, reg paste3:cls, reg desc6:*, reg desc7:V, reg c36:L, reg desc9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r69:V, reg p15:p(V +), reg r71:V, reg r72:V, reg file_exists1:cls, reg file_path1:cls, reg pkgdir3:*, reg pkgdir4:V, reg p16:p(V +), reg r74:V, reg p17:p(V +), reg r76:V, reg c37:L, reg read_dcf1:cls, reg f2:*, reg f3:V, reg p18:p(V +), reg r78:V, reg c38:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r81:V, reg paste4:cls, reg desc10:*, reg desc11:V, reg c39:L, reg desc13:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r82:V, reg p19:p(V +), reg r84:V, reg dir_exists:cls, reg pkgdir5:*, reg pkgdir6:V, reg p20:p(V +), reg r86:V, reg c40:L, reg paste5:cls, reg pkgdir7:*, reg pkgdir8:V, reg p21:p(V +), reg r88:V, reg strsplit:cls, reg files_or_dir1:*, reg files_or_dir2:V, reg p22:p(V +), reg r91:V, reg c41:L, reg r93:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __5:cls, reg r94:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r95:V, reg r96:V, reg files:*, reg files1:V, reg length:cls, reg r97:V, reg r98:V, reg c42:L, reg r99:S, reg paste6:cls, reg pkgdir9:*, reg pkgdir10:V, reg p23:p(V +), reg subj1:*, reg subj2:V, reg p24:p(V +), reg r102:V, reg gsub:cls, reg subj3:*, reg subj4:V, reg p25:p(V +), reg r104:V, reg paste7:cls, reg subj5:*, reg subj6:V, reg p26:p(V +), reg r106:V, reg cat1:cls, reg title3:*, reg title4:V, reg p27:p(V +), reg out8:*, reg out9:V, reg p28:p(V +), reg r110:V, reg description3:*, reg description4:V, reg c43:L, reg file_exists2:cls, reg file_path2:cls, reg pkgdir11:*, reg pkgdir12:V, reg p29:p(V +), reg r112:V, reg p30:p(V +), reg r114:V, reg c44:L, reg _DESCRIPTION_to_latex:cls, reg f4:*, reg f5:V, reg p31:p(V +), reg out10:*, reg out11:V, reg p32:p(V +), reg asUTF16:*, reg asUTF17:V, reg r117:V, reg p33:p(V +), reg r119:V, reg r120:V, reg file_exists3:cls, reg file_path3:cls, reg pkgdir13:*, reg pkgdir14:V, reg p34:p(V +), reg r122:V, reg p35:p(V +), reg r124:V, reg c45:L, reg readLines:cls, reg file_path4:cls, reg pkgdir15:*, reg pkgdir16:V, reg p36:p(V +), reg r126:V, reg p37:p(V +), reg r128:V, reg _DESCRIPTION_to_latex1:cls, reg file_path5:cls, reg pkgdir17:*, reg pkgdir18:V, reg p38:p(V +), reg r130:V, reg p39:p(V +), reg out12:*, reg out13:V, reg p40:p(V +), reg version:*, reg version1:V, reg p41:p(V +), reg asUTF18:*, reg asUTF19:V, reg r134:V, reg p42:p(V +), reg r136:V, reg file_exists4:cls, reg file_path6:cls, reg pkgdir19:*, reg pkgdir20:V, reg p43:p(V +), reg r139:V, reg p44:p(V +), reg r141:V, reg c46:L, reg c48:V, reg dir_exists1:cls, reg file_path7:cls, reg pkgdir21:*, reg pkgdir22:V, reg p45:p(V +), reg r143:V, reg p46:p(V +), reg r145:V, reg c49:L, reg c50:L, reg c51:V, reg dir_exists2:cls, reg file_path8:cls, reg pkgdir23:*, reg pkgdir24:V, reg p47:p(V +), reg r147:V, reg p48:p(V +), reg r149:V, reg c54:L, reg c55:V, reg c58:L, reg c59:L, reg c60:V, reg dir_exists3:cls, reg file_path9:cls, reg pkgdir25:*, reg pkgdir26:V, reg p49:p(V +), reg r151:V, reg p50:p(V +), reg r153:V, reg c63:L, reg c64:V, reg r154:V, reg c67:L, reg c68:V, reg c70:L, reg only_meta1:*, reg only_meta2:V, reg r156:V, reg c71:L, reg dir_exists4:cls, reg files_or_dir3:*, reg files_or_dir4:V, reg p51:p(V +), reg r158:V, reg c72:L, reg writeLines3:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r159:V, reg r160:V, reg asUTF20:*, reg asUTF21:V, reg r161:V, reg c73:L, reg paste8:cls, reg latex_outputEncoding4:*, reg latex_outputEncoding5:V, reg p52:p(V +), reg r163:V, reg r164:V, reg c74:cls, reg r165:V, reg p53:p(V +), reg out14:*, reg out15:V, reg p54:p(V +), reg r168:V, reg _Rdfiles2tex:cls, reg files_or_dir5:*, reg files_or_dir6:V, reg p55:p(V +), reg out16:*, reg out17:V, reg p56:p(V +), reg enc5:*, reg enc6:V, reg p57:p(V +), reg outputEncoding3:*, reg outputEncoding4:V, reg p58:p(V +), reg OSdir1:*, reg OSdir2:V, reg p59:p(V +), reg internals1:*, reg internals2:V, reg p60:p(V +), reg silent1:*, reg silent2:V, reg p61:p(V +), reg pkglist1:*, reg pkglist2:V, reg p62:p(V +), reg r178:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r179:V, reg r180:V, reg res:*, reg res1:V, reg length1:cls, reg r181:V, reg c75:L, reg res2:*, reg res3:V, reg c76:L, reg res5:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r182:V, reg dx14:V, reg index5:*, reg index6:V, reg c77:L, reg writeLines4:cls, reg out18:*, reg out19:V, reg p63:p(V +), reg r184:V, reg writeLines5:cls, reg out20:*, reg out21:V, reg p64:p(V +), reg r187:V, reg close:cls, reg out22:*, reg out23:V, reg p65:p(V +), reg r189:V, reg hasFigures:*, reg hasFigures1:V, reg c78:L, reg readLines1:cls, reg outfile3:*, reg outfile4:V, reg p66:p(V +), reg r191:V, reg l:*, reg c79:L, reg r193:S, reg l2:*, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg lines:*, reg lines1:V, reg useGraphicx2:*, reg useGraphicx3:V, reg r196:V, reg ___:cls, reg r197:V, reg writeLines6:cls, reg lines2:*, reg lines3:V, reg p67:p(V +), reg outfile5:*, reg outfile6:V, reg p68:p(V +), reg r200:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r202:V, reg r203:V, reg invisible:cls, reg r204:V |
    mkenv;
    st pkgdir = pkgdir;
    st outfile = outfile;
    st title = title;
    silent_isMissing = missing.0(silent);
    if silent_isMissing then L0(FALSE) else L0(silent);
  L0(silent_orDefault):
    st silent = silent_orDefault;
    description_isMissing = missing.0(description);
    if description_isMissing then L1(TRUE) else L1(description);
  L1(description_orDefault):
    st description = description_orDefault;
    only_meta_isMissing = missing.0(only_meta);
    if only_meta_isMissing then L2(FALSE) else L2(only_meta);
  L2(only_meta_orDefault):
    st only_meta = only_meta_orDefault;
    enc_isMissing = missing.0(enc);
    if enc_isMissing then L3("unknown") else L3(enc);
  L3(enc_orDefault):
    st enc = enc_orDefault;
    outputEncoding_isMissing = missing.0(outputEncoding);
    if outputEncoding_isMissing then L4("UTF-8") else L4(outputEncoding);
  L4(outputEncoding_orDefault):
    st outputEncoding = outputEncoding_orDefault;
    st files_or_dir = files_or_dir;
    st OSdir = OSdir;
    internals_isMissing = missing.0(internals);
    if internals_isMissing then L5(FALSE) else L5(internals);
  L5(internals_orDefault):
    st internals = internals_orDefault;
    index_isMissing = missing.0(index);
    if index_isMissing then L6(TRUE) else L6(index);
  L6(index_orDefault):
    st index = index_orDefault;
    pkglist_isMissing = missing.0(pkglist);
    if pkglist_isMissing then L7(NULL) else L7(pkglist);
  L7(pkglist_orDefault):
    st pkglist = pkglist_orDefault;
    file = ldf file;
    check L62() else D0();
  D0():
    deopt 1 [];
  L62():
    p = prom<V +>{
      outfile1 = ld outfile;
      outfile2 = force? outfile1;
      checkMissing(outfile2);
      return outfile2;
    };
    r1 = dyn file(p, "wt");
    check L63() else D1();
  D1():
    deopt 4 [r1];
  L63():
    st out = r1;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L64() else L65();
  L8(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L68() else L9();
  L64():
    enc1 = ld enc;
    check L66() else D2();
  L65():
    r2 = dyn base(<sym enc>);
    goto L8(r2);
  D2():
    deopt 8 [enc1];
  L9():
    goto L10();
  L10():
    st desc = NULL;
    file_exists = ldf `file.exists`;
    check L70() else D4();
  L66():
    enc2 = force? enc1;
    checkMissing(enc2);
    nzchar = ldf nzchar in base;
    r4 = dyn nzchar(enc2);
    check L67() else D3();
  L68():
    st enc = "unknown";
    goto L10();
  D3():
    deopt 11 [r4];
  D4():
    deopt 22 [];
  L67():
    goto L8(r4);
  L70():
    p2 = prom<V +>{
      file_path = ldf `file.path`;
      p1 = prom<V +>{
        pkgdir1 = ld pkgdir;
        pkgdir2 = force? pkgdir1;
        checkMissing(pkgdir2);
        return pkgdir2;
      };
      r8 = dyn file_path(p1, "DESCRIPTION");
      st f = r8;
      invisible.0();
      return r8;
    };
    r10 = dyn file_exists(p2);
    check L71() else D5();
  D5():
    deopt 24 [r10];
  L71():
    c1 = `as.logical`(r10);
    if c1 then L72() else L11();
  L11():
    goto L19();
  L19():
    writeLines = ldf writeLines;
    check L93() else D13();
  L72():
    read_dcf = ldf `read.dcf`;
    check L73() else D6();
  D6():
    deopt 26 [];
  D13():
    deopt 61 [];
  L73():
    p3 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r12 = dyn read_dcf(p3);
    check L74() else D7();
  L93():
    p4 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    r23 = dyn writeLines("\\nonstopmode{}", p4);
    check L94() else D14();
  D7():
    deopt 28 [r12];
  D14():
    deopt 64 [r23];
  L74():
    c2 = `is.object`(r12);
    if c2 then L75() else L76();
  L94():
    cat = ldf cat;
    check L95() else D15();
  D15():
    deopt 66 [];
  L12(dx1):
    st desc = dx1;
    enc3 = ld enc;
    check L78() else D8();
  L75():
    dr = tryDispatchBuiltin.1("[", r12);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L77() else L76();
  L76():
    __ = ldf `[` in base;
    r15 = dyn __(r12, 1.0, <missing>);
    goto L12(r15);
  L95():
    p5 = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r24 = dyn Sys_getenv("R_PAPERSIZE");
      return r24;
    };
    p6 = prom<V +>{
      Sys_getenv1 = ldf `Sys.getenv`;
      r26 = dyn Sys_getenv1("R_RD4PDF", "times,inconsolata,hyper");
      return r26;
    };
    p7 = prom<V +>{
      out2 = ld out;
      out3 = force? out2;
      checkMissing(out3);
      return out3;
    };
    r29 = dyn cat[, , , , , , sep, file]("\\documentclass[", p5, "paper]{book}\n", "\\usepackage[", p6, "]{Rd}\n", "", p7);
    check L96() else D16();
  D8():
    deopt 34 [enc3];
  D16():
    deopt 77 [r29];
  L77():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(dx);
  L78():
    enc4 = force? enc3;
    checkMissing(enc4);
    r16 = `==`(enc4, "unknown");
    c3 = `as.logical`(r16);
    if c3 then L79() else L13();
  L96():
    index1 = ld index;
    check L97() else D17();
  D17():
    deopt 78 [index1];
  L13():
    goto L18(NULL);
  L18(pkg_enc5):
    goto L19();
  L79():
    desc = ld desc;
    check L80() else D9();
  L97():
    index2 = force? index1;
    checkMissing(index2);
    c6 = `as.logical`(index2);
    if c6 then L98() else L20();
  D9():
    deopt 38 [desc];
  L20():
    goto L21();
  L21():
    Sys_getenv2 = ldf `Sys.getenv`;
    check L102() else D20();
  L80():
    desc1 = force? desc;
    checkMissing(desc1);
    c4 = `is.object`(desc1);
    if c4 then L81() else L82(desc1);
  L98():
    writeLines1 = ldf writeLines;
    check L99() else D18();
  D18():
    deopt 81 [];
  D20():
    deopt 88 [];
  L14(dx3):
    st pkg_enc = dx3;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L84() else L85();
  L81():
    dr2 = tryDispatchBuiltin.1("[", desc1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L83() else L82(dr2);
  L82(desc3):
    __1 = ldf `[` in base;
    r17 = dyn __1(desc3, "Encoding");
    goto L14(r17);
  L99():
    p8 = prom<V +>{
      out4 = ld out;
      out5 = force? out4;
      checkMissing(out5);
      return out5;
    };
    r31 = dyn writeLines1("\\usepackage{makeidx}", p8);
    check L100() else D19();
  L102():
    r33 = dyn Sys_getenv2("RD2PDF_INPUTENC", "inputenc");
    check L103() else D21();
  D19():
    deopt 84 [r31];
  D21():
    deopt 91 [r33];
  L15(r19):
    r21 = `!`(r19);
    c5 = `as.logical`(r21);
    if c5 then L88() else L16();
  L83():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L14(dx2);
  L84():
    pkg_enc = ld pkg_enc;
    check L86() else D10();
  L85():
    r18 = dyn base1(<sym pkg_enc>);
    goto L15(r18);
  L100():
    goto L21();
  L103():
    st inputenc = r33;
    latex_canonical_encoding = ldf latex_canonical_encoding;
    check L104() else D22();
  D10():
    deopt 46 [pkg_enc];
  D22():
    deopt 94 [];
  L16():
    goto L17(NULL);
  L17(pkg_enc4):
    goto L18(pkg_enc4);
  L86():
    pkg_enc1 = force? pkg_enc;
    checkMissing(pkg_enc1);
    is_na = ldf `is.na` in base;
    r20 = dyn is_na(pkg_enc1);
    check L87() else D11();
  L88():
    pkg_enc2 = ld pkg_enc;
    check L89() else D12();
  L104():
    p9 = prom<V +>{
      outputEncoding1 = ld outputEncoding;
      outputEncoding2 = force? outputEncoding1;
      checkMissing(outputEncoding2);
      return outputEncoding2;
    };
    r35 = dyn latex_canonical_encoding(p9);
    check L105() else D23();
  D11():
    deopt 49 [r20];
  D12():
    deopt 51 [pkg_enc2];
  D23():
    deopt 96 [r35];
  L87():
    goto L15(r20);
  L89():
    pkg_enc3 = force? pkg_enc2;
    checkMissing(pkg_enc3);
    st enc = pkg_enc3;
    goto L17(pkg_enc3);
  L105():
    st latex_outputEncoding = r35;
    latex_outputEncoding = ld latex_outputEncoding;
    check L106() else D24();
  D24():
    deopt 98 [latex_outputEncoding];
  L106():
    latex_outputEncoding1 = force? latex_outputEncoding;
    checkMissing(latex_outputEncoding1);
    r36 = `==`(latex_outputEncoding1, "utf8");
    st asUTF8 = r36;
    asUTF8 = ld asUTF8;
    check L107() else D25();
  D25():
    deopt 103 [asUTF8];
  L107():
    asUTF9 = force? asUTF8;
    checkMissing(asUTF9);
    c7 = `as.logical`(asUTF9);
    if c7 then L108() else L22(c7);
  L22(c9):
    c13 = `as.logical`(c9);
    if c13 then L111() else L23();
  L108():
    inputenc = ld inputenc;
    check L109() else D26();
  D26():
    deopt 105 [c7, inputenc];
  L23():
    paste1 = ldf paste0;
    check L115() else D29();
  L24(r39):
    st setEncoding = r39;
    st useGraphicx = "% \\usepackage{graphicx} % @USE GRAPHICX@";
    writeLines2 = ldf writeLines;
    check L117() else D31();
  L109():
    inputenc1 = force? inputenc;
    checkMissing(inputenc1);
    r37 = `==`(inputenc1, "inputenc");
    c10 = `as.logical`(r37);
    c11 = `&&`(c7, c10);
    goto L22(c11);
  L111():
    paste0 = ldf paste0;
    check L112() else D27();
  D27():
    deopt 111 [];
  D29():
    deopt 117 [];
  D31():
    deopt 129 [];
  L112():
    r38 = dyn paste0("\\makeatletter\\@ifl@t@r\\fmtversion{2018/04/01}{}{", "\\usepackage[utf8]{inputenc}}", "\\makeatother");
    check L113() else D28();
  L115():
    p11 = prom<V +>{
      asUTF10 = ld asUTF8;
      asUTF11 = force? asUTF10;
      checkMissing(asUTF11);
      c14 = `as.logical`(asUTF11);
      if c14 then L1() else L0();
    L0():
      paste2 = ldf paste0;
      p10 = prom<V +>{
        sym2 = ldf c;
        base2 = ldf c in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L3() else L4();
      L0(r41):
        return r41;
      L3():
        description1 = ld description;
        description2 = force? description1;
        checkMissing(description2);
        c15 = `as.logical`(description2);
        if c15 then L5() else L1();
      L4():
        r40 = dyn base2(<lang if(description, "utf8")>, <sym latex_outputEncoding>);
        goto L0(r40);
      L1():
        goto L2(NULL);
      L2(r42):
        latex_outputEncoding2 = ld latex_outputEncoding;
        latex_outputEncoding3 = force? latex_outputEncoding2;
        checkMissing(latex_outputEncoding3);
        c16 = ldf c in base;
        r43 = dyn c16(r42, latex_outputEncoding3);
        goto L0(r43);
      L5():
        goto L2("utf8");
      };
      r45 = dyn paste2[, collapse](p10, ",");
      return r45;
    L1():
      return "utf8";
    };
    p12 = prom<V +>{
      inputenc2 = ld inputenc;
      inputenc3 = force? inputenc2;
      checkMissing(inputenc3);
      return inputenc3;
    };
    r48 = dyn paste1("\\usepackage[", p11, "]{", p12, "} % @SET ENCODING@");
    check L116() else D30();
  L117():
    p13 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L10() else L11();
    L0(r50):
      return r50;
    L10():
      setEncoding = ld setEncoding;
      setEncoding1 = force? setEncoding;
      checkMissing(setEncoding1);
      inputenc4 = ld inputenc;
      inputenc5 = force? inputenc4;
      checkMissing(inputenc5);
      r51 = `==`(inputenc5, "inputenx");
      c17 = `as.logical`(r51);
      if c17 then L12() else L1(c17);
    L11():
      r49 = dyn base3(<sym setEncoding>, <lang if(`&&`(`==`(inputenc, "inputenx"), asUTF8), {
          "\\IfFileExists{ix-utf8enc.dfu}{\\input{ix-utf8enc.dfu}}{}"
        })>, <lang if(`&&`(nzchar(Sys.getenv("_R_CYRILLIC_TEX_")), asUTF8), {
          "\\IfFileExists{t2aenc.def}{\\usepackage[T2A]{fontenc}}{}"
        })>, <sym useGraphicx>, <lang if(index, "\\makeindex{}")>, "\\begin{document}");
      goto L0(r49);
    L1(c19):
      c23 = `as.logical`(c19);
      if c23 then L14() else L2();
    L12():
      asUTF12 = ld asUTF8;
      asUTF13 = force? asUTF12;
      checkMissing(asUTF13);
      c20 = `as.logical`(asUTF13);
      c21 = `&&`(c17, c20);
      goto L1(c21);
    L2():
      goto L3(NULL);
    L3(r52):
      sym4 = ldf nzchar;
      base4 = ldf nzchar in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L16() else L17();
    L14():
      goto L3("\\IfFileExists{ix-utf8enc.dfu}{\\input{ix-utf8enc.dfu}}{}");
    L4(r54):
      c24 = `as.logical`(r54);
      if c24 then L18() else L5(c24);
    L16():
      Sys_getenv3 = ldf `Sys.getenv`;
      r55 = dyn Sys_getenv3("_R_CYRILLIC_TEX_");
      nzchar1 = ldf nzchar in base;
      r56 = dyn nzchar1(r55);
      goto L4(r56);
    L17():
      r53 = dyn base4(<lang Sys.getenv("_R_CYRILLIC_TEX_")>);
      goto L4(r53);
    L5(c26):
      c30 = `as.logical`(c26);
      if c30 then L20() else L6();
    L18():
      asUTF14 = ld asUTF8;
      asUTF15 = force? asUTF14;
      checkMissing(asUTF15);
      c27 = `as.logical`(asUTF15);
      c28 = `&&`(c24, c27);
      goto L5(c28);
    L6():
      goto L7(NULL);
    L7(r57):
      useGraphicx = ld useGraphicx;
      useGraphicx1 = force? useGraphicx;
      checkMissing(useGraphicx1);
      index3 = ld index;
      index4 = force? index3;
      checkMissing(index4);
      c31 = `as.logical`(index4);
      if c31 then L22() else L8();
    L20():
      goto L7("\\IfFileExists{t2aenc.def}{\\usepackage[T2A]{fontenc}}{}");
    L8():
      goto L9(NULL);
    L9(r58):
      c32 = ldf c in base;
      r59 = dyn c32(setEncoding1, r52, r57, useGraphicx1, r58, "\\begin{document}");
      goto L0(r59);
    L22():
      goto L9("\\makeindex{}");
    };
    p14 = prom<V +>{
      out6 = ld out;
      out7 = force? out6;
      checkMissing(out7);
      return out7;
    };
    r62 = dyn writeLines2(p13, p14);
    check L118() else D32();
  D28():
    deopt 115 [r38];
  D30():
    deopt 123 [r48];
  D32():
    deopt 132 [r62];
  L113():
    goto L24(r38);
  L116():
    goto L24(r48);
  L118():
    sym5 = ldf nzchar;
    base5 = ldf nzchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L119() else L120();
  L25(r64):
    r66 = `!`(r64);
    c33 = `as.logical`(r66);
    if c33 then L123() else L26();
  L119():
    title1 = ld title;
    check L121() else D33();
  L120():
    r63 = dyn base5(<sym title>);
    goto L25(r63);
  D33():
    deopt 135 [title1];
  L26():
    goto L38();
  L38():
    cat1 = ldf cat;
    check L166() else D58();
  L121():
    title2 = force? title1;
    checkMissing(title2);
    nzchar2 = ldf nzchar in base;
    r65 = dyn nzchar2(title2);
    check L122() else D34();
  L123():
    sym6 = ldf `is.character`;
    base6 = ldf `is.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L124() else L125();
  D34():
    deopt 138 [r65];
  D58():
    deopt 228 [];
  L27(r68):
    c35 = `as.logical`(r68);
    if c35 then L127() else L28();
  L122():
    goto L25(r65);
  L124():
    desc4 = ld desc;
    check L126() else D35();
  L125():
    r67 = dyn base6(<sym desc>);
    goto L27(r67);
  L166():
    p27 = prom<V +>{
      title3 = ld title;
      title4 = force? title3;
      checkMissing(title4);
      return title4;
    };
    p28 = prom<V +>{
      out8 = ld out;
      out9 = force? out8;
      checkMissing(out9);
      return out9;
    };
    r110 = dyn cat1[, , , , , , , sep, file]("\\chapter*{}\n", "\\begin{center}\n", "{\\textbf{\\huge ", p27, "}}\n", "\\par\\bigskip{\\large \\today}\n", "\\end{center}\n", "", p28);
    check L167() else D59();
  D35():
    deopt 141 [desc4];
  D59():
    deopt 240 [r110];
  L28():
    file_exists1 = ldf `file.exists`;
    check L131() else D38();
  L29(r72):
    goto L38();
  L126():
    desc5 = force? desc4;
    checkMissing(desc5);
    c34 = `is.character`(desc5);
    goto L27(c34);
  L127():
    paste3 = ldf paste0;
    check L128() else D36();
  L167():
    description3 = ld description;
    check L168() else D60();
  D36():
    deopt 145 [];
  D38():
    deopt 152 [];
  D60():
    deopt 241 [description3];
  L128():
    p15 = prom<V +>{
      desc6 = ld desc;
      desc7 = force? desc6;
      checkMissing(desc7);
      c36 = `is.object`(desc7);
      if c36 then L1() else L2(desc7);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", desc7);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(desc9):
      __2 = ldf `[` in base;
      r69 = dyn __2(desc9, "Package");
      goto L0(r69);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r71 = dyn paste3("Package `", p15, "'");
    check L129() else D37();
  L131():
    p17 = prom<V +>{
      file_path1 = ldf `file.path`;
      p16 = prom<V +>{
        pkgdir3 = ld pkgdir;
        pkgdir4 = force? pkgdir3;
        checkMissing(pkgdir4);
        return pkgdir4;
      };
      r74 = dyn file_path1(p16, "DESCRIPTION.in");
      st f = r74;
      invisible.0();
      return r74;
    };
    r76 = dyn file_exists1(p17);
    check L132() else D39();
  L168():
    description4 = force? description3;
    checkMissing(description4);
    c43 = `as.logical`(description4);
    if c43 then L169() else L39();
  D37():
    deopt 149 [r71];
  D39():
    deopt 154 [r76];
  L39():
    goto L43();
  L43():
    st hasFigures = FALSE;
    file_exists4 = ldf `file.exists`;
    check L185() else D71();
  L129():
    st title = r71;
    goto L29(r71);
  L132():
    c37 = `as.logical`(r76);
    if c37 then L133() else L30();
  L169():
    file_exists2 = ldf `file.exists`;
    check L170() else D61();
  D61():
    deopt 244 [];
  D71():
    deopt 279 [];
  L30():
    dir_exists = ldf `dir.exists`;
    check L142() else D44();
  L133():
    read_dcf1 = ldf `read.dcf`;
    check L134() else D40();
  L170():
    p30 = prom<V +>{
      file_path2 = ldf `file.path`;
      p29 = prom<V +>{
        pkgdir11 = ld pkgdir;
        pkgdir12 = force? pkgdir11;
        checkMissing(pkgdir12);
        return pkgdir12;
      };
      r112 = dyn file_path2(p29, "DESCRIPTION");
      st f = r112;
      invisible.0();
      return r112;
    };
    r114 = dyn file_exists2(p30);
    check L171() else D62();
  L185():
    p44 = prom<V +>{
      file_path6 = ldf `file.path`;
      p43 = prom<V +>{
        pkgdir19 = ld pkgdir;
        pkgdir20 = force? pkgdir19;
        checkMissing(pkgdir20);
        return pkgdir20;
      };
      r139 = dyn file_path6(p43, "DESCRIPTION");
      return r139;
    };
    r141 = dyn file_exists4(p44);
    check L186() else D72();
  D40():
    deopt 156 [];
  D44():
    deopt 172 [];
  D62():
    deopt 246 [r114];
  D72():
    deopt 281 [r141];
  L134():
    p18 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    r78 = dyn read_dcf1(p18);
    check L135() else D41();
  L142():
    p20 = prom<V +>{
      pkgdir5 = ld pkgdir;
      pkgdir6 = force? pkgdir5;
      checkMissing(pkgdir6);
      return pkgdir6;
    };
    r86 = dyn dir_exists(p20);
    check L143() else D45();
  L171():
    c44 = `as.logical`(r114);
    if c44 then L172() else L40();
  L186():
    c46 = `as.logical`(r141);
    if c46 then L187() else L44(c46);
  D41():
    deopt 158 [r78];
  D45():
    deopt 174 [r86];
  L40():
    file_exists3 = ldf `file.exists`;
    check L176() else D65();
  L41(r120):
    goto L43();
  L44(c48):
    c70 = `as.logical`(c48);
    if c70 then L199() else L47();
  L135():
    c38 = `is.object`(r78);
    if c38 then L136() else L137();
  L143():
    c40 = `as.logical`(r86);
    if c40 then L144() else L32();
  L172():
    _DESCRIPTION_to_latex = ldf `.DESCRIPTION_to_latex`;
    check L173() else D63();
  L187():
    dir_exists1 = ldf `dir.exists`;
    check L188() else D73();
  D63():
    deopt 248 [];
  D65():
    deopt 255 [];
  D73():
    deopt 283 [c46];
  L31(dx7):
    st desc = dx7;
    paste4 = ldf paste0;
    check L139() else D42();
  L32():
    strsplit = ldf strsplit;
    check L148() else D48();
  L33():
    gsub = ldf gsub;
    check L161() else D54();
  L47():
    goto L48();
  L48():
    only_meta1 = ld only_meta;
    check L201() else D79();
  L136():
    dr6 = tryDispatchBuiltin.1("[", r78);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L138() else L137();
  L137():
    __3 = ldf `[` in base;
    r81 = dyn __3(r78, 1.0, <missing>);
    goto L31(r81);
  L144():
    paste5 = ldf paste0;
    check L145() else D46();
  L173():
    p31 = prom<V +>{
      f4 = ld f;
      f5 = force? f4;
      checkMissing(f5);
      return f5;
    };
    p32 = prom<V +>{
      out10 = ld out;
      out11 = force? out10;
      checkMissing(out11);
      return out11;
    };
    p33 = prom<V +>{
      asUTF16 = ld asUTF8;
      asUTF17 = force? asUTF16;
      checkMissing(asUTF17);
      r117 = `!`(asUTF17);
      return r117;
    };
    r119 = dyn _DESCRIPTION_to_latex[, , writeEncoding](p31, p32, p33);
    check L174() else D64();
  L176():
    p35 = prom<V +>{
      file_path3 = ldf `file.path`;
      p34 = prom<V +>{
        pkgdir13 = ld pkgdir;
        pkgdir14 = force? pkgdir13;
        checkMissing(pkgdir14);
        return pkgdir14;
      };
      r122 = dyn file_path3(p34, "DESCRIPTION.in");
      st f = r122;
      invisible.0();
      return r122;
    };
    r124 = dyn file_exists3(p35);
    check L177() else D66();
  L188():
    p46 = prom<V +>{
      file_path7 = ldf `file.path`;
      p45 = prom<V +>{
        pkgdir21 = ld pkgdir;
        pkgdir22 = force? pkgdir21;
        checkMissing(pkgdir22);
        return pkgdir22;
      };
      r143 = dyn file_path7(p45, "man");
      return r143;
    };
    r145 = dyn dir_exists1(p46);
    check L189() else D74();
  L199():
    st only_meta = TRUE;
    goto L48();
  D42():
    deopt 165 [];
  D46():
    deopt 176 [];
  D48():
    deopt 183 [];
  D54():
    deopt 213 [];
  D64():
    deopt 253 [r119];
  D66():
    deopt 257 [r124];
  D74():
    deopt 285 [c46, r145];
  D79():
    deopt 303 [only_meta1];
  L138():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L31(dx6);
  L139():
    p19 = prom<V +>{
      desc10 = ld desc;
      desc11 = force? desc10;
      checkMissing(desc11);
      c39 = `is.object`(desc11);
      if c39 then L1() else L2(desc11);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", desc11);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(desc13):
      __4 = ldf `[` in base;
      r82 = dyn __4(desc13, "Package");
      goto L0(r82);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r84 = dyn paste4("Package `", p19, "'");
    check L140() else D43();
  L145():
    p21 = prom<V +>{
      pkgdir7 = ld pkgdir;
      pkgdir8 = force? pkgdir7;
      checkMissing(pkgdir8);
      return pkgdir8;
    };
    r88 = dyn paste5("all in \\file{", p21, "}");
    check L146() else D47();
  L148():
    p22 = prom<V +>{
      files_or_dir1 = ld files_or_dir;
      files_or_dir2 = force? files_or_dir1;
      checkMissing(files_or_dir2);
      return files_or_dir2;
    };
    r91 = dyn strsplit(p22, "[[:space:]]+");
    check L149() else D49();
  L161():
    p25 = prom<V +>{
      subj3 = ld subj;
      subj4 = force? subj3;
      checkMissing(subj4);
      return subj4;
    };
    r104 = dyn gsub("([_$])", "\\\\\\1", p25);
    check L162() else D55();
  L174():
    goto L41(r119);
  L177():
    c45 = `as.logical`(r124);
    if c45 then L178() else L42();
  L189():
    c49 = `as.logical`(r145);
    if c49 then L45(c46, c49) else L190();
  L201():
    only_meta2 = force? only_meta1;
    checkMissing(only_meta2);
    r156 = `!`(only_meta2);
    c71 = `as.logical`(r156);
    if c71 then L202() else L49();
  D43():
    deopt 169 [r84];
  D47():
    deopt 180 [r88];
  D49():
    deopt 186 [r91];
  D55():
    deopt 217 [r104];
  L42():
    goto L41(NULL);
  L45(c50, c51):
    c58 = `as.logical`(c51);
    if c58 then L46(c50, c58) else L194();
  L49():
    goto L55();
  L55():
    index5 = ld index;
    check L223() else D89();
  L140():
    st title = r84;
    goto L29(r84);
  L146():
    st subj = r88;
    goto L33();
  L149():
    c41 = `is.object`(r91);
    if c41 then L150() else L151(r91);
  L162():
    st subj = r104;
    paste7 = ldf paste;
    check L163() else D56();
  L178():
    readLines = ldf readLines;
    check L179() else D67();
  L190():
    dir_exists2 = ldf `dir.exists`;
    check L191() else D75();
  L202():
    dir_exists4 = ldf `dir.exists`;
    check L203() else D80();
  D56():
    deopt 220 [];
  D67():
    deopt 259 [];
  D75():
    deopt 287 [c46, c49];
  D80():
    deopt 307 [];
  D89():
    deopt 351 [index5];
  L34(dx11):
    st files = dx11;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L153() else L154();
  L46(c59, c60):
    r154 = `!`(c60);
    c67 = `as.logical`(r154);
    c68 = `&&`(c59, c67);
    goto L44(c68);
  L150():
    dr10 = tryDispatchBuiltin.1("[[", r91);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L152() else L151(dr10);
  L151(r93):
    __5 = ldf `[[` in base;
    r94 = dyn __5(r93, 1);
    goto L34(r94);
  L163():
    p26 = prom<V +>{
      subj5 = ld subj;
      subj6 = force? subj5;
      checkMissing(subj6);
      return subj6;
    };
    r106 = dyn paste7("\\R{} documentation}} \\par\\bigskip{{\\Large of", p26);
    check L164() else D57();
  L179():
    p37 = prom<V +>{
      file_path4 = ldf `file.path`;
      p36 = prom<V +>{
        pkgdir15 = ld pkgdir;
        pkgdir16 = force? pkgdir15;
        checkMissing(pkgdir16);
        return pkgdir16;
      };
      r126 = dyn file_path4(p36, "../../../VERSION");
      return r126;
    };
    r128 = dyn readLines(p37);
    check L180() else D68();
  L191():
    p48 = prom<V +>{
      file_path8 = ldf `file.path`;
      p47 = prom<V +>{
        pkgdir23 = ld pkgdir;
        pkgdir24 = force? pkgdir23;
        checkMissing(pkgdir24);
        return pkgdir24;
      };
      r147 = dyn file_path8(p47, "help");
      return r147;
    };
    r149 = dyn dir_exists2(p48);
    check L192() else D76();
  L194():
    dir_exists3 = ldf `dir.exists`;
    check L195() else D77();
  L203():
    p51 = prom<V +>{
      files_or_dir3 = ld files_or_dir;
      files_or_dir4 = force? files_or_dir3;
      checkMissing(files_or_dir4);
      return files_or_dir4;
    };
    r158 = dyn dir_exists4(p51);
    check L204() else D81();
  L223():
    index6 = force? index5;
    checkMissing(index6);
    c77 = `as.logical`(index6);
    if c77 then L224() else L56();
  D57():
    deopt 223 [r106];
  D68():
    deopt 261 [r128];
  D76():
    deopt 289 [c46, c49, r149];
  D77():
    deopt 292 [c50, c58];
  D81():
    deopt 309 [r158];
  L35(r96):
    r98 = `>`(r96, 1);
    c42 = `as.logical`(r98);
    if c42 then L157() else L36();
  L56():
    goto L57();
  L57():
    writeLines5 = ldf writeLines;
    check L228() else D92();
  L152():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L34(dx10);
  L153():
    files = ld files;
    check L155() else D50();
  L154():
    r95 = dyn base7(<sym files>);
    goto L35(r95);
  L164():
    st title = r106;
    goto L29(r106);
  L180():
    st version = r128;
    _DESCRIPTION_to_latex1 = ldf `.DESCRIPTION_to_latex`;
    check L181() else D69();
  L192():
    c54 = `as.logical`(r149);
    c55 = `||`(c49, c54);
    goto L45(c46, c55);
  L195():
    p50 = prom<V +>{
      file_path9 = ldf `file.path`;
      p49 = prom<V +>{
        pkgdir25 = ld pkgdir;
        pkgdir26 = force? pkgdir25;
        checkMissing(pkgdir26);
        return pkgdir26;
      };
      r151 = dyn file_path9(p49, "latex");
      return r151;
    };
    r153 = dyn dir_exists3(p50);
    check L196() else D78();
  L204():
    c72 = `as.logical`(r158);
    if c72 then L205() else L50();
  L224():
    writeLines4 = ldf writeLines;
    check L225() else D90();
  D50():
    deopt 193 [files];
  D69():
    deopt 264 [];
  D78():
    deopt 294 [c50, c58, r153];
  D90():
    deopt 354 [];
  D92():
    deopt 361 [];
  L36():
    goto L37("");
  L37(r99):
    st subj1 = r99;
    paste6 = ldf paste0;
    check L159() else D52();
  L50():
    goto L51();
  L51():
    _Rdfiles2tex = ldf `.Rdfiles2tex`;
    check L209() else D84();
  L155():
    files1 = force? files;
    checkMissing(files1);
    length = ldf length in base;
    r97 = dyn length(files1);
    check L156() else D51();
  L157():
    goto L37(" etc.");
  L181():
    p39 = prom<V +>{
      file_path5 = ldf `file.path`;
      p38 = prom<V +>{
        pkgdir17 = ld pkgdir;
        pkgdir18 = force? pkgdir17;
        checkMissing(pkgdir18);
        return pkgdir18;
      };
      r130 = dyn file_path5(p38, "DESCRIPTION.in");
      return r130;
    };
    p40 = prom<V +>{
      out12 = ld out;
      out13 = force? out12;
      checkMissing(out13);
      return out13;
    };
    p41 = prom<V +>{
      version = ld version;
      version1 = force? version;
      checkMissing(version1);
      return version1;
    };
    p42 = prom<V +>{
      asUTF18 = ld asUTF8;
      asUTF19 = force? asUTF18;
      checkMissing(asUTF19);
      r134 = `!`(asUTF19);
      return r134;
    };
    r136 = dyn _DESCRIPTION_to_latex1[, , , writeEncoding](p39, p40, p41, p42);
    check L182() else D70();
  L196():
    c63 = `as.logical`(r153);
    c64 = `||`(c58, c63);
    goto L46(c50, c64);
  L205():
    writeLines3 = ldf writeLines;
    check L206() else D82();
  L225():
    p63 = prom<V +>{
      out18 = ld out;
      out19 = force? out18;
      checkMissing(out19);
      return out19;
    };
    r184 = dyn writeLines4("\\printindex{}", p63);
    check L226() else D91();
  L228():
    p64 = prom<V +>{
      out20 = ld out;
      out21 = force? out20;
      checkMissing(out21);
      return out21;
    };
    r187 = dyn writeLines5("\\end{document}", p64);
    check L229() else D93();
  D51():
    deopt 196 [r97];
  D52():
    deopt 205 [];
  D70():
    deopt 270 [r136];
  D82():
    deopt 311 [];
  D84():
    deopt 318 [];
  D91():
    deopt 357 [r184];
  D93():
    deopt 364 [r187];
  L156():
    goto L35(r97);
  L159():
    p23 = prom<V +>{
      pkgdir9 = ld pkgdir;
      pkgdir10 = force? pkgdir9;
      checkMissing(pkgdir10);
      return pkgdir10;
    };
    p24 = prom<V +>{
      subj1 = ld subj1;
      subj2 = force? subj1;
      checkMissing(subj2);
      return subj2;
    };
    r102 = dyn paste6("\\file{", p23, "}", p24);
    check L160() else D53();
  L182():
    goto L41(r136);
  L206():
    p53 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L3() else L4();
    L0(r160):
      return r160;
    L3():
      asUTF20 = ld asUTF8;
      asUTF21 = force? asUTF20;
      checkMissing(asUTF21);
      r161 = `!`(asUTF21);
      c73 = `as.logical`(r161);
      if c73 then L5() else L1();
    L4():
      r159 = dyn base8("\\Rdcontents{Contents}", <lang if(`!`(asUTF8), paste0("\\inputencoding{", latex_outputEncoding, "}"))>);
      goto L0(r159);
    L1():
      goto L2(NULL);
    L2(r164):
      c74 = ldf c in base;
      r165 = dyn c74("\\Rdcontents{Contents}", r164);
      goto L0(r165);
    L5():
      paste8 = ldf paste0;
      p52 = prom<V +>{
        latex_outputEncoding4 = ld latex_outputEncoding;
        latex_outputEncoding5 = force? latex_outputEncoding4;
        checkMissing(latex_outputEncoding5);
        return latex_outputEncoding5;
      };
      r163 = dyn paste8("\\inputencoding{", p52, "}");
      goto L2(r163);
    };
    p54 = prom<V +>{
      out14 = ld out;
      out15 = force? out14;
      checkMissing(out15);
      return out15;
    };
    r168 = dyn writeLines3(p53, p54);
    check L207() else D83();
  L209():
    p55 = prom<V +>{
      files_or_dir5 = ld files_or_dir;
      files_or_dir6 = force? files_or_dir5;
      checkMissing(files_or_dir6);
      return files_or_dir6;
    };
    p56 = prom<V +>{
      out16 = ld out;
      out17 = force? out16;
      checkMissing(out17);
      return out17;
    };
    p57 = prom<V +>{
      enc5 = ld enc;
      enc6 = force? enc5;
      checkMissing(enc6);
      return enc6;
    };
    p58 = prom<V +>{
      outputEncoding3 = ld outputEncoding;
      outputEncoding4 = force? outputEncoding3;
      checkMissing(outputEncoding4);
      return outputEncoding4;
    };
    p59 = prom<V +>{
      OSdir1 = ld OSdir;
      OSdir2 = force? OSdir1;
      checkMissing(OSdir2);
      return OSdir2;
    };
    p60 = prom<V +>{
      internals1 = ld internals;
      internals2 = force? internals1;
      checkMissing(internals2);
      return internals2;
    };
    p61 = prom<V +>{
      silent1 = ld silent;
      silent2 = force? silent1;
      checkMissing(silent2);
      return silent2;
    };
    p62 = prom<V +>{
      pkglist1 = ld pkglist;
      pkglist2 = force? pkglist1;
      checkMissing(pkglist2);
      return pkglist2;
    };
    r178 = dyn _Rdfiles2tex[, , encoding, outputEncoding, append, extraDirs, internals, silent, pkglist](p55, p56, p57, p58, TRUE, p59, p60, p61, p62);
    check L210() else D85();
  L226():
    goto L57();
  L229():
    close = ldf close;
    check L230() else D94();
  D53():
    deopt 210 [r102];
  D83():
    deopt 314 [r168];
  D85():
    deopt 335 [r178];
  D94():
    deopt 366 [];
  L160():
    st subj = r102;
    goto L33();
  L207():
    goto L51();
  L210():
    st res = r178;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L211() else L212();
  L230():
    p65 = prom<V +>{
      out22 = ld out;
      out23 = force? out22;
      checkMissing(out23);
      return out23;
    };
    r189 = dyn close(p65);
    check L231() else D95();
  D95():
    deopt 368 [r189];
  L52(r180):
    c75 = `as.logical`(r180);
    if c75 then L215() else L53();
  L211():
    res = ld res;
    check L213() else D86();
  L212():
    r179 = dyn base9(<sym res>);
    goto L52(r179);
  L231():
    hasFigures = ld hasFigures;
    check L232() else D96();
  D86():
    deopt 339 [res];
  D96():
    deopt 369 [hasFigures];
  L53():
    goto L54(NULL);
  L54(dx14):
    goto L55();
  L213():
    res1 = force? res;
    checkMissing(res1);
    length1 = ldf length in base;
    r181 = dyn length1(res1);
    check L214() else D87();
  L215():
    res2 = ld res;
    check L216() else D88();
  L232():
    hasFigures1 = force? hasFigures;
    checkMissing(hasFigures1);
    c78 = `as.logical`(hasFigures1);
    if c78 then L233() else L58();
  D87():
    deopt 342 [r181];
  D88():
    deopt 343 [res2];
  L58():
    goto L60();
  L60():
    sym10 = ldf invisible;
    base10 = ldf invisible in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L244() else L245();
  L214():
    goto L52(r181);
  L216():
    res3 = force? res2;
    checkMissing(res3);
    c76 = `is.object`(res3);
    if c76 then L218() else L219(res3);
  L233():
    readLines1 = ldf readLines;
    check L234() else D97();
  D97():
    deopt 372 [];
  L61(r203):
    popenv;
    return r203;
  L217(dx13):
    st hasFigures = dx13;
    goto L54(dx13);
  L218():
    dr12 = tryDispatchBuiltin.1("$", res3);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L220() else L219(dr12);
  L219(res5):
    r182 = `$`(res5, <sym hasFigures>);
    goto L217(r182);
  L234():
    p66 = prom<V +>{
      outfile3 = ld outfile;
      outfile4 = force? outfile3;
      checkMissing(outfile4);
      return outfile4;
    };
    r191 = dyn readLines1(p66);
    check L235() else D98();
  L244():
    invisible = ldf invisible in base;
    r204 = dyn invisible(NULL);
    check L246() else D103();
  L245():
    r202 = dyn base10(NULL);
    goto L61(r202);
  D98():
    deopt 374 [r191];
  D103():
    deopt 396 [r204];
  L220():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L217(dx12);
  L235():
    st lines = r191;
    l = ld lines;
    c79 = `is.object`(l);
    if c79 then L236() else L237("\\usepackage{graphicx}\\setkeys{Gin}{width=0.7\\textwidth}", l);
  L246():
    goto L61(r204);
  L59(dx17):
    st lines = dx17;
    writeLines6 = ldf writeLines;
    check L241() else D101();
  L236():
    dr14 = tryDispatchBuiltin.0("[<-", l, "\\usepackage{graphicx}\\setkeys{Gin}{width=0.7\\textwidth}");
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L238() else L237("\\usepackage{graphicx}\\setkeys{Gin}{width=0.7\\textwidth}", dr14);
  L237(r193, l2):
    lines = ld lines;
    check L239() else D99();
  D99():
    deopt 379 [r193, l2, "\\usepackage{graphicx}\\setkeys{Gin}{width=0.7\\textwidth}", lines];
  D101():
    deopt 386 [];
  L238():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L59(dx16);
  L239():
    lines1 = force? lines;
    checkMissing(lines1);
    useGraphicx2 = ld useGraphicx;
    check L240() else D100();
  L241():
    p67 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      return lines3;
    };
    p68 = prom<V +>{
      outfile5 = ld outfile;
      outfile6 = force? outfile5;
      checkMissing(outfile6);
      return outfile6;
    };
    r200 = dyn writeLines6(p67, p68);
    check L242() else D102();
  D100():
    deopt 380 [r193, l2, "\\usepackage{graphicx}\\setkeys{Gin}{width=0.7\\textwidth}", lines1, useGraphicx2];
  D102():
    deopt 389 [r200];
  L240():
    useGraphicx3 = force? useGraphicx2;
    checkMissing(useGraphicx3);
    r196 = `==`(lines1, useGraphicx3);
    ___ = ldf `[<-` in base;
    r197 = dyn ___(l2, "\\usepackage{graphicx}\\setkeys{Gin}{width=0.7\\textwidth}", r196);
    goto L59(r197);
  L242():
    goto L60();
  }
}