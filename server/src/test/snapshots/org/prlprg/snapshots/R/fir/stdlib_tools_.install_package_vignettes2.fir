fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3662174095;
    st `.install_package_vignettes2` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3662174095(dir, outDir, encoding, tangle) {
  (reg dir:*, reg outDir:*, reg encoding:*, reg tangle:*) -+> V { var dir:*, var outDir:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, var tangle:*, reg tangle_isMissing:L, reg tangle_orDefault:*, reg file_path_as_absolute:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg file_path:cls, reg r4:V, reg c:cls, reg r5:V, reg dir_exists:cls, reg file_path1:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg subdirs:*, reg subdirs1:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg ok:*, reg ok1:V, reg any:cls, reg r13:V, reg r14:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg invisible:cls, reg r17:V, reg subdirs2:*, reg subdirs3:V, reg c2:L, reg subdirs5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ok2:*, reg ok3:V, reg __:cls, reg r20:V, reg c3:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r21:V, reg file_path2:cls, reg dir5:*, reg dir6:V, reg p4:p(V +), reg subdir:*, reg subdir1:V, reg p5:p(V +), reg r24:V, reg file_path_as_absolute1:cls, reg outDir1:*, reg outDir2:V, reg p6:p(V +), reg r26:V, reg basename:cls, reg outDir3:*, reg outDir4:V, reg p7:p(V +), reg r28:V, reg file_path3:cls, reg outDir5:*, reg outDir6:V, reg p8:p(V +), reg r30:V, reg dir_exists1:cls, reg outVignetteDir:*, reg outVignetteDir1:V, reg p9:p(V +), reg r32:V, reg r33:V, reg c4:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg r35:V, reg invisible1:cls, reg r36:V, reg file_test:cls, reg file_path4:cls, reg vignetteDir:*, reg vignetteDir1:V, reg p10:p(V +), reg r40:V, reg p11:p(V +), reg r42:V, reg file_path5:cls, reg outDir7:*, reg outDir8:V, reg p12:p(V +), reg r44:V, reg pkgVignettes:cls, reg dir7:*, reg dir8:V, reg p13:p(V +), reg subdir2:*, reg subdir3:V, reg p14:p(V +), reg r47:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r48:V, reg r49:V, reg vigns:*, reg vigns1:V, reg c5:L, reg vigns3:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r50:V, reg length:cls, reg r51:V, reg r52:V, reg c6:L, reg list_files:cls, reg vignetteDir2:*, reg vignetteDir3:V, reg p15:p(V +), reg r54:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r55:V, reg r56:V, reg files:*, reg files1:V, reg length1:cls, reg r57:V, reg r58:V, reg c7:L, reg c9:V, reg hasHtmlIndex:*, reg hasHtmlIndex1:V, reg r59:V, reg c10:L, reg c11:V, reg c13:L, reg _writeVignetteHtmlIndex:cls, reg packageName:*, reg packageName1:V, reg p16:p(V +), reg htmlIndex:*, reg htmlIndex1:V, reg p17:p(V +), reg r62:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r64:V, reg r65:V, reg invisible2:cls, reg r66:V, reg subdir4:*, reg subdir5:V, reg r69:V, reg c14:L, reg file_copy:cls, reg vigns4:*, reg vigns5:V, reg c15:L, reg vigns7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r70:V, reg p18:p(V +), reg outVignetteDir2:*, reg outVignetteDir3:V, reg p19:p(V +), reg r73:V, reg tryCatch:cls, reg pkgVignettes1:cls, reg outDir9:*, reg outDir10:V, reg p20:p(V +), reg r76:V, reg p21:p(V +), reg r78:cls, reg p22:p(V +), reg r80:V, reg _build_vignette_index:cls, reg vigns8:*, reg vigns9:V, reg p23:p(V +), reg r82:V, reg tangle1:*, reg tangle2:V, reg c16:L, reg c18:V, reg NROW:cls, reg vignetteIndex:*, reg vignetteIndex1:V, reg p24:p(V +), reg r84:V, reg r85:V, reg c19:L, reg c20:V, reg c22:L, reg getwd:cls, reg r86:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r87:V, reg r88:V, reg cwd:*, reg cwd1:V, reg c23:V, reg c24:L, reg stop:cls, reg r89:V, reg setwd:cls, reg outVignetteDir4:*, reg outVignetteDir5:V, reg p25:p(V +), reg r92:V, reg loadVignetteBuilder:cls, reg dir9:*, reg dir10:V, reg p26:p(V +), reg r94:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r95:V, reg r96:V, reg vigns10:*, reg vigns11:V, reg c25:L, reg vigns13:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r97:V, reg r98:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c26:L, reg x:V, reg vigns14:*, reg vigns15:V, reg c27:L, reg i6:I, reg vigns17:V, reg dr10:V, reg dc5:L, reg dx12:V, reg i8:I, reg dx13:V, reg r99:V, reg c28:L, reg i10:I, reg dx15:V, reg dr12:V, reg dc6:L, reg dx16:V, reg i12:I, reg dx17:V, reg i13:*, reg i14:V, reg __2:cls, reg r100:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r101:V, reg i17:I, reg r102:V, reg vigns18:*, reg vigns19:V, reg c29:L, reg i19:I, reg vigns21:V, reg dr14:V, reg dc7:L, reg dx18:V, reg i21:I, reg dx19:V, reg r103:V, reg c30:V, reg r104:V, reg c31:L, reg i23:I, reg c33:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r105:V, reg i26:I, reg c36:L, reg r106:V, reg vigns22:*, reg vigns23:V, reg c37:L, reg i28:I, reg c39:L, reg vigns25:V, reg dr16:V, reg dc8:L, reg dx20:V, reg i30:I, reg c41:L, reg dx21:V, reg r107:V, reg c42:L, reg i32:I, reg c44:L, reg dx23:V, reg dr18:V, reg dc9:L, reg dx24:V, reg i34:I, reg c46:L, reg dx25:V, reg file:*, reg file1:V, reg __3:cls, reg r108:V, reg c47:L, reg i36:I, reg c49:L, reg dx27:V, reg dr20:V, reg dc10:L, reg dx28:V, reg i38:I, reg c51:L, reg dx29:V, reg __4:cls, reg r109:V, reg c52:V, reg r110:V, reg c53:L, reg c54:V, reg c56:L, reg basename1:cls, reg file2:*, reg file3:V, reg p27:p(V +), reg r113:V, reg vigns26:*, reg vigns27:V, reg c57:L, reg i45:I, reg vigns29:V, reg dr22:V, reg dc11:L, reg dx30:V, reg i47:I, reg dx31:V, reg r114:V, reg c58:L, reg i49:I, reg dx33:V, reg dr24:V, reg dc12:L, reg dx34:V, reg i51:I, reg dx35:V, reg i52:*, reg i53:V, reg __5:cls, reg r115:V, reg cat:cls, reg sQuote:cls, reg basename2:cls, reg file4:*, reg file5:V, reg p28:p(V +), reg r117:V, reg p29:p(V +), reg r119:V, reg p30:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r121:V, reg r122:V, reg enc:*, reg enc1:V, reg nzchar:cls, reg r123:V, reg c59:L, reg paste:cls, reg sQuote1:cls, reg enc2:*, reg enc3:V, reg p31:p(V +), reg r125:V, reg p32:p(V +), reg r127:V, reg p33:p(V +), reg r129:V, reg try:cls, reg vignetteEngine:cls, reg vigns30:*, reg vigns31:V, reg c60:L, reg vigns33:V, reg dr26:V, reg dc13:L, reg dx36:V, reg dx37:V, reg r130:V, reg c61:L, reg dx39:V, reg dr28:V, reg dc14:L, reg dx40:V, reg dx41:V, reg i54:*, reg i55:V, reg __6:cls, reg r131:V, reg p34:p(V +), reg r133:V, reg p35:p(V +), reg r135:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r136:V, reg i58:I, reg r137:V, reg engine:*, reg engine1:V, reg inherits:cls, reg r138:V, reg r139:V, reg c62:L, reg engine2:*, reg engine3:V, reg c63:L, reg i62:I, reg engine5:V, reg dr30:V, reg dc15:L, reg dx42:V, reg i64:I, reg dx43:V, reg r140:V, reg dx44:cls, reg file6:*, reg file7:V, reg p36:p(V +), reg enc4:*, reg enc5:V, reg p37:p(V +), reg r143:V, reg i65:I, reg setwd1:cls, reg outVignetteDir6:*, reg outVignetteDir7:V, reg p38:p(V +), reg r146:V, reg setwd2:cls, reg cwd2:*, reg cwd3:V, reg p39:p(V +), reg r148:V, reg pkgVignettes2:cls, reg outDir11:*, reg outDir12:V, reg p40:p(V +), reg r150:V, reg unlist:cls, reg vigns34:*, reg vigns35:V, reg c64:L, reg vigns37:V, reg dr32:V, reg dc16:L, reg dx45:V, reg dx46:V, reg r151:V, reg p41:p(V +), reg r153:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r154:V, reg r155:V, reg sources:*, reg sources1:V, reg r156:I, reg s1:V, reg l1:I, reg i66:I, reg i67:I, reg i68:I, reg c65:L, reg x1:V, reg sources2:*, reg sources3:V, reg c66:L, reg i72:I, reg sources5:V, reg dr34:V, reg dc17:L, reg dx47:V, reg i74:I, reg dx48:V, reg i75:*, reg i76:V, reg __7:cls, reg r157:V, reg file_test1:cls, reg file8:*, reg file9:V, reg p42:p(V +), reg r159:V, reg r160:V, reg c67:L, reg readLines:cls, reg file10:*, reg file11:V, reg p43:p(V +), reg r163:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r164:V, reg i83:I, reg r165:V, reg grepl:cls, reg bfr:*, reg bfr1:V, reg p44:p(V +), reg r167:V, reg all:cls, reg r168:V, reg c68:L, reg unlink:cls, reg file12:*, reg file13:V, reg p45:p(V +), reg r170:V, reg i86:I, reg pkgVignettes3:cls, reg outDir13:*, reg outDir14:V, reg p46:p(V +), reg r173:V, reg character:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r174:V, reg r175:V, reg vigns38:*, reg vigns39:V, reg c69:L, reg vigns41:V, reg dr36:V, reg dc18:L, reg dx49:V, reg dx50:V, reg r176:V, reg length2:cls, reg r177:V, reg p47:p(V +), reg r179:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r180:V, reg r181:V, reg vigns42:*, reg vigns43:V, reg c70:L, reg vigns45:V, reg dr38:V, reg dc19:L, reg dx51:V, reg dx52:V, reg r182:V, reg r183:I, reg s2:V, reg l2:I, reg i87:I, reg i88:I, reg i89:I, reg c71:L, reg x2:V, reg vigns46:*, reg vigns47:V, reg c72:L, reg i93:I, reg vigns49:V, reg dr40:V, reg dc20:L, reg dx53:V, reg i95:I, reg dx54:V, reg r184:V, reg c73:L, reg i97:I, reg dx56:V, reg dr42:V, reg dc21:L, reg dx57:V, reg i99:I, reg dx58:V, reg i100:*, reg i101:V, reg __8:cls, reg r185:V, reg find_vignette_product:cls, reg name:*, reg name1:V, reg p48:p(V +), reg vigns50:*, reg vigns51:V, reg c74:L, reg vigns53:V, reg dr44:V, reg dc22:L, reg dx59:V, reg dx60:V, reg r187:V, reg p49:p(V +), reg engine6:*, reg engine7:V, reg p50:p(V +), reg r190:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r191:V, reg i104:I, reg r192:V, reg source:*, reg source1:V, reg length3:cls, reg r193:V, reg r194:V, reg c75:L, reg basename3:cls, reg source2:*, reg source3:V, reg p51:p(V +), reg r196:V, reg l3:*, reg c76:L, reg i108:I, reg r198:V, reg l5:*, reg dr46:V, reg dc23:L, reg dx61:V, reg i110:I, reg r200:V, reg dx62:V, reg i111:*, reg i112:V, reg ___:cls, reg r201:V, reg i113:I, reg sources6:*, reg sources7:V, reg l6:*, reg c77:L, reg sources9:V, reg l8:*, reg dr48:V, reg dc24:L, reg dx63:V, reg sources11:V, reg dx64:V, reg r203:V, reg hasHtmlIndex2:*, reg hasHtmlIndex3:V, reg r204:V, reg c78:L, reg _writeVignetteHtmlIndex1:cls, reg packageName2:*, reg packageName3:V, reg p52:p(V +), reg htmlIndex2:*, reg htmlIndex3:V, reg p53:p(V +), reg vignetteIndex2:*, reg vignetteIndex3:V, reg p54:p(V +), reg r208:V, reg saveRDS:cls, reg vignetteIndex4:*, reg vignetteIndex5:V, reg p55:p(V +), reg file_path6:cls, reg outDir15:*, reg outDir16:V, reg p56:p(V +), reg r212:V, reg p57:p(V +), reg r214:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r215:V, reg r216:V, reg invisible3:cls, reg r217:V |
    mkenv;
    st dir = dir;
    st outDir = outDir;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L0("") else L0(encoding);
  L0(encoding_orDefault):
    st encoding = encoding_orDefault;
    tangle_isMissing = missing.0(tangle);
    if tangle_isMissing then L1(FALSE) else L1(tangle);
  L1(tangle_orDefault):
    st tangle = tangle_orDefault;
    file_path_as_absolute = ldf file_path_as_absolute;
    check L63() else D0();
  D0():
    deopt 1 [];
  L63():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn file_path_as_absolute(p);
    check L64() else D1();
  D1():
    deopt 3 [r1];
  L64():
    st dir = r1;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L65() else L66();
  L2(r3):
    st subdirs = r3;
    dir_exists = ldf `dir.exists`;
    check L70() else D5();
  L65():
    file_path = ldf `file.path`;
    check L67() else D2();
  L66():
    r2 = dyn base("vignettes", <lang file.path("inst", "doc")>);
    goto L2(r2);
  D2():
    deopt 9 [];
  D5():
    deopt 17 [];
  L67():
    r4 = dyn file_path("inst", "doc");
    check L68() else D3();
  L70():
    p3 = prom<V +>{
      file_path1 = ldf `file.path`;
      p1 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      p2 = prom<V +>{
        subdirs = ld subdirs;
        subdirs1 = force? subdirs;
        checkMissing(subdirs1);
        return subdirs1;
      };
      r8 = dyn file_path1(p1, p2);
      return r8;
    };
    r10 = dyn dir_exists(p3);
    check L71() else D6();
  D3():
    deopt 12 [r4];
  D6():
    deopt 19 [r10];
  L68():
    c = ldf c in base;
    r5 = dyn c("vignettes", r4);
    check L69() else D4();
  L71():
    st ok = r10;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L72() else L73();
  D4():
    deopt 14 [r5];
  L3(r12):
    r14 = `!`(r12);
    c1 = `as.logical`(r14);
    if c1 then L76() else L4();
  L69():
    goto L2(r5);
  L72():
    ok = ld ok;
    check L74() else D7();
  L73():
    r11 = dyn base1(<sym ok>);
    goto L3(r11);
  D7():
    deopt 23 [ok];
  L4():
    subdirs2 = ld subdirs;
    check L82() else D10();
  L74():
    ok1 = force? ok;
    checkMissing(ok1);
    any = ldf any in base;
    r13 = dyn any(ok1);
    check L75() else D8();
  L76():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L77() else L78();
  D8():
    deopt 26 [r13];
  D10():
    deopt 35 [subdirs2];
  L5(r16):
    popenv;
    return r16;
  L75():
    goto L3(r13);
  L77():
    invisible = ldf invisible in base;
    r17 = dyn invisible();
    check L79() else D9();
  L78():
    r15 = dyn base2();
    goto L5(r15);
  L82():
    subdirs3 = force? subdirs2;
    checkMissing(subdirs3);
    c2 = `is.object`(subdirs3);
    if c2 then L83() else L84(subdirs3);
  D9():
    deopt 31 [r17];
  L7(dx1):
    c3 = `is.object`(dx1);
    if c3 then L87() else L88(dx1);
  L79():
    goto L5(r17);
  L83():
    dr = tryDispatchBuiltin.1("[", subdirs3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L85() else L84(dr);
  L84(subdirs5):
    ok2 = ld ok;
    check L86() else D11();
  D11():
    deopt 37 [subdirs5, ok2];
  L8(dx5):
    st subdir = dx5;
    file_path2 = ldf `file.path`;
    check L90() else D12();
  L85():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L86():
    ok3 = force? ok2;
    __ = ldf `[` in base;
    r20 = dyn __(subdirs5, ok3);
    goto L7(r20);
  L87():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L89() else L88(dr2);
  L88(dx3):
    __1 = ldf `[` in base;
    r21 = dyn __1(dx3, 1);
    goto L8(r21);
  D12():
    deopt 45 [];
  L89():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx4);
  L90():
    p4 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    p5 = prom<V +>{
      subdir = ld subdir;
      subdir1 = force? subdir;
      checkMissing(subdir1);
      return subdir1;
    };
    r24 = dyn file_path2(p4, p5);
    check L91() else D13();
  D13():
    deopt 48 [r24];
  L91():
    st vignetteDir = r24;
    file_path_as_absolute1 = ldf file_path_as_absolute;
    check L92() else D14();
  D14():
    deopt 51 [];
  L92():
    p6 = prom<V +>{
      outDir1 = ld outDir;
      outDir2 = force? outDir1;
      checkMissing(outDir2);
      return outDir2;
    };
    r26 = dyn file_path_as_absolute1(p6);
    check L93() else D15();
  D15():
    deopt 53 [r26];
  L93():
    st outDir = r26;
    basename = ldf basename;
    check L94() else D16();
  D16():
    deopt 56 [];
  L94():
    p7 = prom<V +>{
      outDir3 = ld outDir;
      outDir4 = force? outDir3;
      checkMissing(outDir4);
      return outDir4;
    };
    r28 = dyn basename(p7);
    check L95() else D17();
  D17():
    deopt 58 [r28];
  L95():
    st packageName = r28;
    file_path3 = ldf `file.path`;
    check L96() else D18();
  D18():
    deopt 61 [];
  L96():
    p8 = prom<V +>{
      outDir5 = ld outDir;
      outDir6 = force? outDir5;
      checkMissing(outDir6);
      return outDir6;
    };
    r30 = dyn file_path3(p8, "doc");
    check L97() else D19();
  D19():
    deopt 64 [r30];
  L97():
    st outVignetteDir = r30;
    dir_exists1 = ldf `dir.exists`;
    check L98() else D20();
  D20():
    deopt 67 [];
  L98():
    p9 = prom<V +>{
      outVignetteDir = ld outVignetteDir;
      outVignetteDir1 = force? outVignetteDir;
      checkMissing(outVignetteDir1);
      return outVignetteDir1;
    };
    r32 = dyn dir_exists1(p9);
    check L99() else D21();
  D21():
    deopt 69 [r32];
  L99():
    r33 = `!`(r32);
    c4 = `as.logical`(r33);
    if c4 then L100() else L9();
  L9():
    file_test = ldf file_test;
    check L106() else D23();
  L100():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L101() else L102();
  D23():
    deopt 79 [];
  L10(r35):
    popenv;
    return r35;
  L101():
    invisible1 = ldf invisible in base;
    r36 = dyn invisible1();
    check L103() else D22();
  L102():
    r34 = dyn base3();
    goto L10(r34);
  L106():
    p11 = prom<V +>{
      file_path4 = ldf `file.path`;
      p10 = prom<V +>{
        vignetteDir = ld vignetteDir;
        vignetteDir1 = force? vignetteDir;
        checkMissing(vignetteDir1);
        return vignetteDir1;
      };
      r40 = dyn file_path4(p10, "index.html");
      return r40;
    };
    r42 = dyn file_test("-f", p11);
    check L107() else D24();
  D22():
    deopt 74 [r36];
  D24():
    deopt 82 [r42];
  L103():
    goto L10(r36);
  L107():
    st hasHtmlIndex = r42;
    file_path5 = ldf `file.path`;
    check L108() else D25();
  D25():
    deopt 85 [];
  L108():
    p12 = prom<V +>{
      outDir7 = ld outDir;
      outDir8 = force? outDir7;
      checkMissing(outDir8);
      return outDir8;
    };
    r44 = dyn file_path5(p12, "doc", "index.html");
    check L109() else D26();
  D26():
    deopt 89 [r44];
  L109():
    st htmlIndex = r44;
    pkgVignettes = ldf pkgVignettes;
    check L110() else D27();
  D27():
    deopt 92 [];
  L110():
    p13 = prom<V +>{
      dir7 = ld dir;
      dir8 = force? dir7;
      checkMissing(dir8);
      return dir8;
    };
    p14 = prom<V +>{
      subdir2 = ld subdir;
      subdir3 = force? subdir2;
      checkMissing(subdir3);
      return subdir3;
    };
    r47 = dyn pkgVignettes[dir, subdirs, check](p13, p14, TRUE);
    check L111() else D28();
  D28():
    deopt 99 [r47];
  L111():
    st vigns = r47;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L112() else L113();
  L12(r49):
    r52 = `==`(r49, 0);
    c6 = `as.logical`(r52);
    if c6 then L120() else L13();
  L112():
    vigns = ld vigns;
    check L114() else D29();
  L113():
    r48 = dyn base4(<lang `$`(vigns, docs)>);
    goto L12(r48);
  D29():
    deopt 103 [vigns];
  L13():
    subdir4 = ld subdir;
    check L139() else D39();
  L114():
    vigns1 = force? vigns;
    checkMissing(vigns1);
    c5 = `is.object`(vigns1);
    if c5 then L116() else L117(vigns1);
  L120():
    list_files = ldf `list.files`;
    check L121() else D31();
  D31():
    deopt 111 [];
  D39():
    deopt 145 [subdir4];
  L115(dx7):
    length = ldf length in base;
    r51 = dyn length(dx7);
    check L119() else D30();
  L116():
    dr4 = tryDispatchBuiltin.1("$", vigns1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L118() else L117(dr4);
  L117(vigns3):
    r50 = `$`(vigns3, <sym docs>);
    goto L115(r50);
  L121():
    p15 = prom<V +>{
      vignetteDir2 = ld vignetteDir;
      vignetteDir3 = force? vignetteDir2;
      checkMissing(vignetteDir3);
      return vignetteDir3;
    };
    r54 = dyn list_files[, `all.files`, `no..`](p15, TRUE, TRUE);
    check L122() else D32();
  L139():
    subdir5 = force? subdir4;
    checkMissing(subdir5);
    r69 = `==`(subdir5, "vignettes");
    c14 = `as.logical`(r69);
    if c14 then L140() else L20();
  D30():
    deopt 107 [r51];
  D32():
    deopt 117 [r54];
  L20():
    goto L21();
  L21():
    tryCatch = ldf tryCatch;
    check L144() else D42();
  L118():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L115(dx6);
  L119():
    goto L12(r51);
  L122():
    st files = r54;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L123() else L124();
  L140():
    file_copy = ldf `file.copy`;
    check L141() else D40();
  D40():
    deopt 150 [];
  D42():
    deopt 157 [];
  L14(r56):
    r58 = `>`(r56, 0);
    c7 = `as.logical`(r58);
    if c7 then L127() else L15(c7);
  L123():
    files = ld files;
    check L125() else D33();
  L124():
    r55 = dyn base5(<sym files>);
    goto L14(r55);
  L141():
    p18 = prom<V +>{
      vigns4 = ld vigns;
      vigns5 = force? vigns4;
      checkMissing(vigns5);
      c15 = `is.object`(vigns5);
      if c15 then L1() else L2(vigns5);
    L0(dx9):
      return dx9;
    L1():
      dr6 = tryDispatchBuiltin.1("$", vigns5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(vigns7):
      r70 = `$`(vigns7, <sym docs>);
      goto L0(r70);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx8);
    };
    p19 = prom<V +>{
      outVignetteDir2 = ld outVignetteDir;
      outVignetteDir3 = force? outVignetteDir2;
      checkMissing(outVignetteDir3);
      return outVignetteDir3;
    };
    r73 = dyn file_copy(p18, p19);
    check L142() else D41();
  L144():
    p21 = prom<V +>{
      pkgVignettes1 = ldf pkgVignettes;
      p20 = prom<V +>{
        outDir9 = ld outDir;
        outDir10 = force? outDir9;
        checkMissing(outDir10);
        return outDir10;
      };
      r76 = dyn pkgVignettes1[dir, subdirs, output, source](p20, "doc", TRUE, TRUE);
      return r76;
    };
    p22 = prom<V +>{
      r78 = clos inner3438750739;
      return r78;
    };
    r80 = dyn tryCatch[, error](p21, p22);
    check L145() else D43();
  D33():
    deopt 121 [files];
  D41():
    deopt 153 [r73];
  D43():
    deopt 161 [r80];
  L15(c9):
    c13 = `as.logical`(c9);
    if c13 then L130() else L16();
  L125():
    files1 = force? files;
    checkMissing(files1);
    length1 = ldf length in base;
    r57 = dyn length1(files1);
    check L126() else D34();
  L127():
    hasHtmlIndex = ld hasHtmlIndex;
    check L128() else D35();
  L142():
    goto L21();
  L145():
    st vigns = r80;
    _build_vignette_index = ldf `.build_vignette_index`;
    check L146() else D44();
  D34():
    deopt 124 [r57];
  D35():
    deopt 127 [c7, hasHtmlIndex];
  D44():
    deopt 164 [];
  L16():
    goto L17();
  L17():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L134() else L135();
  L126():
    goto L14(r57);
  L128():
    hasHtmlIndex1 = force? hasHtmlIndex;
    checkMissing(hasHtmlIndex1);
    r59 = `!`(hasHtmlIndex1);
    c10 = `as.logical`(r59);
    c11 = `&&`(c7, c10);
    goto L15(c11);
  L130():
    _writeVignetteHtmlIndex = ldf `.writeVignetteHtmlIndex`;
    check L131() else D36();
  L146():
    p23 = prom<V +>{
      vigns8 = ld vigns;
      vigns9 = force? vigns8;
      checkMissing(vigns9);
      return vigns9;
    };
    r82 = dyn _build_vignette_index(p23);
    check L147() else D45();
  D36():
    deopt 132 [];
  D45():
    deopt 166 [r82];
  L18(r65):
    popenv;
    return r65;
  L131():
    p16 = prom<V +>{
      packageName = ld packageName;
      packageName1 = force? packageName;
      checkMissing(packageName1);
      return packageName1;
    };
    p17 = prom<V +>{
      htmlIndex = ld htmlIndex;
      htmlIndex1 = force? htmlIndex;
      checkMissing(htmlIndex1);
      return htmlIndex1;
    };
    r62 = dyn _writeVignetteHtmlIndex(p16, p17);
    check L132() else D37();
  L134():
    invisible2 = ldf invisible in base;
    r66 = dyn invisible2();
    check L136() else D38();
  L135():
    r64 = dyn base6();
    goto L18(r64);
  L147():
    st vignetteIndex = r82;
    tangle1 = ld tangle;
    check L148() else D46();
  D37():
    deopt 135 [r62];
  D38():
    deopt 141 [r66];
  D46():
    deopt 168 [tangle1];
  L132():
    goto L17();
  L136():
    goto L18(r66);
  L148():
    tangle2 = force? tangle1;
    checkMissing(tangle2);
    c16 = `as.logical`(tangle2);
    if c16 then L149() else L22(c16);
  L22(c18):
    c22 = `as.logical`(c18);
    if c22 then L153() else L23();
  L149():
    NROW = ldf NROW;
    check L150() else D47();
  D47():
    deopt 171 [c16];
  L23():
    goto L59();
  L59():
    hasHtmlIndex2 = ld hasHtmlIndex;
    check L311() else D111();
  L150():
    p24 = prom<V +>{
      vignetteIndex = ld vignetteIndex;
      vignetteIndex1 = force? vignetteIndex;
      checkMissing(vignetteIndex1);
      return vignetteIndex1;
    };
    r84 = dyn NROW(p24);
    check L151() else D48();
  L153():
    getwd = ldf getwd;
    check L154() else D49();
  D48():
    deopt 173 [c16, r84];
  D49():
    deopt 178 [];
  D111():
    deopt 425 [hasHtmlIndex2];
  L151():
    r85 = `>`(r84, 0);
    c19 = `as.logical`(r85);
    c20 = `&&`(c16, c19);
    goto L22(c20);
  L154():
    r86 = dyn getwd();
    check L155() else D50();
  L311():
    hasHtmlIndex3 = force? hasHtmlIndex2;
    checkMissing(hasHtmlIndex3);
    r204 = `!`(hasHtmlIndex3);
    c78 = `as.logical`(r204);
    if c78 then L312() else L60();
  D50():
    deopt 179 [r86];
  L60():
    goto L61();
  L61():
    saveRDS = ldf saveRDS;
    check L316() else D114();
  L155():
    st cwd = r86;
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L156() else L157();
  L312():
    _writeVignetteHtmlIndex1 = ldf `.writeVignetteHtmlIndex`;
    check L313() else D112();
  D112():
    deopt 429 [];
  D114():
    deopt 437 [];
  L24(r88):
    c24 = `as.logical`(r88);
    if c24 then L159() else L25();
  L156():
    cwd = ld cwd;
    check L158() else D51();
  L157():
    r87 = dyn base7(<sym cwd>);
    goto L24(r87);
  L313():
    p52 = prom<V +>{
      packageName2 = ld packageName;
      packageName3 = force? packageName2;
      checkMissing(packageName3);
      return packageName3;
    };
    p53 = prom<V +>{
      htmlIndex2 = ld htmlIndex;
      htmlIndex3 = force? htmlIndex2;
      checkMissing(htmlIndex3);
      return htmlIndex3;
    };
    p54 = prom<V +>{
      vignetteIndex2 = ld vignetteIndex;
      vignetteIndex3 = force? vignetteIndex2;
      checkMissing(vignetteIndex3);
      return vignetteIndex3;
    };
    r208 = dyn _writeVignetteHtmlIndex1(p52, p53, p54);
    check L314() else D113();
  L316():
    p55 = prom<V +>{
      vignetteIndex4 = ld vignetteIndex;
      vignetteIndex5 = force? vignetteIndex4;
      checkMissing(vignetteIndex5);
      return vignetteIndex5;
    };
    p57 = prom<V +>{
      file_path6 = ldf `file.path`;
      p56 = prom<V +>{
        outDir15 = ld outDir;
        outDir16 = force? outDir15;
        checkMissing(outDir16);
        return outDir16;
      };
      r212 = dyn file_path6(p56, "Meta", "vignette.rds");
      return r212;
    };
    r214 = dyn saveRDS[, file](p55, p57);
    check L317() else D115();
  D51():
    deopt 182 [cwd];
  D113():
    deopt 433 [r208];
  D115():
    deopt 441 [r214];
  L25():
    goto L26();
  L26():
    setwd = ldf setwd;
    check L163() else D54();
  L158():
    cwd1 = force? cwd;
    checkMissing(cwd1);
    c23 = `==`(cwd1, NULL);
    goto L24(c23);
  L159():
    stop = ldf stop;
    check L160() else D52();
  L314():
    goto L61();
  L317():
    sym18 = ldf invisible;
    base18 = ldf invisible in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L318() else L319();
  D52():
    deopt 186 [];
  D54():
    deopt 192 [];
  L62(r216):
    popenv;
    return r216;
  L160():
    r89 = dyn stop("current working directory cannot be ascertained");
    check L161() else D53();
  L163():
    p25 = prom<V +>{
      outVignetteDir4 = ld outVignetteDir;
      outVignetteDir5 = force? outVignetteDir4;
      checkMissing(outVignetteDir5);
      return outVignetteDir5;
    };
    r92 = dyn setwd(p25);
    check L164() else D55();
  L318():
    invisible3 = ldf invisible in base;
    r217 = dyn invisible3();
    check L320() else D116();
  L319():
    r215 = dyn base18();
    goto L62(r215);
  D53():
    deopt 188 [r89];
  D55():
    deopt 194 [r92];
  D116():
    deopt 445 [r217];
  L161():
    goto L26();
  L164():
    loadVignetteBuilder = ldf loadVignetteBuilder;
    check L165() else D56();
  L320():
    goto L62(r217);
  D56():
    deopt 196 [];
  L165():
    p26 = prom<V +>{
      dir9 = ld dir;
      dir10 = force? dir9;
      checkMissing(dir10);
      return dir10;
    };
    r94 = dyn loadVignetteBuilder[, mustwork](p26, FALSE);
    check L166() else D57();
  D57():
    deopt 200 [r94];
  L166():
    sym8 = ldf seq_along;
    base8 = ldf seq_along in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L167() else L168();
  L27(r96):
    s = toForSeq(r96);
    l = length(s);
    i = 0;
    goto L28(i);
  L167():
    vigns10 = ld vigns;
    check L169() else D58();
  L168():
    r95 = dyn base8(<lang `$`(vigns, docs)>);
    goto L27(r95);
  D58():
    deopt 202 [vigns10];
  L28(i1):
    i2 = `+`.1(i1, 1);
    c26 = `<`.1(l, i2);
    if c26 then L174() else L41();
  L169():
    vigns11 = force? vigns10;
    checkMissing(vigns11);
    c25 = `is.object`(vigns11);
    if c25 then L171() else L172(vigns11);
  L41():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    vigns14 = ld vigns;
    check L175() else D59();
  L170(dx11):
    r98 = seq_along(dx11);
    goto L27(r98);
  L171():
    dr8 = tryDispatchBuiltin.1("$", vigns11);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L173() else L172(dr8);
  L172(vigns13):
    r97 = `$`(vigns13, <sym docs>);
    goto L170(r97);
  L174():
    setwd2 = ldf setwd;
    check L239() else D78();
  D59():
    deopt 206 [i2, vigns14];
  D78():
    deopt 291 [];
  L173():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L170(dx10);
  L175():
    vigns15 = force? vigns14;
    checkMissing(vigns15);
    c27 = `is.object`(vigns15);
    if c27 then L177() else L178(i2, vigns15);
  L239():
    p39 = prom<V +>{
      cwd2 = ld cwd;
      cwd3 = force? cwd2;
      checkMissing(cwd3);
      return cwd3;
    };
    r148 = dyn setwd2(p39);
    check L240() else D79();
  D79():
    deopt 293 [r148];
  L176(i8, dx13):
    c28 = `is.object`(dx13);
    if c28 then L180() else L181(i8, dx13);
  L177():
    dr10 = tryDispatchBuiltin.1("$", vigns15);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L179() else L178(i2, dr10);
  L178(i6, vigns17):
    r99 = `$`(vigns17, <sym docs>);
    goto L176(i6, r99);
  L240():
    pkgVignettes2 = ldf pkgVignettes;
    check L241() else D80();
  D80():
    deopt 295 [];
  L29(i12, dx17):
    st file = dx17;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L184() else L185();
  L179():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L176(i2, dx12);
  L180():
    dr12 = tryDispatchBuiltin.1("[", dx13);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L182() else L181(i8, dr12);
  L181(i10, dx15):
    i13 = ld i;
    check L183() else D60();
  L241():
    p40 = prom<V +>{
      outDir11 = ld outDir;
      outDir12 = force? outDir11;
      checkMissing(outDir12);
      return outDir12;
    };
    r150 = dyn pkgVignettes2[dir, subdirs, source](p40, "doc", TRUE);
    check L242() else D81();
  D60():
    deopt 209 [i10, dx15, i13];
  D81():
    deopt 302 [r150];
  L30(i17, r102):
    r104 = `!`(r102);
    c31 = `as.logical`(r104);
    if c31 then L191() else L31(i17, c31);
  L182():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L29(i8, dx16);
  L183():
    i14 = force? i13;
    __2 = ldf `[` in base;
    r100 = dyn __2(dx15, i14);
    goto L29(i10, r100);
  L184():
    vigns18 = ld vigns;
    check L186() else D61();
  L185():
    r101 = dyn base9(<lang `$`(vigns, sources)>);
    goto L30(i12, r101);
  L242():
    st vigns = r150;
    unlist = ldf unlist;
    check L243() else D82();
  D61():
    deopt 214 [i12, vigns18];
  D82():
    deopt 305 [];
  L31(i23, c33):
    c56 = `as.logical`(c33);
    if c56 then L207() else L35();
  L186():
    vigns19 = force? vigns18;
    checkMissing(vigns19);
    c29 = `is.object`(vigns19);
    if c29 then L188() else L189(i12, vigns19);
  L191():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L192() else L193();
  L243():
    p41 = prom<V +>{
      vigns34 = ld vigns;
      vigns35 = force? vigns34;
      checkMissing(vigns35);
      c64 = `is.object`(vigns35);
      if c64 then L1() else L2(vigns35);
    L0(dx46):
      return dx46;
    L1():
      dr32 = tryDispatchBuiltin.1("$", vigns35);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(vigns37):
      r151 = `$`(vigns37, <sym sources>);
      goto L0(r151);
    L3():
      dx45 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx45);
    };
    r153 = dyn unlist(p41);
    check L244() else D83();
  D83():
    deopt 307 [r153];
  L32(i26, c36, r106):
    r110 = `!`(r106);
    c53 = `as.logical`(r110);
    c54 = `&&`(c36, c53);
    goto L31(i26, c54);
  L35():
    basename1 = ldf basename;
    check L210() else D64();
  L187(i21, dx19):
    c30 = `==`(dx19, NULL);
    goto L30(i21, c30);
  L188():
    dr14 = tryDispatchBuiltin.1("$", vigns19);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L190() else L189(i12, dr14);
  L189(i19, vigns21):
    r103 = `$`(vigns21, <sym sources>);
    goto L187(i19, r103);
  L192():
    vigns22 = ld vigns;
    check L194() else D62();
  L193():
    r105 = dyn base10(<lang `[[`(`[`(`$`(vigns, sources), file), 1.0)>);
    goto L32(i17, c31, r105);
  L207():
    goto L28(i23);
  L244():
    st sources = r153;
    sym13 = ldf seq_along;
    base13 = ldf seq_along in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L245() else L246();
  D62():
    deopt 220 [i17, c31, vigns22];
  D64():
    deopt 237 [i23];
  L42(r155):
    s1 = toForSeq(r155);
    l1 = length(s1);
    i66 = 0;
    goto L43(i66);
  L190():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L187(i12, dx18);
  L194():
    vigns23 = force? vigns22;
    checkMissing(vigns23);
    c37 = `is.object`(vigns23);
    if c37 then L196() else L197(i17, c31, vigns23);
  L210():
    p27 = prom<V +>{
      file2 = ld file;
      file3 = force? file2;
      checkMissing(file3);
      return file3;
    };
    r113 = dyn basename1(p27);
    check L211() else D65();
  L245():
    sources = ld sources;
    check L247() else D84();
  L246():
    r154 = dyn base13(<sym sources>);
    goto L42(r154);
  D65():
    deopt 239 [i23, r113];
  D84():
    deopt 310 [sources];
  L43(i67):
    i68 = `+`.1(i67, 1);
    c65 = `<`.1(l1, i68);
    if c65 then L248() else L50();
  L195(i30, c41, dx21):
    c42 = `is.object`(dx21);
    if c42 then L199() else L200(i30, c41, dx21);
  L196():
    dr16 = tryDispatchBuiltin.1("$", vigns23);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L198() else L197(i17, c31, dr16);
  L197(i28, c39, vigns25):
    r107 = `$`(vigns25, <sym sources>);
    goto L195(i28, c39, r107);
  L211():
    st file = r113;
    vigns26 = ld vigns;
    check L212() else D66();
  L247():
    sources1 = force? sources;
    checkMissing(sources1);
    r156 = seq_along(sources1);
    goto L42(r156);
  D66():
    deopt 241 [i23, vigns26];
  L33(i34, c46, dx25):
    c47 = `is.object`(dx25);
    if c47 then L203() else L204(i34, c46, dx25);
  L50():
    x1 = `[[`(s1, i68, NULL, TRUE);
    st i = x1;
    sources2 = ld sources;
    check L249() else D85();
  L198():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L195(i17, c31, dx20);
  L199():
    dr18 = tryDispatchBuiltin.1("[", dx21);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L201() else L200(i30, c41, dr18);
  L200(i32, c44, dx23):
    file = ld file;
    check L202() else D63();
  L212():
    vigns27 = force? vigns26;
    checkMissing(vigns27);
    c57 = `is.object`(vigns27);
    if c57 then L214() else L215(i23, vigns27);
  L248():
    pkgVignettes3 = ldf pkgVignettes;
    check L270() else D96();
  D63():
    deopt 223 [i32, c44, dx23, file];
  D85():
    deopt 313 [i68, sources2];
  D96():
    deopt 357 [];
  L34(i38, c51, dx29):
    c52 = `==`(dx29, NULL);
    goto L32(i38, c51, c52);
  L201():
    dx24 = getTryDispatchBuiltinValue(dr18);
    goto L33(i30, c41, dx24);
  L202():
    file1 = force? file;
    __3 = ldf `[` in base;
    r108 = dyn __3(dx23, file1);
    goto L33(i32, c44, r108);
  L203():
    dr20 = tryDispatchBuiltin.1("[[", dx25);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L205() else L204(i34, c46, dr20);
  L204(i36, c49, dx27):
    __4 = ldf `[[` in base;
    r109 = dyn __4(dx27, 1.0);
    goto L34(i36, c49, r109);
  L213(i47, dx31):
    c58 = `is.object`(dx31);
    if c58 then L217() else L218(i47, dx31);
  L214():
    dr22 = tryDispatchBuiltin.1("$", vigns27);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L216() else L215(i23, dr22);
  L215(i45, vigns29):
    r114 = `$`(vigns29, <sym encodings>);
    goto L213(i45, r114);
  L249():
    sources3 = force? sources2;
    checkMissing(sources3);
    c66 = `is.object`(sources3);
    if c66 then L250() else L251(i68, sources3);
  L270():
    p46 = prom<V +>{
      outDir13 = ld outDir;
      outDir14 = force? outDir13;
      checkMissing(outDir14);
      return outDir14;
    };
    r173 = dyn pkgVignettes3[dir, subdirs, source](p46, "doc", TRUE);
    check L271() else D97();
  D97():
    deopt 364 [r173];
  L37(i51, dx35):
    st enc = dx35;
    cat = ldf cat;
    check L221() else D68();
  L44(i74, dx48):
    st file = dx48;
    file_test1 = ldf file_test;
    check L254() else D87();
  L205():
    dx28 = getTryDispatchBuiltinValue(dr20);
    goto L34(i34, c46, dx28);
  L216():
    dx30 = getTryDispatchBuiltinValue(dr22);
    goto L213(i23, dx30);
  L217():
    dr24 = tryDispatchBuiltin.1("[", dx31);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L219() else L218(i47, dr24);
  L218(i49, dx33):
    i52 = ld i;
    check L220() else D67();
  L250():
    dr34 = tryDispatchBuiltin.1("[", sources3);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L252() else L251(i68, dr34);
  L251(i72, sources5):
    i75 = ld i;
    check L253() else D86();
  L271():
    st vigns = r173;
    character = ldf character;
    check L272() else D98();
  D67():
    deopt 244 [i49, dx33, i52];
  D68():
    deopt 249 [i51];
  D86():
    deopt 315 [i72, sources5, i75];
  D87():
    deopt 320 [i74];
  D98():
    deopt 367 [];
  L219():
    dx34 = getTryDispatchBuiltinValue(dr24);
    goto L37(i47, dx34);
  L220():
    i53 = force? i52;
    __5 = ldf `[` in base;
    r115 = dyn __5(dx33, i53);
    goto L37(i49, r115);
  L221():
    p30 = prom<V +>{
      sQuote = ldf sQuote;
      p29 = prom<V +>{
        basename2 = ldf basename;
        p28 = prom<V +>{
          file4 = ld file;
          file5 = force? file4;
          checkMissing(file5);
          return file5;
        };
        r117 = dyn basename2(p28);
        return r117;
      };
      r119 = dyn sQuote(p29);
      return r119;
    };
    p33 = prom<V +>{
      sym11 = ldf nzchar;
      base11 = ldf nzchar in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L2() else L3();
    L0(r122):
      c59 = `as.logical`(r122);
      if c59 then L4() else L1();
    L2():
      enc = ld enc;
      enc1 = force? enc;
      checkMissing(enc1);
      nzchar = ldf nzchar in base;
      r123 = dyn nzchar(enc1);
      goto L0(r123);
    L3():
      r121 = dyn base11(<sym enc>);
      goto L0(r121);
    L1():
      invisible.0();
      return NULL;
    L4():
      paste = ldf paste;
      p32 = prom<V +>{
        sQuote1 = ldf sQuote;
        p31 = prom<V +>{
          enc2 = ld enc;
          enc3 = force? enc2;
          checkMissing(enc3);
          return enc3;
        };
        r125 = dyn sQuote1(p31);
        return r125;
      };
      r127 = dyn paste("using", p32);
      return r127;
    };
    r129 = dyn cat("  ", p30, p33, "\n");
    check L222() else D69();
  L252():
    dx47 = getTryDispatchBuiltinValue(dr34);
    goto L44(i68, dx47);
  L253():
    i76 = force? i75;
    __7 = ldf `[` in base;
    r157 = dyn __7(sources5, i76);
    goto L44(i72, r157);
  L254():
    p42 = prom<V +>{
      file8 = ld file;
      file9 = force? file8;
      checkMissing(file9);
      return file9;
    };
    r159 = dyn file_test1("-f", p42);
    check L255() else D88();
  L272():
    p47 = prom<V +>{
      sym15 = ldf length;
      base15 = ldf length in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L1() else L2();
    L0(r175):
      return r175;
    L1():
      vigns38 = ld vigns;
      vigns39 = force? vigns38;
      checkMissing(vigns39);
      c69 = `is.object`(vigns39);
      if c69 then L4() else L5(vigns39);
    L2():
      r174 = dyn base15(<lang `$`(vigns, docs)>);
      goto L0(r174);
    L3(dx50):
      length2 = ldf length in base;
      r177 = dyn length2(dx50);
      goto L0(r177);
    L4():
      dr36 = tryDispatchBuiltin.1("$", vigns39);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L6() else L5(dr36);
    L5(vigns41):
      r176 = `$`(vigns41, <sym docs>);
      goto L3(r176);
    L6():
      dx49 = getTryDispatchBuiltinValue(dr36);
      goto L3(dx49);
    };
    r179 = dyn character(p47);
    check L273() else D99();
  D69():
    deopt 254 [i51, r129];
  D88():
    deopt 323 [i74, r159];
  D99():
    deopt 369 [r179];
  L222():
    try = ldf try;
    check L223() else D70();
  L255():
    r160 = `!`(r159);
    c67 = `as.logical`(r160);
    if c67 then L256() else L45();
  L273():
    st sources = r179;
    sym16 = ldf seq_along;
    base16 = ldf seq_along in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L274() else L275();
  D70():
    deopt 256 [i51];
  L45():
    readLines = ldf readLines;
    check L259() else D89();
  L51(r181):
    s2 = toForSeq(r181);
    l2 = length(s2);
    i87 = 0;
    goto L52(i87);
  L223():
    p35 = prom<V +>{
      vignetteEngine = ldf vignetteEngine;
      p34 = prom<V +>{
        vigns30 = ld vigns;
        vigns31 = force? vigns30;
        checkMissing(vigns31);
        c60 = `is.object`(vigns31);
        if c60 then L2() else L3(vigns31);
      L1(dx37):
        c61 = `is.object`(dx37);
        if c61 then L5() else L6(dx37);
      L2():
        dr26 = tryDispatchBuiltin.1("$", vigns31);
        dc13 = getTryDispatchBuiltinDispatched(dr26);
        if dc13 then L4() else L3(dr26);
      L3(vigns33):
        r130 = `$`(vigns33, <sym engines>);
        goto L1(r130);
      L0(dx41):
        return dx41;
      L4():
        dx36 = getTryDispatchBuiltinValue(dr26);
        goto L1(dx36);
      L5():
        dr28 = tryDispatchBuiltin.1("[", dx37);
        dc14 = getTryDispatchBuiltinDispatched(dr28);
        if dc14 then L7() else L6(dr28);
      L6(dx39):
        i54 = ld i;
        i55 = force? i54;
        __6 = ldf `[` in base;
        r131 = dyn __6(dx39, i55);
        goto L0(r131);
      L7():
        dx40 = getTryDispatchBuiltinValue(dr28);
        goto L0(dx40);
      };
      r133 = dyn vignetteEngine(p34);
      return r133;
    };
    r135 = dyn try[, silent](p35, TRUE);
    check L224() else D71();
  L256():
    goto L43(i74);
  L274():
    vigns42 = ld vigns;
    check L276() else D100();
  L275():
    r180 = dyn base16(<lang `$`(vigns, docs)>);
    goto L51(r180);
  D71():
    deopt 260 [i51, r135];
  D89():
    deopt 330 [i74];
  D100():
    deopt 372 [vigns42];
  L52(i88):
    i89 = `+`.1(i88, 1);
    c71 = `<`.1(l2, i89);
    if c71 then L281() else L58();
  L224():
    st engine = r135;
    sym12 = ldf inherits;
    base12 = ldf inherits in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L225() else L226();
  L259():
    p43 = prom<V +>{
      file10 = ld file;
      file11 = force? file10;
      checkMissing(file11);
      return file11;
    };
    r163 = dyn readLines[, warn](p43, FALSE);
    check L260() else D90();
  L276():
    vigns43 = force? vigns42;
    checkMissing(vigns43);
    c70 = `is.object`(vigns43);
    if c70 then L278() else L279(vigns43);
  D90():
    deopt 334 [i74, r163];
  L38(i58, r137):
    r139 = `!`(r137);
    c62 = `as.logical`(r139);
    if c62 then L229() else L39();
  L58():
    x2 = `[[`(s2, i89, NULL, TRUE);
    st i = x2;
    vigns46 = ld vigns;
    check L282() else D101();
  L225():
    engine = ld engine;
    check L227() else D72();
  L226():
    r136 = dyn base12(<sym engine>, "try-error");
    goto L38(i51, r136);
  L260():
    st bfr = r163;
    sym14 = ldf all;
    base14 = ldf all in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L261() else L262();
  L277(dx52):
    r183 = seq_along(dx52);
    goto L51(r183);
  L278():
    dr38 = tryDispatchBuiltin.1("$", vigns43);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L280() else L279(dr38);
  L279(vigns45):
    r182 = `$`(vigns45, <sym docs>);
    goto L277(r182);
  L281():
    sources6 = ld sources;
    check L305() else D110();
  D72():
    deopt 264 [i51, engine];
  D101():
    deopt 376 [i89, vigns46];
  D110():
    deopt 418 [sources6];
  L39():
    goto L40(i58);
  L40(i65):
    setwd1 = ldf setwd;
    check L237() else D76();
  L47(i83, r165):
    c68 = `as.logical`(r165);
    if c68 then L266() else L48();
  L227():
    engine1 = force? engine;
    checkMissing(engine1);
    inherits = ldf inherits in base;
    r138 = dyn inherits(engine1, "try-error", FALSE);
    check L228() else D73();
  L229():
    engine2 = ld engine;
    check L230() else D74();
  L261():
    grepl = ldf grepl;
    check L263() else D91();
  L262():
    r164 = dyn base14(<lang grepl("(^###|^[[:space:]]*$)", bfr, useBytes=TRUE)>);
    goto L47(i74, r164);
  L280():
    dx51 = getTryDispatchBuiltinValue(dr38);
    goto L277(dx51);
  L282():
    vigns47 = force? vigns46;
    checkMissing(vigns47);
    c72 = `is.object`(vigns47);
    if c72 then L284() else L285(i89, vigns47);
  L305():
    sources7 = force? sources6;
    checkMissing(sources7);
    l6 = ld vignetteIndex;
    c77 = `is.object`(l6);
    if c77 then L307() else L308(sources7, l6);
  D73():
    deopt 269 [i51, r138];
  D74():
    deopt 271 [i58, engine2];
  D76():
    deopt 284 [i65];
  D91():
    deopt 339 [i74];
  L48():
    goto L49(i83);
  L49(i86):
    goto L43(i86);
  L228():
    goto L38(i51, r138);
  L230():
    engine3 = force? engine2;
    checkMissing(engine3);
    c63 = `is.object`(engine3);
    if c63 then L232() else L233(i58, engine3);
  L237():
    p38 = prom<V +>{
      outVignetteDir6 = ld outVignetteDir;
      outVignetteDir7 = force? outVignetteDir6;
      checkMissing(outVignetteDir7);
      return outVignetteDir7;
    };
    r146 = dyn setwd1(p38);
    check L238() else D77();
  L263():
    p44 = prom<V +>{
      bfr = ld bfr;
      bfr1 = force? bfr;
      checkMissing(bfr1);
      return bfr1;
    };
    r167 = dyn grepl[, , useBytes]("(^###|^[[:space:]]*$)", p44, TRUE);
    check L264() else D92();
  L266():
    unlink = ldf unlink;
    check L267() else D94();
  L283(i95, dx54):
    c73 = `is.object`(dx54);
    if c73 then L287() else L288(i95, dx54);
  L284():
    dr40 = tryDispatchBuiltin.1("$", vigns47);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L286() else L285(i89, dr40);
  L285(i93, vigns49):
    r184 = `$`(vigns49, <sym names>);
    goto L283(i93, r184);
  L306(sources11, dx64):
    st vignetteIndex = dx64;
    goto L59();
  L307():
    dr48 = tryDispatchBuiltin.0("$<-", l6, sources7);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L309() else L308(sources7, dr48);
  L308(sources9, l8):
    r203 = `$<-`(l8, <sym R>, sources7);
    goto L306(sources9, r203);
  D77():
    deopt 286 [i65, r146];
  D92():
    deopt 344 [i74, r167];
  D94():
    deopt 348 [i83];
  L53(i99, dx58):
    st name = dx58;
    find_vignette_product = ldf find_vignette_product;
    check L291() else D103();
  L231(i64, dx43):
    checkFun.0(dx43);
    dx44 = dx43 as cls;
    p36 = prom<V +>{
      file6 = ld file;
      file7 = force? file6;
      checkMissing(file7);
      return file7;
    };
    p37 = prom<V +>{
      enc4 = ld enc;
      enc5 = force? enc4;
      checkMissing(enc5);
      return enc5;
    };
    r143 = dyn dx44[, quiet, encoding](p36, TRUE, p37);
    check L235() else D75();
  L232():
    dr30 = tryDispatchBuiltin.1("$", engine3);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L234() else L233(i58, dr30);
  L233(i62, engine5):
    r140 = `$`(engine5, <sym tangle>);
    goto L231(i62, r140);
  L238():
    goto L28(i65);
  L264():
    all = ldf all in base;
    r168 = dyn all(r167);
    check L265() else D93();
  L267():
    p45 = prom<V +>{
      file12 = ld file;
      file13 = force? file12;
      checkMissing(file13);
      return file13;
    };
    r170 = dyn unlink(p45);
    check L268() else D95();
  L286():
    dx53 = getTryDispatchBuiltinValue(dr40);
    goto L283(i89, dx53);
  L287():
    dr42 = tryDispatchBuiltin.1("[", dx54);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L289() else L288(i95, dr42);
  L288(i97, dx56):
    i100 = ld i;
    check L290() else D102();
  L309():
    dx63 = getTryDispatchBuiltinValue(dr48);
    goto L306(sources7, dx63);
  D75():
    deopt 280 [i64, r143];
  D93():
    deopt 346 [i74, r168];
  D95():
    deopt 350 [i83, r170];
  D102():
    deopt 379 [i97, dx56, i100];
  D103():
    deopt 384 [i99];
  L234():
    dx42 = getTryDispatchBuiltinValue(dr30);
    goto L231(i58, dx42);
  L235():
    goto L40(i64);
  L265():
    goto L47(i74, r168);
  L268():
    goto L49(i83);
  L289():
    dx57 = getTryDispatchBuiltinValue(dr42);
    goto L53(i95, dx57);
  L290():
    i101 = force? i100;
    __8 = ldf `[` in base;
    r185 = dyn __8(dx56, i101);
    goto L53(i97, r185);
  L291():
    p48 = prom<V +>{
      name = ld name;
      name1 = force? name;
      checkMissing(name1);
      return name1;
    };
    p49 = prom<V +>{
      vigns50 = ld vigns;
      vigns51 = force? vigns50;
      checkMissing(vigns51);
      c74 = `is.object`(vigns51);
      if c74 then L1() else L2(vigns51);
    L0(dx60):
      return dx60;
    L1():
      dr44 = tryDispatchBuiltin.1("$", vigns51);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(vigns53):
      r187 = `$`(vigns53, <sym dir>);
      goto L0(r187);
    L3():
      dx59 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx59);
    };
    p50 = prom<V +>{
      engine6 = ld engine;
      engine7 = force? engine6;
      checkMissing(engine7);
      return engine7;
    };
    r190 = dyn find_vignette_product[, by, main, dir, engine](p48, "tangle", TRUE, p49, p50);
    check L292() else D104();
  D104():
    deopt 394 [i99, r190];
  L292():
    st source = r190;
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L293() else L294();
  L54(i104, r192):
    r194 = `>`(r192, 0);
    c75 = `as.logical`(r194);
    if c75 then L297() else L55();
  L293():
    source = ld source;
    check L295() else D105();
  L294():
    r191 = dyn base17(<sym source>);
    goto L54(i99, r191);
  D105():
    deopt 398 [i99, source];
  L55():
    goto L57(i104);
  L57(i113):
    goto L52(i113);
  L295():
    source1 = force? source;
    checkMissing(source1);
    length3 = ldf length in base;
    r193 = dyn length3(source1);
    check L296() else D106();
  L297():
    basename3 = ldf basename;
    check L298() else D107();
  D106():
    deopt 401 [i99, r193];
  D107():
    deopt 405 [i104];
  L296():
    goto L54(i99, r193);
  L298():
    p51 = prom<V +>{
      source2 = ld source;
      source3 = force? source2;
      checkMissing(source3);
      return source3;
    };
    r196 = dyn basename3(p51);
    check L299() else D108();
  D108():
    deopt 407 [i104, r196];
  L299():
    l3 = ld sources;
    c76 = `is.object`(l3);
    if c76 then L300() else L301(i104, r196, l3);
  L56(i110, r200, dx62):
    st sources = dx62;
    goto L57(i110);
  L300():
    dr46 = tryDispatchBuiltin.0("[<-", l3, r196);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L302() else L301(i104, r196, dr46);
  L301(i108, r198, l5):
    i111 = ld i;
    check L303() else D109();
  D109():
    deopt 409 [i108, r198, l5, r196, i111];
  L302():
    dx61 = getTryDispatchBuiltinValue(dr46);
    goto L56(i104, r196, dx61);
  L303():
    i112 = force? i111;
    ___ = ldf `[<-` in base;
    r201 = dyn ___(l5, r196, i112);
    goto L56(i108, r198, r201);
  }
}
fun inner3438750739(ex) {
  (reg ex:*) -+> V { var ex:*, reg pkgVignettes:cls, reg outDir:*, reg outDir1:V, reg p:p(V +), reg r1:V |
    mkenv;
    st ex = ex;
    pkgVignettes = ldf pkgVignettes;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      outDir = ld outDir;
      outDir1 = force? outDir;
      checkMissing(outDir1);
      return outDir1;
    };
    r1 = dyn pkgVignettes[dir, subdirs](p, "doc");
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    popenv;
    return r1;
  }
}