fun main() {
  () -+> V { reg r:cls, reg r1:V, reg someCond:*, reg someCond1:V, reg c:L, reg withAutoprint:cls, reg r2:V, reg x:*, reg x1:V, reg x2:*, reg x3:V, reg r4:V, reg r5:V, reg y:*, reg y1:V, reg z:*, reg z1:V, reg r6:V, reg p:p(V +), reg r8:V, reg r10:cls, reg suppressWarnings:cls, reg rm:cls, reg x4:*, reg x5:V, reg p1:p(V +), reg y2:*, reg y3:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg r15:V, reg withAutoprint1:cls, reg cat:cls, reg x6:*, reg x7:V, reg p4:p(V +), reg x8:*, reg x9:V, reg r18:V, reg p5:p(V +), reg r20:V, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r21:V, reg r22:V, reg x10:*, reg x11:V, reg identical:cls, reg r23:V, reg p6:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg y4:*, reg y5:V, reg x12:*, reg x13:V, reg r27:V, reg identical1:cls, reg r28:V, reg p7:p(V +), reg r30:V, reg withAutoprint2:cls, reg formals:cls, reg sourceDir:*, reg sourceDir1:V, reg p8:p(V +), reg body:cls, reg sourceDir2:*, reg sourceDir3:V, reg p9:p(V +), reg r34:V, reg p10:p(V +), reg r36:V, reg textConnection:cls, reg r37:V, reg source:cls, reg tc:*, reg tc1:V, reg p11:p(V +), reg r39:V, reg stopifnot1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r40:V, reg r41:V, reg r42:*, reg r43:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r44:V, reg r45:V, reg list:cls, reg r46:V, reg identical2:cls, reg r47:V, reg p12:p(V +), reg r49:V |
    mkenv;
    r = clos inner543783544;
    st source = r;
    r1 = `>`(7.0, 6.0);
    st someCond = r1;
    someCond = ld someCond;
    check L2() else D0();
  D0():
    deopt 8 [someCond];
  L2():
    someCond1 = force? someCond;
    checkMissing(someCond1);
    c = `as.logical`(someCond1);
    if c then L3() else L0();
  L0():
    goto L1();
  L1():
    r10 = clos `inner-289195048`;
    st sourceDir = r10;
    suppressWarnings = ldf suppressWarnings;
    check L7() else D3();
  L3():
    withAutoprint = ldf withAutoprint;
    check L4() else D1();
  D1():
    deopt 11 [];
  D3():
    deopt 20 [];
  L4():
    p = prom<V +>{
      r2 = `:`(1.0, 12.0);
      st x = r2;
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      `-`(x1, 1.0);
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      r4 = `-`(x3, 5.0);
      r5 = `^`(r4, 2.0);
      st y = r5;
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      st z = y1;
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      r6 = `-`(z1, 10.0);
      return r6;
    };
    r8 = dyn withAutoprint(p);
    check L5() else D2();
  L7():
    p3 = prom<V +>{
      rm = ldf rm;
      p1 = prom<V +>{
        x4 = ld x;
        x5 = force? x4;
        checkMissing(x5);
        return x5;
      };
      p2 = prom<V +>{
        y2 = ld y;
        y3 = force? y2;
        checkMissing(y3);
        return y3;
      };
      r13 = dyn rm(p1, p2);
      return r13;
    };
    r15 = dyn suppressWarnings(p3);
    check L8() else D4();
  D2():
    deopt 13 [r8];
  D4():
    deopt 22 [r15];
  L5():
    goto L1();
  L8():
    withAutoprint1 = ldf withAutoprint;
    check L9() else D5();
  D5():
    deopt 24 [];
  L9():
    p5 = prom<V +>{
      st x = <int 1, 2>;
      cat = ldf cat;
      p4 = prom<V +>{
        x6 = ld x;
        x7 = force? x6;
        checkMissing(x7);
        return x7;
      };
      dyn cat("x=", p4, "\n");
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      r18 = `^`(x9, 2.0);
      st y = r18;
      invisible.0();
      return r18;
    };
    r20 = dyn withAutoprint1(p5);
    check L10() else D6();
  D6():
    deopt 26 [r20];
  L10():
    stopifnot = ldf stopifnot;
    check L11() else D7();
  D7():
    deopt 28 [];
  L11():
    p6 = prom<V +>{
      sym = ldf identical;
      base = ldf identical in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r22):
      return r22;
    L1():
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      identical = ldf identical in base;
      r23 = dyn identical(x11, <int 1, 2>, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r23);
    L2():
      r21 = dyn base(<sym x>, <lang `:`(1.0, 2.0)>);
      goto L0(r21);
    };
    p7 = prom<V +>{
      sym1 = ldf identical;
      base1 = ldf identical in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r26):
      return r26;
    L1():
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      r27 = `^`(x13, 2.0);
      identical1 = ldf identical in base;
      r28 = dyn identical1(y5, r27, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r28);
    L2():
      r25 = dyn base1(<sym y>, <lang `^`(x, 2.0)>);
      goto L0(r25);
    };
    r30 = dyn stopifnot(p6, p7);
    check L12() else D8();
  D8():
    deopt 31 [r30];
  L12():
    withAutoprint2 = ldf withAutoprint;
    check L13() else D9();
  D9():
    deopt 33 [];
  L13():
    p10 = prom<V +>{
      formals = ldf formals;
      p8 = prom<V +>{
        sourceDir = ld sourceDir;
        sourceDir1 = force? sourceDir;
        checkMissing(sourceDir1);
        return sourceDir1;
      };
      dyn formals(p8);
      body = ldf body;
      p9 = prom<V +>{
        sourceDir2 = ld sourceDir;
        sourceDir3 = force? sourceDir2;
        checkMissing(sourceDir3);
        return sourceDir3;
      };
      r34 = dyn body(p9);
      return r34;
    };
    r36 = dyn withAutoprint2[, `max.deparse.length`, verbose](p10, 20.0, TRUE);
    check L14() else D10();
  D10():
    deopt 39 [r36];
  L14():
    textConnection = ldf textConnection;
    check L15() else D11();
  D11():
    deopt 41 [];
  L15():
    r37 = dyn textConnection("1:3\n 2 + \"3\"\n cat(\" .. in spite of error: happily continuing! ..\n\")\n 6*7");
    check L16() else D12();
  D12():
    deopt 43 [r37];
  L16():
    st tc = r37;
    source = ldf source;
    check L17() else D13();
  D13():
    deopt 46 [];
  L17():
    p11 = prom<V +>{
      tc = ld tc;
      tc1 = force? tc;
      checkMissing(tc1);
      return tc1;
    };
    r39 = dyn source[, `catch.aborts`](p11, TRUE);
    check L18() else D14();
  D14():
    deopt 50 [r39];
  L18():
    st r = r39;
    stopifnot1 = ldf stopifnot;
    check L19() else D15();
  D15():
    deopt 53 [];
  L19():
    p12 = prom<V +>{
      sym2 = ldf identical;
      base2 = ldf identical in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r41):
      return r41;
    L2():
      r42 = ld r;
      r43 = force? r42;
      checkMissing(r43);
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L4() else L5();
    L3():
      r40 = dyn base2(<sym r>, <lang list(value=42.0, visible=TRUE)>);
      goto L0(r40);
    L1(r45):
      identical2 = ldf identical in base;
      r47 = dyn identical2(r43, r45, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r47);
    L4():
      list = ldf list in base;
      r46 = dyn list(42.0, TRUE);
      goto L1(r46);
    L5():
      r44 = dyn base3[value, visible](42.0, TRUE);
      goto L1(r44);
    };
    r49 = dyn stopifnot1(p12);
    check L20() else D16();
  D16():
    deopt 55 [r49];
  L20():
    popenv;
    return r49;
  }
}
fun inner543783544(file, local, echo, `print.eval`, exprs, spaced, verbose, `prompt.echo`, `max.deparse.length`, `width.cutoff`, deparseCtrl, chdir, `catch.aborts`, encoding, `continue.echo`, `skip.echo`, `keep.source`) {
  (reg file:*, reg local:*, reg echo:*, reg print_eval:*, reg exprs:*, reg spaced:*, reg verbose:*, reg prompt_echo:*, reg max_deparse_length:*, reg width_cutoff:*, reg deparseCtrl:*, reg chdir:*, reg catch_aborts:*, reg encoding:*, reg continue_echo:*, reg skip_echo:*, reg keep_source:*) -+> V { var file:*, var local:*, reg local_isMissing:L, reg local_orDefault:*, var echo:*, reg echo_isMissing:L, reg echo_orDefault:*, reg verbose1:*, reg verbose2:V, reg p:p(V +), var `print.eval`:*, reg print_eval_isMissing:L, reg print_eval_orDefault:*, reg echo1:*, reg echo2:V, reg p1:p(V +), var exprs:*, var spaced:*, reg spaced_isMissing:L, reg spaced_orDefault:*, reg use_file:*, reg use_file1:V, reg p2:p(V +), var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg getOption:cls, reg r3:V, reg p3:p(V +), var `prompt.echo`:*, reg prompt_echo_isMissing:L, reg prompt_echo_orDefault:*, reg getOption1:cls, reg r5:V, reg p4:p(V +), var `max.deparse.length`:*, reg max_deparse_length_isMissing:L, reg max_deparse_length_orDefault:*, var `width.cutoff`:*, reg width_cutoff_isMissing:L, reg width_cutoff_orDefault:*, var deparseCtrl:*, reg deparseCtrl_isMissing:L, reg deparseCtrl_orDefault:*, var chdir:*, reg chdir_isMissing:L, reg chdir_orDefault:*, var `catch.aborts`:*, reg catch_aborts_isMissing:L, reg catch_aborts_orDefault:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg getOption2:cls, reg r7:V, reg p5:p(V +), var `continue.echo`:*, reg continue_echo_isMissing:L, reg continue_echo_orDefault:*, reg getOption3:cls, reg r9:V, reg p6:p(V +), var `skip.echo`:*, reg skip_echo_isMissing:L, reg skip_echo_orDefault:*, var `keep.source`:*, reg keep_source_isMissing:L, reg keep_source_orDefault:*, reg getOption4:cls, reg r11:V, reg p7:p(V +), reg isTRUE:cls, reg local1:*, reg local2:V, reg p8:p(V +), reg r14:V, reg c:L, reg parent_frame:cls, reg r15:V, reg r16:V, reg isFALSE:cls, reg local3:*, reg local4:V, reg p9:p(V +), reg r18:V, reg c1:L, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg sym:cls, reg base:cls, reg guard:L, reg r19:V, reg r20:V, reg local5:*, reg local6:V, reg is_environment:cls, reg r21:V, reg c2:L, reg local7:*, reg local8:V, reg stop:cls, reg r22:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r23:V, reg r24:V, reg missing:cls, reg r25:V, reg r26:V, reg c3:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg echo3:*, reg echo4:V, reg c4:L, reg r29:V, reg c5:L, reg stop1:cls, reg r30:V, reg echo5:*, reg echo6:V, reg r32:V, reg c6:L, reg c8:V, reg verbose3:*, reg verbose4:V, reg c9:L, reg c10:V, reg c12:L, reg warning:cls, reg r33:V, reg r34:V, reg verbose5:*, reg verbose6:V, reg c13:L, reg cat:cls, reg r36:V, reg print:cls, reg envir:*, reg envir1:V, reg p10:p(V +), reg r38:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r40:V, reg r41:V, reg missing1:cls, reg r42:V, reg c14:L, reg file1:*, reg file2:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r43:V, reg r44:V, reg file3:*, reg file4:V, reg c15:L, reg c16:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg r46:V, reg file5:*, reg file6:V, reg length:cls, reg r47:V, reg r48:V, reg c17:L, reg c18:V, reg file7:*, reg file8:V, reg r49:V, reg c20:L, reg c21:V, reg c23:L, reg stop2:cls, reg r50:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r52:V, reg r53:V, reg missing2:cls, reg r54:V, reg r55:V, reg c24:L, reg c26:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r56:V, reg c29:L, reg r57:V, reg encoding1:*, reg encoding2:V, reg identical:cls, reg r58:V, reg r59:V, reg c30:L, reg c31:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r60:V, reg r61:V, reg encoding3:*, reg encoding4:V, reg identical1:cls, reg r62:V, reg c33:L, reg __:cls, reg r63:V, reg r64:cls, reg r65:V, reg enc:*, reg enc1:V, reg c34:L, reg enc3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r66:V, reg enc6:V, reg r67:V, reg enc7:*, reg enc8:V, reg length1:cls, reg r68:V, reg __1:cls, reg r69:V, reg encoding5:*, reg encoding6:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r70:V, reg r71:V, reg enc9:*, reg enc10:V, reg length2:cls, reg r72:V, reg r73:V, reg c35:L, reg options:cls, reg r74:V, reg enc11:*, reg enc12:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c36:L, reg x:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r75:V, reg i7:I, reg r76:V, reg e:*, reg e1:V, reg is_na:cls, reg r77:V, reg c37:L, reg file9:cls, reg file10:*, reg file11:V, reg p11:p(V +), reg e2:*, reg e3:V, reg p12:p(V +), reg r81:V, reg tryCatch:cls, reg readLines:cls, reg zz:*, reg zz1:V, reg p13:p(V +), reg r83:V, reg p14:p(V +), reg identity:*, reg identity1:V, reg p15:p(V +), reg r86:V, reg close:cls, reg zz2:*, reg zz3:V, reg p16:p(V +), reg r88:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r89:V, reg i14:I, reg r90:V, reg res:*, reg res1:V, reg inherits:cls, reg r91:V, reg r92:V, reg c38:L, reg e4:*, reg e5:V, reg options1:cls, reg owarn:*, reg owarn1:V, reg p17:p(V +), reg r95:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r97:V, reg r98:V, reg encoding7:*, reg encoding8:V, reg is_na1:cls, reg r99:V, reg c39:L, reg stop3:cls, reg r100:V, reg verbose7:*, reg verbose8:V, reg c40:L, reg cat1:cls, reg gettextf:cls, reg encoding9:*, reg encoding10:V, reg p18:p(V +), reg r103:V, reg p19:p(V +), reg r105:V, reg file12:*, reg file13:V, reg file14:cls, reg filename:*, reg filename1:V, reg p20:p(V +), reg encoding11:*, reg encoding12:V, reg p21:p(V +), reg r109:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r110:V, reg on_exit:cls, reg r112:V, reg isTRUE1:cls, reg keep_source1:*, reg keep_source2:V, reg p22:p(V +), reg r114:V, reg c41:L, reg readLines1:cls, reg file15:*, reg file16:V, reg p23:p(V +), reg r116:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r117:V, reg on_exit1:cls, reg r119:V, reg close1:cls, reg file17:*, reg file18:V, reg p24:p(V +), reg r121:V, reg srcfilecopy:cls, reg filename2:*, reg filename3:V, reg p25:p(V +), reg lines:*, reg lines1:V, reg p26:p(V +), reg file_mtime:cls, reg filename4:*, reg filename5:V, reg p27:p(V +), reg r125:V, reg c42:L, reg r127:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg __2:cls, reg r128:V, reg p28:p(V +), reg r130:V, reg filename6:*, reg filename7:V, reg __3:cls, reg r132:V, reg r133:cls, reg r134:V, reg c43:L, reg r136:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg __4:cls, reg r137:V, reg have_encoding:*, reg have_encoding1:V, reg c44:L, reg loc:*, reg loc1:V, reg c45:L, reg c46:L, reg c47:L, reg c48:L, reg c49:L, reg i_ddd:dots, reg i20:V, reg c50:L, reg c51:L, reg c52:L, reg r138:V, reg r139:V, reg readLines2:cls, reg file19:*, reg file20:V, reg p29:p(V +), reg r142:V, reg isTRUE2:cls, reg keep_source3:*, reg keep_source4:V, reg p30:p(V +), reg r144:V, reg c53:L, reg srcfilecopy1:cls, reg deparse1:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r145:V, reg r146:V, reg substitute:cls, reg r147:V, reg p31:p(V +), reg r149:V, reg p32:p(V +), reg lines2:*, reg lines3:V, reg p33:p(V +), reg r152:V, reg r153:V, reg deparse2:cls, reg sym17:cls, reg base17:cls, reg guard17:L, reg r154:V, reg r155:V, reg substitute1:cls, reg r156:V, reg p34:p(V +), reg r158:V, reg verbose9:*, reg verbose10:V, reg c54:L, reg cat2:cls, reg sprintf:cls, reg from_file:*, reg from_file1:V, reg p35:p(V +), reg r160:V, reg p36:p(V +), reg r162:V, reg __5:cls, reg r163:V, reg r164:cls, reg lines4:*, reg lines5:V, reg p37:p(V +), reg r166:V, reg from_file2:*, reg from_file3:V, reg r168:V, reg c55:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r169:V, reg r170:V, reg lines6:*, reg lines7:V, reg length3:cls, reg r171:V, reg c56:L, reg c58:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r172:V, reg c61:L, reg r173:V, reg lines8:*, reg lines9:V, reg c62:L, reg c63:L, reg c64:V, reg c66:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r174:V, reg r175:V, reg stdin:cls, reg r176:V, reg lines10:*, reg lines11:V, reg srcfile:*, reg srcfile1:V, reg encoding13:*, reg encoding14:V, reg parse:cls, reg r177:V, reg r178:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r179:V, reg expression:cls, reg r180:V, reg r181:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r182:V, reg file21:*, reg file22:V, reg srcfile2:*, reg srcfile3:V, reg encoding15:*, reg encoding16:V, reg parse1:cls, reg r183:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r184:V, reg on_exit2:cls, reg r186:V, reg from_file4:*, reg from_file5:V, reg c67:L, reg close2:cls, reg file23:*, reg file24:V, reg p38:p(V +), reg r188:V, reg verbose11:*, reg verbose12:V, reg c68:L, reg cat3:cls, reg sym24:cls, reg base24:cls, reg guard24:L, reg r190:V, reg r191:V, reg exprs1:*, reg exprs2:V, reg length4:cls, reg r192:V, reg p39:p(V +), reg r194:V, reg chdir1:*, reg chdir2:V, reg c69:L, reg sym25:cls, reg base25:cls, reg guard25:L, reg r196:V, reg r197:V, reg ofile:*, reg ofile1:V, reg c70:L, reg c71:L, reg grepl:cls, reg ofile2:*, reg ofile3:V, reg p40:p(V +), reg r199:V, reg c72:L, reg warning1:cls, reg r200:V, reg r201:V, reg dirname:cls, reg ofile4:*, reg ofile5:V, reg p41:p(V +), reg r203:V, reg r204:V, reg c73:L, reg getwd:cls, reg r205:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r206:V, reg r207:V, reg owd:*, reg owd1:V, reg c74:V, reg c75:L, reg stop4:cls, reg r208:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r210:V, reg on_exit3:cls, reg r212:V, reg setwd:cls, reg path:*, reg path1:V, reg p42:p(V +), reg r214:V, reg r215:V, reg warning2:cls, reg r216:V, reg r217:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r219:V, reg r220:V, reg missing3:cls, reg r221:V, reg r222:V, reg c76:L, reg stop5:cls, reg r223:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r225:V, reg r226:V, reg exprs3:*, reg exprs4:V, reg is_expression:cls, reg r227:V, reg r228:V, reg c77:L, reg as_expression:cls, reg exprs5:*, reg exprs6:V, reg p43:p(V +), reg r230:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r231:V, reg r232:V, reg exprs7:*, reg exprs8:V, reg length5:cls, reg r233:V, reg echo7:*, reg echo8:V, reg c78:L, reg paste0:cls, reg nos:*, reg nos1:V, reg p44:p(V +), reg sd:*, reg sd1:V, reg p45:p(V +), reg nos2:*, reg nos3:V, reg p46:p(V +), reg sd2:*, reg sd3:V, reg p47:p(V +), reg nos4:*, reg nos5:V, reg p48:p(V +), reg sd4:*, reg sd5:V, reg p49:p(V +), reg nos6:*, reg nos7:V, reg p50:p(V +), reg r241:V, reg r242:cls, reg sym31:cls, reg base31:cls, reg guard31:L, reg r244:V, reg r245:V, reg exprs9:*, reg exprs10:V, reg attr:cls, reg r246:V, reg verbose13:*, reg verbose14:V, reg c79:L, reg c81:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r247:V, reg c84:L, reg r248:V, reg srcrefs:*, reg srcrefs1:V, reg c85:V, reg r249:V, reg c86:L, reg c87:V, reg c89:L, reg cat4:cls, reg r250:V, reg __6:cls, reg r251:V, reg r252:cls, reg srcrefs2:*, reg srcrefs3:V, reg p51:p(V +), reg r254:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r256:V, reg r257:V, reg Ne:*, reg Ne1:V, reg echo9:*, reg echo10:V, reg r258:V, reg r259:I, reg s1:V, reg l1:I, reg i21:I, reg i22:I, reg i23:I, reg c90:L, reg x1:V, reg i26:*, reg i27:V, reg Ne2:*, reg Ne3:V, reg r260:V, reg tail:*, reg tail1:V, reg r261:V, reg c91:L, reg verbose15:*, reg verbose16:V, reg c92:L, reg cat5:cls, reg i32:*, reg i33:V, reg p52:p(V +), reg r263:V, reg i34:I, reg exprs11:*, reg exprs12:V, reg c93:L, reg i36:I, reg exprs14:V, reg dr6:V, reg dc3:L, reg dx7:V, reg i38:I, reg dx8:V, reg i39:*, reg i40:V, reg __7:cls, reg r265:V, reg i41:I, reg echo11:*, reg echo12:V, reg c94:L, reg tail2:*, reg tail3:V, reg c95:L, reg sym34:cls, reg base34:cls, reg guard34:L, reg r266:V, reg i48:I, reg r267:V, reg exprs15:*, reg exprs16:V, reg attr1:cls, reg r268:V, reg i49:I, reg r269:V, reg i50:*, reg i51:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r270:V, reg i56:I, reg i57:V, reg r271:V, reg srcrefs4:*, reg srcrefs5:V, reg length6:cls, reg r272:V, reg r273:V, reg c96:L, reg srcrefs6:*, reg srcrefs7:V, reg c97:L, reg i61:I, reg srcrefs9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg i63:I, reg dx11:V, reg i64:*, reg i65:V, reg __8:cls, reg r274:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r275:V, reg i68:I, reg r276:V, reg srcref:*, reg srcref1:V, reg c98:V, reg r277:V, reg c99:L, reg sym37:cls, reg base37:cls, reg guard37:L, reg r278:V, reg i73:I, reg r279:V, reg srcref2:*, reg srcref3:V, reg length7:cls, reg r280:V, reg r281:V, reg c100:L, reg srcref4:*, reg srcref5:V, reg c101:L, reg i77:I, reg srcref7:V, reg dr10:V, reg dc5:L, reg dx12:V, reg i79:I, reg dx13:V, reg __9:cls, reg r282:V, reg srcref8:*, reg srcref9:V, reg c102:L, reg i81:I, reg srcref11:V, reg dr12:V, reg dc6:L, reg dx14:V, reg i83:I, reg dx15:V, reg __10:cls, reg r283:V, reg i84:I, reg srcref12:*, reg srcref13:V, reg c103:L, reg i86:I, reg srcref15:V, reg dr14:V, reg dc7:L, reg dx17:V, reg i88:I, reg dx18:V, reg __11:cls, reg r284:V, reg srcref16:*, reg srcref17:V, reg c104:L, reg i90:I, reg srcref19:V, reg dr16:V, reg dc8:L, reg dx19:V, reg i92:I, reg dx20:V, reg __12:cls, reg r285:V, reg i93:*, reg i94:V, reg r286:V, reg c105:L, reg sym38:cls, reg base38:cls, reg guard38:L, reg r287:V, reg i99:I, reg r288:V, reg skip_echo1:*, reg skip_echo2:V, reg lastl:*, reg lastl1:V, reg r289:V, reg min:cls, reg r290:V, reg i100:I, reg lastshown:*, reg lastshown1:V, reg lastl2:*, reg lastl3:V, reg r292:V, reg c106:L, reg sym39:cls, reg base39:cls, reg guard39:L, reg r293:V, reg i105:I, reg r294:V, reg srcref20:*, reg srcref21:V, reg attr2:cls, reg r295:V, reg trySrcLines:cls, reg srcfile4:*, reg srcfile5:V, reg p53:p(V +), reg lastshown2:*, reg lastshown3:V, reg r297:V, reg p54:p(V +), reg lastl4:*, reg lastl5:V, reg p55:p(V +), reg r300:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r301:V, reg i108:I, reg r302:V, reg dep:*, reg dep1:V, reg length8:cls, reg r303:V, reg c107:L, reg tail4:*, reg tail5:V, reg c108:L, reg sym41:cls, reg base41:cls, reg guard41:L, reg r304:V, reg i115:I, reg r305:V, reg dep2:*, reg dep3:V, reg length9:cls, reg r306:V, reg i116:I, reg r307:V, reg firstl:*, reg firstl1:V, reg lastshown4:*, reg lastshown5:V, reg r308:V, reg lastl6:*, reg lastl7:V, reg i117:I, reg sym42:cls, reg base42:cls, reg guard42:L, reg r309:V, reg i120:I, reg r310:V, reg dep4:*, reg dep5:V, reg length10:cls, reg r311:V, reg c109:L, reg i122:I, reg c111:V, reg grepl1:cls, reg dep6:*, reg dep7:V, reg c112:L, reg dep9:V, reg dr18:V, reg dc9:L, reg dx21:V, reg dx22:V, reg __13:cls, reg r312:V, reg p56:p(V +), reg r314:V, reg c113:L, reg c114:V, reg c116:L, reg dep10:*, reg dep11:V, reg c117:L, reg i127:I, reg dep13:V, reg dr20:V, reg dc10:L, reg dx23:V, reg i129:I, reg dx24:V, reg __14:cls, reg r315:V, reg leading:*, reg leading1:V, reg r316:V, reg paste1:cls, reg sym43:cls, reg base43:cls, reg guard43:L, reg r317:V, reg r318:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r319:V, reg r320:V, reg prompt_echo1:*, reg prompt_echo2:V, reg continue_echo1:*, reg continue_echo2:V, reg c118:cls, reg r321:V, reg pmax:cls, reg sym45:cls, reg base45:cls, reg guard45:L, reg r322:V, reg r323:V, reg leading2:*, reg leading3:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r324:V, reg r325:V, reg dep14:*, reg dep15:V, reg length11:cls, reg r326:V, reg leading4:*, reg leading5:V, reg r327:V, reg c119:cls, reg r328:V, reg p57:p(V +), reg r330:V, reg rep_int:cls, reg r331:V, reg p58:p(V +), reg dep16:*, reg dep17:V, reg p59:p(V +), reg r334:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r335:V, reg i132:I, reg r336:V, reg dep18:*, reg dep19:V, reg nchar:cls, reg r337:V, reg i133:I, reg r338:V, reg i134:I, reg r339:V, reg i135:I, reg sym48:cls, reg base48:cls, reg guard48:L, reg r341:V, reg i138:I, reg r342:V, reg srcref22:*, reg srcref23:V, reg c120:V, reg c121:L, reg tail6:*, reg tail7:V, reg r343:V, reg c122:L, reg substr:cls, reg paste2:cls, reg deparse3:cls, reg ei:*, reg ei1:V, reg p60:p(V +), reg width_cutoff1:*, reg width_cutoff2:V, reg p61:p(V +), reg deparseCtrl1:*, reg deparseCtrl2:V, reg p62:p(V +), reg r347:V, reg p63:p(V +), reg r349:V, reg p64:p(V +), reg r351:V, reg paste3:cls, reg prompt_echo3:*, reg prompt_echo4:V, reg p65:p(V +), reg gsub:cls, reg paste4:cls, reg continue_echo3:*, reg continue_echo4:V, reg p66:p(V +), reg r354:V, reg p67:p(V +), reg dep20:*, reg dep21:V, reg p68:p(V +), reg r357:V, reg p69:p(V +), reg r359:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r360:V, reg i145:I, reg r361:V, reg dep22:*, reg dep23:V, reg nchar1:cls, reg r362:V, reg r363:V, reg i146:I, reg r364:V, reg i147:I, reg nd:*, reg nd1:V, reg c123:L, reg nd2:*, reg nd3:V, reg max_deparse_length1:*, reg max_deparse_length2:V, reg r366:V, reg substr1:cls, reg dep24:*, reg dep25:V, reg p70:p(V +), reg do_trunc:*, reg do_trunc1:V, reg c124:L, reg max_deparse_length3:*, reg max_deparse_length4:V, reg nd4:*, reg nd5:V, reg p71:p(V +), reg r369:V, reg cat6:cls, reg spaced1:*, reg spaced2:V, reg c125:L, reg p72:p(V +), reg dep26:*, reg dep27:V, reg p73:p(V +), reg do_trunc2:*, reg do_trunc3:V, reg c126:L, reg paste5:cls, reg grepl2:cls, reg sd6:*, reg sd7:V, reg p74:p(V +), reg dep28:*, reg dep29:V, reg p75:p(V +), reg r374:V, reg c127:L, reg c129:V, reg grepl3:cls, reg oddsd:*, reg oddsd1:V, reg p76:p(V +), reg dep30:*, reg dep31:V, reg p77:p(V +), reg r377:V, reg c130:L, reg c131:V, reg c133:L, reg p78:p(V +), reg r379:V, reg p79:p(V +), reg r381:V, reg i150:I, reg r382:V, reg i151:I, reg tail8:*, reg tail9:V, reg r384:V, reg c134:L, reg catch_aborts1:*, reg catch_aborts2:V, reg c135:L, reg withRestarts:cls, reg withVisible:cls, reg eval:cls, reg ei2:*, reg ei3:V, reg p80:p(V +), reg envir2:*, reg envir3:V, reg p81:p(V +), reg r387:V, reg p82:p(V +), reg r389:V, reg p83:p(V +), reg r391:cls, reg p84:p(V +), reg r393:V, reg i156:I, reg r394:V, reg withVisible1:cls, reg eval1:cls, reg ei4:*, reg ei5:V, reg p85:p(V +), reg envir4:*, reg envir5:V, reg p86:p(V +), reg r397:V, reg p87:p(V +), reg r399:V, reg mode:cls, reg ei6:*, reg ei7:V, reg c136:L, reg ei9:V, reg dr22:V, reg dc11:L, reg dx25:V, reg dx26:V, reg __15:cls, reg r400:V, reg p88:p(V +), reg r402:V, reg r403:V, reg i_symbol:*, reg i_symbol1:V, reg r404:V, reg c137:L, reg ei10:*, reg ei11:V, reg c138:L, reg i160:I, reg ei13:V, reg dr24:V, reg dc12:L, reg dx27:V, reg i162:I, reg dx28:V, reg __16:cls, reg r405:V, reg c139:L, reg i164:I, reg dx30:V, reg dr26:V, reg dc13:L, reg dx31:V, reg i166:I, reg dx32:V, reg __17:cls, reg r406:V, reg verbose17:*, reg verbose18:V, reg c140:L, reg cat7:cls, reg r407:V, reg __18:cls, reg r408:V, reg r409:cls, reg curr_fun:*, reg curr_fun1:V, reg p89:p(V +), reg r411:V, reg i169:I, reg r412:V, reg i170:I, reg verbose19:*, reg verbose20:V, reg r414:V, reg c141:L, reg cat8:cls, reg mode1:cls, reg ei14:*, reg ei15:V, reg c142:L, reg ei17:V, reg dr28:V, reg dc14:L, reg dx33:V, reg dx34:V, reg __19:cls, reg r415:V, reg p90:p(V +), reg r417:V, reg p91:p(V +), reg r419:V, reg __20:cls, reg r420:V, reg r421:cls, reg paste6:cls, reg curr_fun2:*, reg curr_fun3:V, reg p92:p(V +), reg r423:V, reg p93:p(V +), reg r425:V, reg i173:I, reg print_eval1:*, reg print_eval2:V, reg c143:L, reg i175:I, reg c145:V, reg yy:*, reg yy1:V, reg c146:L, reg i177:I, reg c148:L, reg yy3:V, reg dr30:V, reg dc15:L, reg dx35:V, reg i179:I, reg c150:L, reg dx36:V, reg r427:V, reg c151:L, reg c152:V, reg c154:L, reg sym50:cls, reg base50:cls, reg guard50:L, reg r428:V, reg i185:I, reg r429:V, reg yy4:*, reg yy5:V, reg c155:L, reg i187:I, reg yy7:V, reg dr32:V, reg dc16:L, reg dx37:V, reg i189:I, reg dx38:V, reg r430:V, reg isS4:cls, reg r431:V, reg c156:L, reg __21:cls, reg r432:V, reg r433:cls, reg yy8:*, reg yy9:V, reg c157:L, reg yy11:V, reg dr34:V, reg dc17:L, reg dx39:V, reg dx40:V, reg r434:V, reg p94:p(V +), reg r436:V, reg i192:I, reg r437:V, reg print1:cls, reg yy12:*, reg yy13:V, reg c158:L, reg yy15:V, reg dr36:V, reg dc18:L, reg dx41:V, reg dx42:V, reg r438:V, reg p95:p(V +), reg r440:V, reg i193:I, reg verbose21:*, reg verbose22:V, reg c159:L, reg cat9:cls, reg sQuote:cls, reg deparse4:cls, reg ei18:*, reg ei19:V, reg p96:p(V +), reg unique:cls, reg sym51:cls, reg base51:cls, reg guard51:L, reg r443:V, reg r444:V, reg deparseCtrl3:*, reg deparseCtrl4:V, reg c160:cls, reg r445:V, reg p97:p(V +), reg r447:V, reg p98:p(V +), reg r449:V, reg p99:p(V +), reg r451:V, reg p100:p(V +), reg r453:V, reg i196:I, reg r454:V, reg i197:I, reg sym52:cls, reg base52:cls, reg guard52:L, reg r456:V, reg r457:V, reg yy16:*, reg yy17:V, reg invisible:cls, reg r458:V |
    mkenv;
    st file = file;
    local_isMissing = missing.0(local);
    if local_isMissing then L0(FALSE) else L0(local);
  L0(local_orDefault):
    st local = local_orDefault;
    echo_isMissing = missing.0(echo);
    if echo_isMissing then L1() else L2(echo);
  L1():
    p = prom<V +>{
      verbose1 = ld verbose;
      verbose2 = force? verbose1;
      checkMissing(verbose2);
      return verbose2;
    };
    goto L2(p);
  L2(echo_orDefault):
    st echo = echo_orDefault;
    print_eval_isMissing = missing.0(print_eval);
    if print_eval_isMissing then L3() else L4(print_eval);
  L3():
    p1 = prom<V +>{
      echo1 = ld echo;
      echo2 = force? echo1;
      checkMissing(echo2);
      return echo2;
    };
    goto L4(p1);
  L4(print_eval_orDefault):
    st `print.eval` = print_eval_orDefault;
    st exprs = exprs;
    spaced_isMissing = missing.0(spaced);
    if spaced_isMissing then L5() else L6(spaced);
  L5():
    p2 = prom<V +>{
      use_file = ld use_file;
      use_file1 = force? use_file;
      checkMissing(use_file1);
      return use_file1;
    };
    goto L6(p2);
  L6(spaced_orDefault):
    st spaced = spaced_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L7() else L8(verbose);
  L7():
    p3 = prom<V +>{
      getOption = ldf getOption;
      r3 = dyn getOption("verbose");
      return r3;
    };
    goto L8(p3);
  L8(verbose_orDefault):
    st verbose = verbose_orDefault;
    prompt_echo_isMissing = missing.0(prompt_echo);
    if prompt_echo_isMissing then L9() else L10(prompt_echo);
  L9():
    p4 = prom<V +>{
      getOption1 = ldf getOption;
      r5 = dyn getOption1("prompt");
      return r5;
    };
    goto L10(p4);
  L10(prompt_echo_orDefault):
    st `prompt.echo` = prompt_echo_orDefault;
    max_deparse_length_isMissing = missing.0(max_deparse_length);
    if max_deparse_length_isMissing then L11(150.0) else L11(max_deparse_length);
  L11(max_deparse_length_orDefault):
    st `max.deparse.length` = max_deparse_length_orDefault;
    width_cutoff_isMissing = missing.0(width_cutoff);
    if width_cutoff_isMissing then L12(60) else L12(width_cutoff);
  L12(width_cutoff_orDefault):
    st `width.cutoff` = width_cutoff_orDefault;
    deparseCtrl_isMissing = missing.0(deparseCtrl);
    if deparseCtrl_isMissing then L13("showAttributes") else L13(deparseCtrl);
  L13(deparseCtrl_orDefault):
    st deparseCtrl = deparseCtrl_orDefault;
    chdir_isMissing = missing.0(chdir);
    if chdir_isMissing then L14(FALSE) else L14(chdir);
  L14(chdir_orDefault):
    st chdir = chdir_orDefault;
    catch_aborts_isMissing = missing.0(catch_aborts);
    if catch_aborts_isMissing then L15(FALSE) else L15(catch_aborts);
  L15(catch_aborts_orDefault):
    st `catch.aborts` = catch_aborts_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L16() else L17(encoding);
  L16():
    p5 = prom<V +>{
      getOption2 = ldf getOption;
      r7 = dyn getOption2("encoding");
      return r7;
    };
    goto L17(p5);
  L17(encoding_orDefault):
    st encoding = encoding_orDefault;
    continue_echo_isMissing = missing.0(continue_echo);
    if continue_echo_isMissing then L18() else L19(continue_echo);
  L18():
    p6 = prom<V +>{
      getOption3 = ldf getOption;
      r9 = dyn getOption3("continue");
      return r9;
    };
    goto L19(p6);
  L19(continue_echo_orDefault):
    st `continue.echo` = continue_echo_orDefault;
    skip_echo_isMissing = missing.0(skip_echo);
    if skip_echo_isMissing then L20(0.0) else L20(skip_echo);
  L20(skip_echo_orDefault):
    st `skip.echo` = skip_echo_orDefault;
    keep_source_isMissing = missing.0(keep_source);
    if keep_source_isMissing then L21() else L22(keep_source);
  L21():
    p7 = prom<V +>{
      getOption4 = ldf getOption;
      r11 = dyn getOption4("keep.source");
      return r11;
    };
    goto L22(p7);
  L22(keep_source_orDefault):
    st `keep.source` = keep_source_orDefault;
    isTRUE = ldf isTRUE;
    check L203() else D0();
  D0():
    deopt 1 [];
  L203():
    p8 = prom<V +>{
      local1 = ld local;
      local2 = force? local1;
      checkMissing(local2);
      return local2;
    };
    r14 = dyn isTRUE(p8);
    check L204() else D1();
  D1():
    deopt 3 [r14];
  L204():
    c = `as.logical`(r14);
    if c then L205() else L23();
  L23():
    isFALSE = ldf isFALSE;
    check L209() else D4();
  L24(r16):
    st envir = r16;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L223() else L224();
  L205():
    parent_frame = ldf `parent.frame`;
    check L206() else D2();
  D2():
    deopt 5 [];
  D4():
    deopt 8 [];
  L28(r24):
    r26 = `!`(r24);
    c3 = `as.logical`(r26);
    if c3 then L225() else L29();
  L206():
    r15 = dyn parent_frame();
    check L207() else D3();
  L209():
    p9 = prom<V +>{
      local3 = ld local;
      local4 = force? local3;
      checkMissing(local4);
      return local4;
    };
    r18 = dyn isFALSE(p9);
    check L210() else D5();
  L223():
    missing = ldf missing in base;
    r25 = dyn missing(<sym echo>);
    goto L28(r25);
  L224():
    r23 = dyn base1(<sym echo>);
    goto L28(r23);
  D3():
    deopt 6 [r15];
  D5():
    deopt 10 [r18];
  L29():
    goto L36();
  L36():
    verbose5 = ld verbose;
    check L242() else D19();
  L207():
    goto L24(r15);
  L210():
    c1 = `as.logical`(r18);
    if c1 then L211() else L25();
  L225():
    sym2 = ldf `is.logical`;
    base2 = ldf `is.logical` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L226() else L227();
  D19():
    deopt 58 [verbose5];
  L25():
    sym = ldf `is.environment`;
    base = ldf `is.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L214() else L215();
  L30(r28):
    r29 = `!`(r28);
    c5 = `as.logical`(r29);
    if c5 then L229() else L31();
  L211():
    _GlobalEnv = ld `.GlobalEnv`;
    check L212() else D6();
  L226():
    echo3 = ld echo;
    check L228() else D12();
  L227():
    r27 = dyn base2(<sym echo>);
    goto L30(r27);
  L242():
    verbose6 = force? verbose5;
    checkMissing(verbose6);
    c13 = `as.logical`(verbose6);
    if c13 then L243() else L37();
  D6():
    deopt 11 [_GlobalEnv];
  D12():
    deopt 31 [echo3];
  L26(r20):
    c2 = `as.logical`(r20);
    if c2 then L218() else L27();
  L31():
    goto L32();
  L32():
    echo5 = ld echo;
    check L233() else D15();
  L37():
    goto L38();
  L38():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L249() else L250();
  L212():
    _GlobalEnv1 = force? _GlobalEnv;
    checkMissing(_GlobalEnv1);
    goto L24(_GlobalEnv1);
  L214():
    local5 = ld local;
    check L216() else D7();
  L215():
    r19 = dyn base(<sym local>);
    goto L26(r19);
  L228():
    echo4 = force? echo3;
    checkMissing(echo4);
    c4 = `is.logical`(echo4);
    goto L30(c4);
  L229():
    stop1 = ldf stop;
    check L230() else D13();
  L243():
    cat = ldf cat;
    check L244() else D20();
  D7():
    deopt 15 [local5];
  D13():
    deopt 36 [];
  D15():
    deopt 41 [echo5];
  D20():
    deopt 61 [];
  L27():
    stop = ldf stop;
    check L221() else D10();
  L39(r41):
    st use_file = r41;
    c14 = `as.logical`(r41);
    if c14 then L251() else L40();
  L216():
    local6 = force? local5;
    checkMissing(local6);
    is_environment = ldf `is.environment` in base;
    r21 = dyn is_environment(local6);
    check L217() else D8();
  L218():
    local7 = ld local;
    check L219() else D9();
  L230():
    r30 = dyn stop1("'echo' must be logical");
    check L231() else D14();
  L233():
    echo6 = force? echo5;
    checkMissing(echo6);
    r32 = `!`(echo6);
    c6 = `as.logical`(r32);
    if c6 then L234() else L33(c6);
  L244():
    r36 = dyn cat("'envir' chosen:");
    check L245() else D21();
  L249():
    missing1 = ldf missing in base;
    r42 = dyn missing1(<sym exprs>);
    goto L39(r42);
  L250():
    r40 = dyn base3(<sym exprs>);
    goto L39(r40);
  D8():
    deopt 18 [r21];
  D9():
    deopt 19 [local7];
  D10():
    deopt 22 [];
  D14():
    deopt 38 [r30];
  D21():
    deopt 63 [r36];
  L33(c8):
    c12 = `as.logical`(c8);
    if c12 then L237() else L34();
  L40():
    sym28 = ldf missing;
    base28 = ldf missing in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L478() else L479();
  L114():
    sym30 = ldf length;
    base30 = ldf length in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L492() else L493();
  L217():
    goto L26(r21);
  L219():
    local8 = force? local7;
    checkMissing(local8);
    goto L24(local8);
  L221():
    r22 = dyn stop("'local' must be TRUE, FALSE or an environment");
    check L222() else D11();
  L231():
    goto L32();
  L234():
    verbose3 = ld verbose;
    check L235() else D16();
  L245():
    print = ldf print;
    check L246() else D22();
  L251():
    file1 = ld file;
    check L252() else D24();
  D11():
    deopt 24 [r22];
  D16():
    deopt 44 [c6, verbose3];
  D22():
    deopt 65 [];
  D24():
    deopt 74 [file1];
  L34():
    goto L35(NULL);
  L35(r34):
    goto L36();
  L115(r220):
    r222 = `!`(r220);
    c76 = `as.logical`(r222);
    if c76 then L480() else L116();
  L120(r232):
    st Ne = r232;
    echo7 = ld echo;
    check L496() else D143();
  L222():
    goto L24(r22);
  L235():
    verbose4 = force? verbose3;
    checkMissing(verbose4);
    c9 = `as.logical`(verbose4);
    c10 = `&&`(c6, c9);
    goto L33(c10);
  L237():
    warning = ldf warning;
    check L238() else D17();
  L246():
    p10 = prom<V +>{
      envir = ld envir;
      envir1 = force? envir;
      checkMissing(envir1);
      return envir1;
    };
    r38 = dyn print(p10);
    check L247() else D23();
  L252():
    file2 = force? file1;
    checkMissing(file2);
    st ofile = file2;
    st from_file = FALSE;
    st srcfile = NULL;
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L253() else L254();
  L478():
    missing3 = ldf missing in base;
    r221 = dyn missing3(<sym file>);
    goto L115(r221);
  L479():
    r219 = dyn base28(<sym file>);
    goto L115(r219);
  L492():
    exprs7 = ld exprs;
    check L494() else D141();
  L493():
    r231 = dyn base30(<sym exprs>);
    goto L120(r231);
  D17():
    deopt 48 [];
  D23():
    deopt 67 [r38];
  D141():
    deopt 516 [exprs7];
  D143():
    deopt 521 [echo7];
  L41(r44):
    c16 = `as.logical`(r44);
    if c16 then L256() else L42();
  L116():
    goto L117();
  L117():
    sym29 = ldf `is.expression`;
    base29 = ldf `is.expression` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L484() else L485();
  L238():
    r33 = dyn warning("'verbose' is TRUE, 'echo' not; ... coercing 'echo <- TRUE'");
    check L239() else D18();
  L247():
    goto L38();
  L253():
    file3 = ld file;
    check L255() else D25();
  L254():
    r43 = dyn base4(<sym file>);
    goto L41(r43);
  L480():
    stop5 = ldf stop;
    check L481() else D135();
  L494():
    exprs8 = force? exprs7;
    checkMissing(exprs8);
    length5 = ldf length in base;
    r233 = dyn length5(exprs8);
    check L495() else D142();
  L496():
    echo8 = force? echo7;
    checkMissing(echo8);
    c78 = `as.logical`(echo8);
    if c78 then L497() else L121();
  D18():
    deopt 50 [r33];
  D25():
    deopt 84 [file3];
  D135():
    deopt 495 [];
  D142():
    deopt 519 [r233];
  L42():
    readLines2 = ldf readLines;
    check L384() else D84();
  L84():
    verbose9 = ld verbose;
    check L394() else D92();
  L118(r226):
    r228 = `!`(r226);
    c77 = `as.logical`(r228);
    if c77 then L488() else L119();
  L121():
    goto L122();
  L122():
    st yy = NULL;
    st lastshown = 0.0;
    sym31 = ldf attr;
    base31 = ldf attr in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L501() else L502();
  L239():
    st echo = TRUE;
    goto L35(TRUE);
  L255():
    file4 = force? file3;
    checkMissing(file4);
    c15 = `is.character`(file4);
    goto L41(c15);
  L256():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L257() else L258();
  L481():
    r223 = dyn stop5("specify either 'file' or 'exprs' but not both");
    check L482() else D136();
  L484():
    exprs3 = ld exprs;
    check L486() else D137();
  L485():
    r225 = dyn base29(<sym exprs>);
    goto L118(r225);
  L495():
    goto L120(r233);
  L497():
    st sd = "\"";
    st nos = "[^\"]*";
    paste0 = ldf paste0;
    check L498() else D144();
  D84():
    deopt 331 [];
  D92():
    deopt 352 [verbose9];
  D136():
    deopt 497 [r223];
  D137():
    deopt 502 [exprs3];
  D144():
    deopt 530 [];
  L43(r46):
    r48 = `!`(r46);
    c17 = `as.logical`(r48);
    if c17 then L44(c17) else L261();
  L119():
    goto L114();
  L123(r245):
    st srcrefs = r245;
    verbose13 = ld verbose;
    check L505() else D148();
  L257():
    file5 = ld file;
    check L259() else D26();
  L258():
    r45 = dyn base5(<sym file>);
    goto L43(r45);
  L384():
    p29 = prom<V +>{
      file19 = ld file;
      file20 = force? file19;
      checkMissing(file20);
      return file20;
    };
    r142 = dyn readLines2[, warn](p29, FALSE);
    check L385() else D85();
  L394():
    verbose10 = force? verbose9;
    checkMissing(verbose10);
    c54 = `as.logical`(verbose10);
    if c54 then L395() else L87();
  L482():
    goto L117();
  L486():
    exprs4 = force? exprs3;
    checkMissing(exprs4);
    is_expression = ldf `is.expression` in base;
    r227 = dyn is_expression(exprs4);
    check L487() else D138();
  L488():
    as_expression = ldf `as.expression`;
    check L489() else D139();
  L498():
    p44 = prom<V +>{
      nos = ld nos;
      nos1 = force? nos;
      checkMissing(nos1);
      return nos1;
    };
    p45 = prom<V +>{
      sd = ld sd;
      sd1 = force? sd;
      checkMissing(sd1);
      return sd1;
    };
    p46 = prom<V +>{
      nos2 = ld nos;
      nos3 = force? nos2;
      checkMissing(nos3);
      return nos3;
    };
    p47 = prom<V +>{
      sd2 = ld sd;
      sd3 = force? sd2;
      checkMissing(sd3);
      return sd3;
    };
    p48 = prom<V +>{
      nos4 = ld nos;
      nos5 = force? nos4;
      checkMissing(nos5);
      return nos5;
    };
    p49 = prom<V +>{
      sd4 = ld sd;
      sd5 = force? sd4;
      checkMissing(sd5);
      return sd5;
    };
    p50 = prom<V +>{
      nos6 = ld nos;
      nos7 = force? nos6;
      checkMissing(nos7);
      return nos7;
    };
    r241 = dyn paste0("^", p44, p45, "(", p46, p47, p48, p49, ")*", p50, "$");
    check L499() else D145();
  L501():
    exprs9 = ld exprs;
    check L503() else D146();
  L502():
    r244 = dyn base31(<sym exprs>, "srcref");
    goto L123(r244);
  D26():
    deopt 89 [file5];
  D85():
    deopt 335 [r142];
  D138():
    deopt 505 [r227];
  D139():
    deopt 508 [];
  D145():
    deopt 542 [r241];
  D146():
    deopt 557 [exprs9];
  D148():
    deopt 563 [verbose13];
  L44(c18):
    c23 = `as.logical`(c18);
    if c23 then L264() else L45();
  L87():
    goto L88();
  L88():
    from_file2 = ld from_file;
    check L402() else D98();
  L259():
    file6 = force? file5;
    checkMissing(file6);
    length = ldf length in base;
    r47 = dyn length(file6);
    check L260() else D27();
  L261():
    file7 = ld file;
    check L262() else D28();
  L385():
    st lines = r142;
    isTRUE2 = ldf isTRUE;
    check L386() else D86();
  L395():
    cat2 = ldf cat;
    check L396() else D93();
  L487():
    goto L118(r227);
  L489():
    p43 = prom<V +>{
      exprs5 = ld exprs;
      exprs6 = force? exprs5;
      checkMissing(exprs6);
      return exprs6;
    };
    r230 = dyn as_expression(p43);
    check L490() else D140();
  L499():
    st oddsd = r241;
    r242 = clos `inner-1800273180`;
    st trySrcLines = r242;
    goto L122();
  L503():
    exprs10 = force? exprs9;
    checkMissing(exprs10);
    attr = ldf attr in base;
    r246 = dyn attr(exprs10, "srcref");
    check L504() else D147();
  L505():
    verbose14 = force? verbose13;
    checkMissing(verbose14);
    c79 = `as.logical`(verbose14);
    if c79 then L506() else L124(c79);
  D27():
    deopt 92 [r47];
  D28():
    deopt 94 [c17, file7];
  D86():
    deopt 338 [];
  D93():
    deopt 355 [];
  D98():
    deopt 368 [from_file2];
  D140():
    deopt 510 [r230];
  D147():
    deopt 561 [r246];
  L45():
    goto L46();
  L46():
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L268() else L269();
  L124(c81):
    c89 = `as.logical`(c81);
    if c89 then L511() else L126();
  L260():
    goto L43(r47);
  L262():
    file8 = force? file7;
    checkMissing(file8);
    r49 = `==`(file8, "");
    c20 = `as.logical`(r49);
    c21 = `||`(c17, c20);
    goto L44(c21);
  L264():
    stop2 = ldf stop;
    check L265() else D29();
  L386():
    p30 = prom<V +>{
      keep_source3 = ld `keep.source`;
      keep_source4 = force? keep_source3;
      checkMissing(keep_source4);
      return keep_source4;
    };
    r144 = dyn isTRUE2(p30);
    check L387() else D87();
  L396():
    p36 = prom<V +>{
      sprintf = ldf sprintf;
      p35 = prom<V +>{
        from_file = ld from_file;
        from_file1 = force? from_file;
        checkMissing(from_file1);
        return from_file1;
      };
      r160 = dyn sprintf(" --> from_file='%s'\n lines:", p35);
      return r160;
    };
    r162 = dyn cat2(p36);
    check L397() else D94();
  L402():
    from_file3 = force? from_file2;
    checkMissing(from_file3);
    r168 = `!`(from_file3);
    c55 = `as.logical`(r168);
    if c55 then L403() else L89();
  L490():
    st exprs = r230;
    goto L114();
  L504():
    goto L123(r246);
  L506():
    sym32 = ldf `is.null`;
    base32 = ldf `is.null` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L507() else L508();
  D29():
    deopt 100 [];
  D87():
    deopt 340 [r144];
  D94():
    deopt 357 [r162];
  L47(r53):
    r55 = `!`(r53);
    c24 = `as.logical`(r55);
    if c24 then L270() else L48(c24);
  L89():
    sym22 = ldf `.Internal`;
    base22 = ldf `.Internal` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L426() else L427();
  L96(r181):
    st exprs = r181;
    sym23 = ldf `on.exit`;
    base23 = ldf `on.exit` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L432() else L433();
  L125(c84, r248):
    r249 = `!`(r248);
    c86 = `as.logical`(r249);
    c87 = `&&`(c84, c86);
    goto L124(c87);
  L126():
    goto L127();
  L127():
    sym33 = ldf seq_len;
    base33 = ldf seq_len in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L518() else L519();
  L265():
    r50 = dyn stop2("empty file/url name");
    check L266() else D30();
  L268():
    missing2 = ldf missing in base;
    r54 = dyn missing2(<sym encoding>);
    goto L47(r54);
  L269():
    r52 = dyn base6(<sym encoding>);
    goto L47(r52);
  L387():
    c53 = `as.logical`(r144);
    if c53 then L388() else L85();
  L397():
    __5 = ldf `::`;
    check L398() else D95();
  L403():
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L404() else L405();
  L507():
    srcrefs = ld srcrefs;
    check L509() else D149();
  L508():
    r247 = dyn base32(<sym srcrefs>);
    goto L125(c79, r247);
  L511():
    cat4 = ldf cat;
    check L512() else D150();
  D30():
    deopt 102 [r50];
  D95():
    deopt 359 [];
  D149():
    deopt 566 [c79, srcrefs];
  D150():
    deopt 572 [];
  L48(c26):
    st have_encoding = c26;
    sym8 = ldf identical;
    base8 = ldf identical in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L276() else L277();
  L85():
    deparse2 = ldf deparse1;
    check L392() else D90();
  L86(r153):
    st srcfile = r153;
    goto L84();
  L90(r170):
    c56 = `as.logical`(r170);
    if c56 then L408() else L91(c56);
  L97():
    from_file4 = ld from_file;
    check L434() else D112();
  L128(r257):
    s1 = toForSeq(r257);
    l1 = length(s1);
    i21 = 0;
    goto L131(i21);
  L266():
    goto L46();
  L270():
    sym7 = ldf identical;
    base7 = ldf identical in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L271() else L272();
  L388():
    srcfilecopy1 = ldf srcfilecopy;
    check L389() else D88();
  L398():
    r163 = dyn __5("utils", "str");
    check L399() else D96();
  L404():
    lines6 = ld lines;
    check L406() else D99();
  L405():
    r169 = dyn base18(<sym lines>);
    goto L90(r169);
  L426():
    file21 = ld file;
    check L428() else D108();
  L427():
    r182 = dyn base22(<lang parse(file, n=`-`(1.0), NULL, "?", srcfile, encoding)>);
    goto L96(r182);
  L432():
    on_exit2 = ldf `on.exit` in base;
    r186 = dyn on_exit2();
    goto L97();
  L433():
    r184 = dyn base23();
    goto L97();
  L509():
    srcrefs1 = force? srcrefs;
    checkMissing(srcrefs1);
    c85 = `==`(srcrefs1, NULL);
    goto L125(c79, c85);
  L512():
    r250 = dyn cat4("has srcrefs:\n");
    check L513() else D151();
  L518():
    Ne = ld Ne;
    check L520() else D155();
  L519():
    r256 = dyn base33(<lang `+`(Ne, echo)>);
    goto L128(r256);
  D88():
    deopt 342 [];
  D90():
    deopt 347 [];
  D96():
    deopt 362 [r163];
  D99():
    deopt 373 [lines6];
  D108():
    deopt 404 [file21];
  D112():
    deopt 421 [from_file4];
  D151():
    deopt 574 [r250];
  D155():
    deopt 586 [Ne];
  L49(c29, r57):
    r59 = `!`(r57);
    c30 = `as.logical`(r59);
    c31 = `&&`(c29, c30);
    goto L48(c31);
  L50(r61):
    c33 = `as.logical`(r61);
    if c33 then L280() else L51();
  L91(c58):
    c66 = `as.logical`(c58);
    if c66 then L413() else L93();
  L131(i22):
    i23 = `+`.1(i22, 1);
    c90 = `<`.1(l1, i23);
    if c90 then L130() else L201();
  L271():
    encoding1 = ld encoding;
    check L273() else D31();
  L272():
    r56 = dyn base7(<sym encoding>, "unknown");
    goto L49(c24, r56);
  L276():
    encoding3 = ld encoding;
    check L278() else D33();
  L277():
    r60 = dyn base8(<sym encoding>, "unknown");
    goto L50(r60);
  L389():
    p32 = prom<V +>{
      deparse1 = ldf deparse1;
      p31 = prom<V +>{
        sym16 = ldf substitute;
        base16 = ldf substitute in base;
        guard16 = `==`.4(sym16, base16);
        if guard16 then L1() else L2();
      L0(r146):
        return r146;
      L1():
        substitute = ldf substitute in base;
        r147 = dyn substitute(<sym file>);
        goto L0(r147);
      L2():
        r145 = dyn base16(<sym file>);
        goto L0(r145);
      };
      r149 = dyn deparse1(p31, "");
      return r149;
    };
    p33 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      return lines3;
    };
    r152 = dyn srcfilecopy1(p32, p33);
    check L390() else D89();
  L392():
    p34 = prom<V +>{
      sym17 = ldf substitute;
      base17 = ldf substitute in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r155):
      return r155;
    L1():
      substitute1 = ldf substitute in base;
      r156 = dyn substitute1(<sym file>);
      goto L0(r156);
    L2():
      r154 = dyn base17(<sym file>);
      goto L0(r154);
    };
    r158 = dyn deparse2(p34, "");
    check L393() else D91();
  L399():
    checkFun.0(r163);
    r164 = r163 as cls;
    p37 = prom<V +>{
      lines4 = ld lines;
      lines5 = force? lines4;
      checkMissing(lines5);
      return lines5;
    };
    r166 = dyn r164(p37);
    check L400() else D97();
  L406():
    lines7 = force? lines6;
    checkMissing(lines7);
    length3 = ldf length in base;
    r171 = dyn length3(lines7);
    check L407() else D100();
  L408():
    sym19 = ldf `is.character`;
    base19 = ldf `is.character` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L409() else L410();
  L428():
    file22 = force? file21;
    checkMissing(file22);
    srcfile2 = ld srcfile;
    check L429() else D109();
  L434():
    from_file5 = force? from_file4;
    checkMissing(from_file5);
    c67 = `as.logical`(from_file5);
    if c67 then L435() else L98();
  L513():
    __6 = ldf `::`;
    check L514() else D152();
  L520():
    Ne1 = force? Ne;
    checkMissing(Ne1);
    echo9 = ld echo;
    check L521() else D156();
  D31():
    deopt 111 [c24, encoding1];
  D33():
    deopt 128 [encoding3];
  D89():
    deopt 345 [r152];
  D91():
    deopt 350 [r158];
  D97():
    deopt 365 [r166];
  D100():
    deopt 376 [r171];
  D109():
    deopt 411 [srcfile2];
  D152():
    deopt 576 [];
  D156():
    deopt 587 [Ne1, echo9];
  L51():
    encoding5 = ld encoding;
    check L293() else D41();
  L54():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L294() else L295();
  L92(c61, r173):
    c63 = `as.logical`(r173);
    c64 = `&&`(c61, c63);
    goto L91(c64);
  L93():
    sym21 = ldf expression;
    base21 = ldf expression in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L423() else L424();
  L95(r178):
    goto L96(r178);
  L98():
    goto L99();
  L99():
    verbose11 = ld verbose;
    check L439() else D115();
  L130():
    sym52 = ldf invisible;
    base52 = ldf invisible in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L734() else L735();
  L201():
    x1 = `[[`(s1, i23, NULL, TRUE);
    st i = x1;
    i26 = ld i;
    check L522() else D157();
  L273():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    identical = ldf identical in base;
    r58 = dyn identical(encoding2, "unknown", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L274() else D32();
  L278():
    encoding4 = force? encoding3;
    checkMissing(encoding4);
    identical1 = ldf identical in base;
    r62 = dyn identical1(encoding4, "unknown", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L279() else D34();
  L280():
    __ = ldf `::`;
    check L281() else D35();
  L390():
    goto L86(r152);
  L393():
    goto L86(r158);
  L400():
    goto L88();
  L407():
    goto L90(r171);
  L409():
    lines8 = ld lines;
    check L411() else D101();
  L410():
    r172 = dyn base19(<sym lines>);
    goto L92(c56, r172);
  L413():
    sym20 = ldf `.Internal`;
    base20 = ldf `.Internal` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L414() else L415();
  L429():
    srcfile3 = force? srcfile2;
    checkMissing(srcfile3);
    encoding15 = ld encoding;
    check L430() else D110();
  L435():
    close2 = ldf close;
    check L436() else D113();
  L514():
    r251 = dyn __6("utils", "str");
    check L515() else D153();
  L521():
    echo10 = force? echo9;
    checkMissing(echo10);
    r258 = `+`(Ne1, echo10);
    r259 = seq_len(r258);
    goto L128(r259);
  D32():
    deopt 122 [c24, r58];
  D34():
    deopt 139 [r62];
  D35():
    deopt 141 [];
  D41():
    deopt 158 [encoding5];
  D101():
    deopt 378 [c56, lines8];
  D110():
    deopt 413 [encoding15];
  D113():
    deopt 424 [];
  D115():
    deopt 429 [verbose11];
  D153():
    deopt 579 [r251];
  D157():
    deopt 593 [i23, i26];
  L55(r71):
    r73 = `>`(r71, 1);
    c35 = `as.logical`(r73);
    if c35 then L298() else L56();
  L94(r175):
    goto L95(r175);
  L202(r457):
    popenv;
    return r457;
  L274():
    goto L49(c24, r58);
  L279():
    goto L50(r62);
  L281():
    r63 = dyn __("utils", "localeToCharset");
    check L282() else D36();
  L293():
    encoding6 = force? encoding5;
    checkMissing(encoding6);
    st enc = encoding6;
    goto L54();
  L294():
    enc9 = ld enc;
    check L296() else D42();
  L295():
    r70 = dyn base10(<sym enc>);
    goto L55(r70);
  L411():
    lines9 = force? lines8;
    checkMissing(lines9);
    c62 = `is.character`(lines9);
    goto L92(c56, c62);
  L414():
    stdin = ldf stdin;
    check L416() else D102();
  L415():
    r174 = dyn base20(<lang parse(stdin(), n=`-`(1.0), lines, "?", srcfile, encoding)>);
    goto L94(r174);
  L423():
    expression = ldf expression in base;
    r180 = dyn expression();
    goto L95(r180);
  L424():
    r179 = dyn base21();
    goto L95(r179);
  L430():
    encoding16 = force? encoding15;
    checkMissing(encoding16);
    parse1 = ldf parse in base;
    r183 = dyn parse1(file22, -1.0, NULL, "?", srcfile3, encoding16);
    check L431() else D111();
  L436():
    p38 = prom<V +>{
      file23 = ld file;
      file24 = force? file23;
      checkMissing(file24);
      return file24;
    };
    r188 = dyn close2(p38);
    check L437() else D114();
  L439():
    verbose12 = force? verbose11;
    checkMissing(verbose12);
    c68 = `as.logical`(verbose12);
    if c68 then L440() else L100();
  L515():
    checkFun.0(r251);
    r252 = r251 as cls;
    p51 = prom<V +>{
      srcrefs2 = ld srcrefs;
      srcrefs3 = force? srcrefs2;
      checkMissing(srcrefs3);
      return srcrefs3;
    };
    r254 = dyn r252(p51);
    check L516() else D154();
  L522():
    i27 = force? i26;
    checkMissing(i27);
    Ne2 = ld Ne;
    check L523() else D158();
  L734():
    yy16 = ld yy;
    check L736() else D258();
  L735():
    r456 = dyn base52(<sym yy>);
    goto L202(r456);
  D36():
    deopt 144 [r63];
  D42():
    deopt 163 [enc9];
  D102():
    deopt 385 [];
  D111():
    deopt 416 [r183];
  D114():
    deopt 426 [r188];
  D154():
    deopt 582 [r254];
  D158():
    deopt 594 [i23, i27, Ne2];
  D258():
    deopt 978 [yy16];
  L56():
    goto L66();
  L66():
    sym13 = ldf `is.na`;
    base13 = ldf `is.na` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L327() else L328();
  L100():
    goto L101();
  L101():
    chdir1 = ld chdir;
    check L444() else D118();
  L282():
    checkFun.0(r63);
    r64 = r63 as cls;
    r65 = dyn r64();
    check L283() else D37();
  L296():
    enc10 = force? enc9;
    checkMissing(enc10);
    length2 = ldf length in base;
    r72 = dyn length2(enc10);
    check L297() else D43();
  L298():
    st encoding = NA_LGL;
    options = ldf options;
    check L299() else D44();
  L416():
    r176 = dyn stdin();
    check L417() else D103();
  L431():
    goto L96(r183);
  L437():
    goto L99();
  L440():
    cat3 = ldf cat;
    check L441() else D116();
  L516():
    goto L127();
  L523():
    Ne3 = force? Ne2;
    checkMissing(Ne3);
    r260 = `>`(i27, Ne3);
    st tail = r260;
    tail = ld tail;
    check L524() else D159();
  L736():
    yy17 = force? yy16;
    checkMissing(yy17);
    invisible = ldf invisible in base;
    r458 = dyn invisible(yy17);
    check L737() else D259();
  D37():
    deopt 146 [r65];
  D43():
    deopt 166 [r72];
  D44():
    deopt 173 [];
  D103():
    deopt 386 [r176];
  D116():
    deopt 432 [];
  D118():
    deopt 439 [chdir1];
  D159():
    deopt 598 [i23, tail];
  D259():
    deopt 981 [r458];
  L67(r98):
    c39 = `as.logical`(r98);
    if c39 then L331() else L68();
  L283():
    st enc = r65;
    enc = ld enc;
    check L284() else D38();
  L297():
    goto L55(r72);
  L299():
    r74 = dyn options[warn](2.0);
    check L300() else D45();
  L327():
    encoding7 = ld encoding;
    check L329() else D60();
  L328():
    r97 = dyn base13(<sym encoding>);
    goto L67(r97);
  L417():
    lines10 = ld lines;
    check L418() else D104();
  L441():
    p39 = prom<V +>{
      sym24 = ldf length;
      base24 = ldf length in base;
      guard24 = `==`.4(sym24, base24);
      if guard24 then L1() else L2();
    L0(r191):
      return r191;
    L1():
      exprs1 = ld exprs;
      exprs2 = force? exprs1;
      checkMissing(exprs2);
      length4 = ldf length in base;
      r192 = dyn length4(exprs2);
      goto L0(r192);
    L2():
      r190 = dyn base24(<sym exprs>);
      goto L0(r190);
    };
    r194 = dyn cat3("--> parsed", p39, "expressions; now eval(.)ing them:\n");
    check L442() else D117();
  L444():
    chdir2 = force? chdir1;
    checkMissing(chdir2);
    c69 = `as.logical`(chdir2);
    if c69 then L445() else L102();
  L524():
    tail1 = force? tail;
    checkMissing(tail1);
    r261 = `!`(tail1);
    c91 = `as.logical`(r261);
    if c91 then L525() else L132();
  L737():
    goto L202(r458);
  D38():
    deopt 148 [enc];
  D45():
    deopt 176 [r74];
  D60():
    deopt 235 [encoding7];
  D104():
    deopt 390 [lines10];
  D117():
    deopt 436 [r194];
  L68():
    goto L69();
  L69():
    verbose7 = ld verbose;
    check L335() else D64();
  L102():
    goto L113(NULL);
  L113(r217):
    goto L114();
  L132():
    goto L136(i23);
  L136(i41):
    echo11 = ld echo;
    check L537() else D165();
  L284():
    enc1 = force? enc;
    checkMissing(enc1);
    c34 = `is.object`(enc1);
    if c34 then L285() else L286(enc1);
  L300():
    st owarn = r74;
    enc11 = ld enc;
    check L301() else D46();
  L329():
    encoding8 = force? encoding7;
    checkMissing(encoding8);
    is_na1 = ldf `is.na` in base;
    r99 = dyn is_na1(encoding8);
    check L330() else D61();
  L331():
    stop3 = ldf stop;
    check L332() else D62();
  L418():
    lines11 = force? lines10;
    checkMissing(lines11);
    srcfile = ld srcfile;
    check L419() else D105();
  L442():
    goto L101();
  L445():
    sym25 = ldf `is.character`;
    base25 = ldf `is.character` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L446() else L447();
  L525():
    verbose15 = ld verbose;
    check L526() else D160();
  D46():
    deopt 178 [enc11];
  D61():
    deopt 238 [r99];
  D62():
    deopt 240 [];
  D64():
    deopt 245 [verbose7];
  D105():
    deopt 393 [srcfile];
  D160():
    deopt 601 [i23, verbose15];
  D165():
    deopt 619 [i41, echo11];
  L52(dx1):
    st encoding = dx1;
    goto L54();
  L103(r197):
    c71 = `as.logical`(r197);
    if c71 then L449() else L104();
  L285():
    dr = tryDispatchBuiltin.1("[", enc1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L287() else L286(dr);
  L286(enc3):
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L288() else L289();
  L301():
    enc12 = force? enc11;
    checkMissing(enc12);
    s = toForSeq(enc12);
    l = length(s);
    i = 0;
    goto L57(i);
  L330():
    goto L67(r99);
  L332():
    r100 = dyn stop3("unable to find a plausible encoding");
    check L333() else D63();
  L335():
    verbose8 = force? verbose7;
    checkMissing(verbose8);
    c40 = `as.logical`(verbose8);
    if c40 then L336() else L70();
  L419():
    srcfile1 = force? srcfile;
    checkMissing(srcfile1);
    encoding13 = ld encoding;
    check L420() else D106();
  L446():
    ofile = ld ofile;
    check L448() else D119();
  L447():
    r196 = dyn base25(<sym ofile>);
    goto L103(r196);
  L526():
    verbose16 = force? verbose15;
    checkMissing(verbose16);
    c92 = `as.logical`(verbose16);
    if c92 then L527() else L133();
  L537():
    echo12 = force? echo11;
    checkMissing(echo12);
    c94 = `as.logical`(echo12);
    if c94 then L538() else L137();
  D63():
    deopt 242 [r100];
  D106():
    deopt 395 [encoding13];
  D119():
    deopt 442 [ofile];
  L53(enc6, r67):
    __1 = ldf `[` in base;
    r69 = dyn __1(enc6, r67);
    goto L52(r69);
  L57(i1):
    i2 = `+`.1(i1, 1);
    c36 = `<`.1(l, i2);
    if c36 then L302() else L65();
  L70():
    goto L71();
  L71():
    file12 = ld file;
    check L340() else D67();
  L104():
    warning2 = ldf warning;
    check L474() else D133();
  L112(r215):
    goto L113(r215);
  L133():
    goto L134(i23);
  L134(i34):
    exprs11 = ld exprs;
    check L531() else D163();
  L137():
    goto L180(i41);
  L180(i151):
    tail8 = ld tail;
    check L666() else D224();
  L287():
    dx = getTryDispatchBuiltinValue(dr);
    goto L52(dx);
  L288():
    enc7 = ld enc;
    check L290() else D39();
  L289():
    r66 = dyn base9(<sym enc>);
    goto L53(enc3, r66);
  L333():
    goto L69();
  L336():
    cat1 = ldf cat;
    check L337() else D65();
  L420():
    encoding14 = force? encoding13;
    checkMissing(encoding14);
    parse = ldf parse in base;
    r177 = dyn parse(r176, -1.0, lines11, "?", srcfile1, encoding14);
    check L421() else D107();
  L448():
    ofile1 = force? ofile;
    checkMissing(ofile1);
    c70 = `is.character`(ofile1);
    goto L103(c70);
  L449():
    grepl = ldf grepl;
    check L450() else D120();
  L527():
    cat5 = ldf cat;
    check L528() else D161();
  L538():
    st nd = 0.0;
    tail2 = ld tail;
    check L539() else D166();
  D39():
    deopt 152 [enc3, enc7];
  D65():
    deopt 248 [];
  D67():
    deopt 256 [file12];
  D107():
    deopt 398 [r177];
  D120():
    deopt 446 [];
  D133():
    deopt 485 [];
  D161():
    deopt 604 [i23];
  D163():
    deopt 611 [i34, exprs11];
  D166():
    deopt 624 [i41, tail2];
  D224():
    deopt 858 [i151, tail8];
  L63():
    options1 = ldf options;
    check L324() else D58();
  L65():
    x = `[[`(s, i2, NULL, TRUE);
    st e = x;
    sym11 = ldf `is.na`;
    base11 = ldf `is.na` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L303() else L304();
  L290():
    enc8 = force? enc7;
    checkMissing(enc8);
    length1 = ldf length in base;
    r68 = dyn length1(enc8);
    check L291() else D40();
  L302():
    goto L63();
  L337():
    p19 = prom<V +>{
      gettextf = ldf gettextf;
      p18 = prom<V +>{
        encoding9 = ld encoding;
        encoding10 = force? encoding9;
        checkMissing(encoding10);
        return encoding10;
      };
      r103 = dyn gettextf("encoding = \"%s\" chosen", p18);
      return r103;
    };
    r105 = dyn cat1[, , sep](p19, "\n", "");
    check L338() else D66();
  L340():
    file13 = force? file12;
    checkMissing(file13);
    st filename = file13;
    file14 = ldf file;
    check L341() else D68();
  L421():
    goto L94(r177);
  L450():
    p40 = prom<V +>{
      ofile2 = ld ofile;
      ofile3 = force? ofile2;
      checkMissing(ofile3);
      return ofile3;
    };
    r199 = dyn grepl("^(ftp|ftps|http|https|file)://", p40);
    check L451() else D121();
  L474():
    r216 = dyn warning2("'chdir = TRUE' makes no sense for a connection");
    check L475() else D134();
  L528():
    p52 = prom<V +>{
      i32 = ld i;
      i33 = force? i32;
      checkMissing(i33);
      return i33;
    };
    r263 = dyn cat5("\n>>>> eval(expression_nr.", p52, ")\n\t\t =================\n");
    check L529() else D162();
  L531():
    exprs12 = force? exprs11;
    checkMissing(exprs12);
    c93 = `is.object`(exprs12);
    if c93 then L532() else L533(i34, exprs12);
  L539():
    tail3 = force? tail2;
    checkMissing(tail3);
    c95 = `as.logical`(tail3);
    if c95 then L540() else L138();
  L666():
    tail9 = force? tail8;
    checkMissing(tail9);
    r384 = `!`(tail9);
    c134 = `as.logical`(r384);
    if c134 then L667() else L181();
  D40():
    deopt 155 [enc3, r68];
  D58():
    deopt 228 [];
  D66():
    deopt 253 [r105];
  D68():
    deopt 260 [];
  D121():
    deopt 449 [r199];
  D134():
    deopt 487 [r216];
  D162():
    deopt 608 [i23, r263];
  L58(i7, r76):
    c37 = `as.logical`(r76);
    if c37 then L307() else L59();
  L135(i38, dx8):
    st ei = dx8;
    goto L136(i38);
  L138():
    i50 = ld i;
    check L546() else D169();
  L140(i49, r269):
    st srcref = r269;
    sym36 = ldf `is.null`;
    base36 = ldf `is.null` in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L558() else L559();
  L181():
    goto L200(i151);
  L200(i197):
    goto L131(i197);
  L291():
    goto L53(enc3, r68);
  L303():
    e = ld e;
    check L305() else D47();
  L304():
    r75 = dyn base11(<sym e>);
    goto L58(i2, r75);
  L324():
    p17 = prom<V +>{
      owarn = ld owarn;
      owarn1 = force? owarn;
      checkMissing(owarn1);
      return owarn1;
    };
    r95 = dyn options1(p17);
    check L325() else D59();
  L338():
    goto L71();
  L341():
    p20 = prom<V +>{
      filename = ld filename;
      filename1 = force? filename;
      checkMissing(filename1);
      return filename1;
    };
    p21 = prom<V +>{
      encoding11 = ld encoding;
      encoding12 = force? encoding11;
      checkMissing(encoding12);
      return encoding12;
    };
    r109 = dyn file14[, , encoding](p20, "r", p21);
    check L342() else D69();
  L451():
    c72 = `as.logical`(r199);
    if c72 then L452() else L105();
  L475():
    goto L112(r216);
  L529():
    goto L134(i23);
  L532():
    dr6 = tryDispatchBuiltin.1("[", exprs12);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L534() else L533(i34, dr6);
  L533(i36, exprs14):
    i39 = ld i;
    check L535() else D164();
  L540():
    sym34 = ldf attr;
    base34 = ldf attr in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L541() else L542();
  L667():
    catch_aborts1 = ld `catch.aborts`;
    check L668() else D225();
  D47():
    deopt 182 [i2, e];
  D59():
    deopt 230 [r95];
  D69():
    deopt 265 [r109];
  D164():
    deopt 613 [i36, exprs14, i39];
  D169():
    deopt 633 [i41, i50];
  D225():
    deopt 861 [i151, catch_aborts1];
  L59():
    file9 = ldf file;
    check L310() else D49();
  L105():
    dirname = ldf dirname;
    check L456() else D124();
  L106(r201):
    goto L112(r201);
  L139(i48, r267):
    goto L140(i48, r267);
  L144(i68, r276):
    r277 = `!`(r276);
    c99 = `as.logical`(r277);
    if c99 then L561() else L145();
  L305():
    e1 = force? e;
    checkMissing(e1);
    is_na = ldf `is.na` in base;
    r77 = dyn is_na(e1);
    check L306() else D48();
  L307():
    goto L57(i7);
  L325():
    goto L66();
  L342():
    st file = r109;
    sym14 = ldf `on.exit`;
    base14 = ldf `on.exit` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L343() else L344();
  L452():
    warning1 = ldf warning;
    check L453() else D122();
  L534():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L135(i34, dx7);
  L535():
    i40 = force? i39;
    __7 = ldf `[` in base;
    r265 = dyn __7(exprs14, i40);
    goto L135(i36, r265);
  L541():
    exprs15 = ld exprs;
    check L543() else D167();
  L542():
    r266 = dyn base34(<sym exprs>, "wholeSrcref");
    goto L139(i41, r266);
  L546():
    i51 = force? i50;
    checkMissing(i51);
    sym35 = ldf length;
    base35 = ldf length in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L547() else L548();
  L558():
    srcref = ld srcref;
    check L560() else D174();
  L559():
    r275 = dyn base36(<sym srcref>);
    goto L144(i49, r275);
  L668():
    catch_aborts2 = force? catch_aborts1;
    checkMissing(catch_aborts2);
    c135 = `as.logical`(catch_aborts2);
    if c135 then L669() else L182();
  D48():
    deopt 185 [i2, r77];
  D49():
    deopt 191 [i7];
  D122():
    deopt 451 [];
  D124():
    deopt 455 [];
  D167():
    deopt 628 [i41, exprs15];
  D174():
    deopt 650 [i49, srcref];
  L72():
    isTRUE1 = ldf isTRUE;
    check L345() else D70();
  L141(i56, i57, r271):
    r273 = `<=`(i57, r271);
    c96 = `as.logical`(r273);
    if c96 then L551() else L142();
  L145():
    goto L171(i68);
  L171(i135):
    sym48 = ldf `is.null`;
    base48 = ldf `is.null` in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L640() else L641();
  L182():
    withVisible1 = ldf withVisible;
    check L673() else D228();
  L183(i156, r394):
    st yy = r394;
    mode = ldf mode;
    check L675() else D230();
  L306():
    goto L58(i2, r77);
  L310():
    p11 = prom<V +>{
      file10 = ld file;
      file11 = force? file10;
      checkMissing(file11);
      return file11;
    };
    p12 = prom<V +>{
      e2 = ld e;
      e3 = force? e2;
      checkMissing(e3);
      return e3;
    };
    r81 = dyn file9[, encoding](p11, p12);
    check L311() else D50();
  L343():
    on_exit = ldf `on.exit` in base;
    r112 = dyn on_exit(<lang close(file)>);
    goto L72();
  L344():
    r110 = dyn base14(<lang close(file)>);
    goto L72();
  L453():
    r200 = dyn warning1("'chdir = TRUE' makes no sense for a URL");
    check L454() else D123();
  L456():
    p41 = prom<V +>{
      ofile4 = ld ofile;
      ofile5 = force? ofile4;
      checkMissing(ofile5);
      return ofile5;
    };
    r203 = dyn dirname(p41);
    check L457() else D125();
  L543():
    exprs16 = force? exprs15;
    checkMissing(exprs16);
    attr1 = ldf attr in base;
    r268 = dyn attr1(exprs16, "wholeSrcref");
    check L544() else D168();
  L547():
    srcrefs4 = ld srcrefs;
    check L549() else D170();
  L548():
    r270 = dyn base35(<sym srcrefs>);
    goto L141(i41, i51, r270);
  L560():
    srcref1 = force? srcref;
    checkMissing(srcref1);
    c98 = `==`(srcref1, NULL);
    goto L144(i49, c98);
  L561():
    sym37 = ldf length;
    base37 = ldf length in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L562() else L563();
  L669():
    withRestarts = ldf withRestarts;
    check L670() else D226();
  D50():
    deopt 195 [i7, r81];
  D70():
    deopt 271 [];
  D123():
    deopt 453 [r200];
  D125():
    deopt 457 [r203];
  D168():
    deopt 632 [i41, r268];
  D170():
    deopt 636 [i41, i51, srcrefs4];
  D226():
    deopt 864 [i151];
  D228():
    deopt 870 [i151];
  D230():
    deopt 875 [i156];
  L142():
    goto L140(i56, NULL);
  L146(i73, r279):
    r281 = `>=`(r279, 8.0);
    c100 = `as.logical`(r281);
    if c100 then L566() else L147();
  L172(i138, r342):
    c121 = `as.logical`(r342);
    if c121 then L643() else L173();
  L311():
    st zz = r81;
    tryCatch = ldf tryCatch;
    check L312() else D51();
  L345():
    p22 = prom<V +>{
      keep_source1 = ld `keep.source`;
      keep_source2 = force? keep_source1;
      checkMissing(keep_source2);
      return keep_source2;
    };
    r114 = dyn isTRUE1(p22);
    check L346() else D71();
  L454():
    goto L106(r200);
  L457():
    st path = r203;
    r204 = `!=`(r203, ".");
    c73 = `as.logical`(r204);
    if c73 then L458() else L107();
  L544():
    goto L139(i41, r268);
  L549():
    srcrefs5 = force? srcrefs4;
    checkMissing(srcrefs5);
    length6 = ldf length in base;
    r272 = dyn length6(srcrefs5);
    check L550() else D171();
  L551():
    srcrefs6 = ld srcrefs;
    check L552() else D172();
  L562():
    srcref2 = ld srcref;
    check L564() else D175();
  L563():
    r278 = dyn base37(<sym srcref>);
    goto L146(i68, r278);
  L640():
    srcref22 = ld srcref;
    check L642() else D209();
  L641():
    r341 = dyn base48(<sym srcref>);
    goto L172(i135, r341);
  L670():
    p83 = prom<V +>{
      withVisible = ldf withVisible;
      p82 = prom<V +>{
        eval = ldf eval;
        p80 = prom<V +>{
          ei2 = ld ei;
          ei3 = force? ei2;
          checkMissing(ei3);
          return ei3;
        };
        p81 = prom<V +>{
          envir2 = ld envir;
          envir3 = force? envir2;
          checkMissing(envir3);
          return envir3;
        };
        r387 = dyn eval(p80, p81);
        return r387;
      };
      r389 = dyn withVisible(p82);
      return r389;
    };
    p84 = prom<V +>{
      r391 = clos inner560854305;
      return r391;
    };
    r393 = dyn withRestarts[, abort](p83, p84);
    check L671() else D227();
  L673():
    p87 = prom<V +>{
      eval1 = ldf eval;
      p85 = prom<V +>{
        ei4 = ld ei;
        ei5 = force? ei4;
        checkMissing(ei5);
        return ei5;
      };
      p86 = prom<V +>{
        envir4 = ld envir;
        envir5 = force? envir4;
        checkMissing(envir5);
        return envir5;
      };
      r397 = dyn eval1(p85, p86);
      return r397;
    };
    r399 = dyn withVisible1(p87);
    check L674() else D229();
  L675():
    p88 = prom<V +>{
      ei6 = ld ei;
      ei7 = force? ei6;
      checkMissing(ei7);
      c136 = `is.object`(ei7);
      if c136 then L1() else L2(ei7);
    L0(dx26):
      return dx26;
    L1():
      dr22 = tryDispatchBuiltin.1("[[", ei7);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(ei9):
      __15 = ldf `[[` in base;
      r400 = dyn __15(ei9, 1);
      goto L0(r400);
    L3():
      dx25 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx25);
    };
    r402 = dyn mode(p88);
    check L676() else D231();
  D51():
    deopt 198 [i7];
  D71():
    deopt 273 [r114];
  D171():
    deopt 639 [i41, i51, r272];
  D172():
    deopt 641 [i56, srcrefs6];
  D175():
    deopt 656 [i68, srcref2];
  D209():
    deopt 796 [i135, srcref22];
  D227():
    deopt 868 [i151, r393];
  D229():
    deopt 872 [i151, r399];
  D231():
    deopt 877 [i156, r402];
  L107():
    goto L106(NULL);
  L147():
    srcref12 = ld srcref;
    check L576() else D179();
  L150(i84):
    i93 = ld i;
    check L584() else D181();
  L173():
    goto L177(i138);
  L177(i147):
    nd = ld nd;
    check L656() else D217();
  L312():
    p14 = prom<V +>{
      readLines = ldf readLines;
      p13 = prom<V +>{
        zz = ld zz;
        zz1 = force? zz;
        checkMissing(zz1);
        return zz1;
      };
      r83 = dyn readLines[, warn](p13, FALSE);
      return r83;
    };
    p15 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r86 = dyn tryCatch[, error](p14, p15);
    check L313() else D52();
  L346():
    c41 = `as.logical`(r114);
    if c41 then L347() else L73();
  L458():
    getwd = ldf getwd;
    check L459() else D126();
  L550():
    goto L141(i41, i51, r272);
  L552():
    srcrefs7 = force? srcrefs6;
    checkMissing(srcrefs7);
    c97 = `is.object`(srcrefs7);
    if c97 then L553() else L554(i56, srcrefs7);
  L564():
    srcref3 = force? srcref2;
    checkMissing(srcref3);
    length7 = ldf length in base;
    r280 = dyn length7(srcref3);
    check L565() else D176();
  L566():
    srcref4 = ld srcref;
    check L567() else D177();
  L642():
    srcref23 = force? srcref22;
    checkMissing(srcref23);
    c120 = `==`(srcref23, NULL);
    goto L172(i135, c120);
  L643():
    tail6 = ld tail;
    check L644() else D210();
  L671():
    goto L183(i151, r393);
  L674():
    goto L183(i151, r399);
  L676():
    r403 = `==`(r402, "name");
    st `i.symbol` = r403;
    i_symbol = ld `i.symbol`;
    check L677() else D232();
  D52():
    deopt 202 [i7, r86];
  D126():
    deopt 462 [];
  D176():
    deopt 659 [i68, r280];
  D177():
    deopt 662 [i73, srcref4];
  D179():
    deopt 674 [i73, srcref12];
  D181():
    deopt 686 [i84, i93];
  D210():
    deopt 799 [i138, tail6];
  D217():
    deopt 831 [i147, nd];
  D232():
    deopt 881 [i156, i_symbol];
  L73():
    st from_file = TRUE;
    filename6 = ld filename;
    check L357() else D78();
  L75():
    __3 = ldf `::`;
    check L358() else D79();
  L143(i63, dx11):
    goto L140(i63, dx11);
  L313():
    st res = r86;
    close = ldf close;
    check L314() else D53();
  L347():
    readLines1 = ldf readLines;
    check L348() else D72();
  L459():
    r205 = dyn getwd();
    check L460() else D127();
  L553():
    dr8 = tryDispatchBuiltin.1("[[", srcrefs7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L555() else L554(i56, dr8);
  L554(i61, srcrefs9):
    i64 = ld i;
    check L556() else D173();
  L565():
    goto L146(i68, r280);
  L567():
    srcref5 = force? srcref4;
    checkMissing(srcref5);
    c101 = `is.object`(srcref5);
    if c101 then L568() else L569(i73, srcref5);
  L576():
    srcref13 = force? srcref12;
    checkMissing(srcref13);
    c103 = `is.object`(srcref13);
    if c103 then L577() else L578(i73, srcref13);
  L584():
    i94 = force? i93;
    checkMissing(i94);
    r286 = `==`(i94, 1.0);
    c105 = `as.logical`(r286);
    if c105 then L585() else L153();
  L644():
    tail7 = force? tail6;
    checkMissing(tail7);
    r343 = `!`(tail7);
    c122 = `as.logical`(r343);
    if c122 then L645() else L174();
  L656():
    nd1 = force? nd;
    checkMissing(nd1);
    c123 = `as.logical`(nd1);
    if c123 then L657() else L178();
  L677():
    i_symbol1 = force? i_symbol;
    checkMissing(i_symbol1);
    r404 = `!`(i_symbol1);
    c137 = `as.logical`(r404);
    if c137 then L678() else L184();
  D53():
    deopt 205 [i7];
  D72():
    deopt 275 [];
  D78():
    deopt 300 [filename6];
  D79():
    deopt 304 [];
  D127():
    deopt 463 [r205];
  D173():
    deopt 643 [i61, srcrefs9, i64];
  L148(i79, dx13):
    st firstl = dx13;
    srcref8 = ld srcref;
    check L571() else D178();
  L151(i88, dx18):
    st firstl = dx18;
    srcref16 = ld srcref;
    check L580() else D180();
  L153():
    goto L155(i84);
  L155(i100):
    lastshown = ld lastshown;
    check L592() else D185();
  L174():
    goto L176(i138, NULL);
  L176(i146, r364):
    goto L177(i146);
  L178():
    goto L179(i147, NULL);
  L179(i150, r382):
    goto L180(i150);
  L184():
    goto L189(i156);
  L189(i170):
    verbose19 = ld verbose;
    check L695() else D240();
  L314():
    p16 = prom<V +>{
      zz2 = ld zz;
      zz3 = force? zz2;
      checkMissing(zz3);
      return zz3;
    };
    r88 = dyn close(p16);
    check L315() else D54();
  L348():
    p23 = prom<V +>{
      file15 = ld file;
      file16 = force? file15;
      checkMissing(file16);
      return file16;
    };
    r116 = dyn readLines1[, warn](p23, FALSE);
    check L349() else D73();
  L357():
    filename7 = force? filename6;
    checkMissing(filename7);
    st srcfile = filename7;
    goto L75();
  L358():
    r132 = dyn __3("utils", "localeToCharset");
    check L359() else D80();
  L460():
    st owd = r205;
    sym26 = ldf `is.null`;
    base26 = ldf `is.null` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L461() else L462();
  L555():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L143(i56, dx10);
  L556():
    i65 = force? i64;
    __8 = ldf `[[` in base;
    r274 = dyn __8(srcrefs9, i65);
    goto L143(i61, r274);
  L568():
    dr10 = tryDispatchBuiltin.1("[", srcref5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L570() else L569(i73, dr10);
  L569(i77, srcref7):
    __9 = ldf `[` in base;
    r282 = dyn __9(srcref7, 7);
    goto L148(i77, r282);
  L577():
    dr14 = tryDispatchBuiltin.1("[", srcref13);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L579() else L578(i73, dr14);
  L578(i86, srcref15):
    __11 = ldf `[` in base;
    r284 = dyn __11(srcref15, 1);
    goto L151(i86, r284);
  L585():
    sym38 = ldf min;
    base38 = ldf min in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L586() else L587();
  L645():
    substr = ldf substr;
    check L646() else D211();
  L657():
    nd2 = ld nd;
    check L658() else D218();
  L678():
    ei10 = ld ei;
    check L679() else D233();
  D54():
    deopt 207 [i7, r88];
  D73():
    deopt 279 [r116];
  D80():
    deopt 307 [r132];
  D178():
    deopt 668 [i79, srcref8];
  D180():
    deopt 680 [i88, srcref16];
  D185():
    deopt 703 [i100, lastshown];
  D211():
    deopt 803 [i138];
  D218():
    deopt 833 [i147, nd2];
  D233():
    deopt 884 [i156, ei10];
  D240():
    deopt 911 [i170, verbose19];
  L108(r207):
    c75 = `as.logical`(r207);
    if c75 then L464() else L109();
  L154(i99, r288):
    st lastshown = r288;
    goto L155(i99);
  L315():
    sym12 = ldf inherits;
    base12 = ldf inherits in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L316() else L317();
  L349():
    st lines = r116;
    sym15 = ldf `on.exit`;
    base15 = ldf `on.exit` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L350() else L351();
  L359():
    checkFun.0(r132);
    r133 = r132 as cls;
    r134 = dyn r133();
    check L360() else D81();
  L461():
    owd = ld owd;
    check L463() else D128();
  L462():
    r206 = dyn base26(<sym owd>);
    goto L108(r206);
  L570():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L148(i73, dx12);
  L571():
    srcref9 = force? srcref8;
    checkMissing(srcref9);
    c102 = `is.object`(srcref9);
    if c102 then L572() else L573(i79, srcref9);
  L579():
    dx17 = getTryDispatchBuiltinValue(dr14);
    goto L151(i73, dx17);
  L580():
    srcref17 = force? srcref16;
    checkMissing(srcref17);
    c104 = `is.object`(srcref17);
    if c104 then L581() else L582(i88, srcref17);
  L586():
    skip_echo1 = ld `skip.echo`;
    check L588() else D182();
  L587():
    r287 = dyn base38(<sym skip.echo>, <lang `-`(lastl, 1.0)>);
    goto L154(i84, r287);
  L592():
    lastshown1 = force? lastshown;
    checkMissing(lastshown1);
    lastl2 = ld lastl;
    check L593() else D186();
  L646():
    p64 = prom<V +>{
      paste2 = ldf paste;
      p63 = prom<V +>{
        deparse3 = ldf deparse;
        p60 = prom<V +>{
          ei = ld ei;
          ei1 = force? ei;
          checkMissing(ei1);
          return ei1;
        };
        p61 = prom<V +>{
          width_cutoff1 = ld `width.cutoff`;
          width_cutoff2 = force? width_cutoff1;
          checkMissing(width_cutoff2);
          return width_cutoff2;
        };
        p62 = prom<V +>{
          deparseCtrl1 = ld deparseCtrl;
          deparseCtrl2 = force? deparseCtrl1;
          checkMissing(deparseCtrl2);
          return deparseCtrl2;
        };
        r347 = dyn deparse3[, `width.cutoff`, control](p60, p61, p62);
        return r347;
      };
      r349 = dyn paste2[, collapse](p63, "\n");
      return r349;
    };
    r351 = dyn substr(p64, 12, 1000000);
    check L647() else D212();
  L658():
    nd3 = force? nd2;
    checkMissing(nd3);
    max_deparse_length1 = ld `max.deparse.length`;
    check L659() else D219();
  L679():
    ei11 = force? ei10;
    checkMissing(ei11);
    c138 = `is.object`(ei11);
    if c138 then L680() else L681(i156, ei11);
  L695():
    verbose20 = force? verbose19;
    checkMissing(verbose20);
    r414 = `>=`(verbose20, 2.0);
    c141 = `as.logical`(r414);
    if c141 then L696() else L190();
  D81():
    deopt 309 [r134];
  D128():
    deopt 466 [owd];
  D182():
    deopt 692 [i84, skip_echo1];
  D186():
    deopt 704 [i100, lastshown1, lastl2];
  D212():
    deopt 807 [i138, r351];
  D219():
    deopt 834 [i147, nd3, max_deparse_length1];
  L61(i14, r90):
    r92 = `!`(r90);
    c38 = `as.logical`(r92);
    if c38 then L320() else L62();
  L74():
    close1 = ldf close;
    check L352() else D74();
  L109():
    goto L110();
  L110():
    sym27 = ldf `on.exit`;
    base27 = ldf `on.exit` in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L468() else L469();
  L149(i83, dx15):
    st lastl = dx15;
    goto L150(i83);
  L152(i92, dx20):
    st lastl = dx20;
    goto L150(i92);
  L185(i162, dx28):
    c139 = `is.object`(dx28);
    if c139 then L683() else L684(i162, dx28);
  L190():
    goto L191(i170);
  L191(i173):
    print_eval1 = ld `print.eval`;
    check L703() else D246();
  L316():
    res = ld res;
    check L318() else D55();
  L317():
    r89 = dyn base12(<sym res>, "error");
    goto L61(i7, r89);
  L350():
    on_exit1 = ldf `on.exit` in base;
    r119 = dyn on_exit1();
    goto L74();
  L351():
    r117 = dyn base15();
    goto L74();
  L360():
    c43 = `is.object`(r134);
    if c43 then L361() else L362(r134);
  L463():
    owd1 = force? owd;
    checkMissing(owd1);
    c74 = `==`(owd1, NULL);
    goto L108(c74);
  L464():
    stop4 = ldf stop;
    check L465() else D129();
  L572():
    dr12 = tryDispatchBuiltin.1("[", srcref9);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L574() else L573(i79, dr12);
  L573(i81, srcref11):
    __10 = ldf `[` in base;
    r283 = dyn __10(srcref11, 8);
    goto L149(i81, r283);
  L581():
    dr16 = tryDispatchBuiltin.1("[", srcref17);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L583() else L582(i88, dr16);
  L582(i90, srcref19):
    __12 = ldf `[` in base;
    r285 = dyn __12(srcref19, 3);
    goto L152(i90, r285);
  L588():
    skip_echo2 = force? skip_echo1;
    checkMissing(skip_echo2);
    lastl = ld lastl;
    check L589() else D183();
  L593():
    lastl3 = force? lastl2;
    checkMissing(lastl3);
    r292 = `<`(lastshown1, lastl3);
    c106 = `as.logical`(r292);
    if c106 then L594() else L156();
  L647():
    st dep = r351;
    paste3 = ldf paste0;
    check L648() else D213();
  L659():
    max_deparse_length2 = force? max_deparse_length1;
    checkMissing(max_deparse_length2);
    r366 = `>`(nd3, max_deparse_length2);
    st `do.trunc` = r366;
    substr1 = ldf substr;
    check L660() else D220();
  L680():
    dr24 = tryDispatchBuiltin.1("[[", ei11);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L682() else L681(i156, dr24);
  L681(i160, ei13):
    __16 = ldf `[[` in base;
    r405 = dyn __16(ei13, 1);
    goto L185(i160, r405);
  L696():
    cat8 = ldf cat;
    check L697() else D241();
  D55():
    deopt 210 [i7, res];
  D74():
    deopt 285 [];
  D129():
    deopt 470 [];
  D183():
    deopt 694 [i84, lastl];
  D213():
    deopt 810 [i138];
  D220():
    deopt 839 [i147];
  D241():
    deopt 916 [i170];
  D246():
    deopt 931 [i173, print_eval1];
  L62():
    goto L57(i14);
  L76(dx6):
    st loc = dx6;
    have_encoding = ld have_encoding;
    check L364() else D82();
  L111():
    setwd = ldf setwd;
    check L470() else D131();
  L156():
    goto L170(i100, NULL);
  L170(i134, r339):
    goto L171(i134);
  L186(i166, dx32):
    st `curr.fun` = dx32;
    verbose17 = ld verbose;
    check L686() else D234();
  L318():
    res1 = force? res;
    checkMissing(res1);
    inherits = ldf inherits in base;
    r91 = dyn inherits(res1, "error", FALSE);
    check L319() else D56();
  L320():
    e4 = ld e;
    check L321() else D57();
  L352():
    p24 = prom<V +>{
      file17 = ld file;
      file18 = force? file17;
      checkMissing(file18);
      return file18;
    };
    r121 = dyn close1(p24);
    check L353() else D75();
  L361():
    dr4 = tryDispatchBuiltin.1("[", r134);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L363() else L362(dr4);
  L362(r136):
    __4 = ldf `[` in base;
    r137 = dyn __4(r136, 1);
    goto L76(r137);
  L465():
    r208 = dyn stop4("cannot 'chdir' as current directory is unknown");
    check L466() else D130();
  L468():
    on_exit3 = ldf `on.exit` in base;
    r212 = dyn on_exit3(<lang setwd(owd)>, TRUE);
    goto L111();
  L469():
    r210 = dyn base27[, add](<lang setwd(owd)>, TRUE);
    goto L111();
  L574():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L149(i79, dx14);
  L583():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L152(i88, dx19);
  L589():
    lastl1 = force? lastl;
    checkMissing(lastl1);
    r289 = `-`(lastl1, 1.0);
    min = ldf min in base;
    r290 = dyn min(skip_echo2, r289);
    check L590() else D184();
  L594():
    sym39 = ldf attr;
    base39 = ldf attr in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L595() else L596();
  L648():
    p65 = prom<V +>{
      prompt_echo3 = ld `prompt.echo`;
      prompt_echo4 = force? prompt_echo3;
      checkMissing(prompt_echo4);
      return prompt_echo4;
    };
    p69 = prom<V +>{
      gsub = ldf gsub;
      p67 = prom<V +>{
        paste4 = ldf paste0;
        p66 = prom<V +>{
          continue_echo3 = ld `continue.echo`;
          continue_echo4 = force? continue_echo3;
          checkMissing(continue_echo4);
          return continue_echo4;
        };
        r354 = dyn paste4("\n", p66);
        return r354;
      };
      p68 = prom<V +>{
        dep20 = ld dep;
        dep21 = force? dep20;
        checkMissing(dep21);
        return dep21;
      };
      r357 = dyn gsub[, , , fixed]("\n", p67, p68, TRUE);
      return r357;
    };
    r359 = dyn paste3(p65, p69);
    check L649() else D214();
  L660():
    p70 = prom<V +>{
      dep24 = ld dep;
      dep25 = force? dep24;
      checkMissing(dep25);
      return dep25;
    };
    p71 = prom<V +>{
      do_trunc = ld `do.trunc`;
      do_trunc1 = force? do_trunc;
      checkMissing(do_trunc1);
      c124 = `as.logical`(do_trunc1);
      if c124 then L1() else L0();
    L0():
      nd4 = ld nd;
      nd5 = force? nd4;
      checkMissing(nd5);
      return nd5;
    L1():
      max_deparse_length3 = ld `max.deparse.length`;
      max_deparse_length4 = force? max_deparse_length3;
      checkMissing(max_deparse_length4);
      return max_deparse_length4;
    };
    r369 = dyn substr1(p70, 1, p71);
    check L661() else D221();
  L682():
    dx27 = getTryDispatchBuiltinValue(dr24);
    goto L185(i156, dx27);
  L683():
    dr26 = tryDispatchBuiltin.1("[[", dx28);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L685() else L684(i162, dr26);
  L684(i164, dx30):
    __17 = ldf `[[` in base;
    r406 = dyn __17(dx30, 1);
    goto L186(i164, r406);
  L697():
    p91 = prom<V +>{
      mode1 = ldf mode;
      p90 = prom<V +>{
        ei14 = ld ei;
        ei15 = force? ei14;
        checkMissing(ei15);
        c142 = `is.object`(ei15);
        if c142 then L1() else L2(ei15);
      L0(dx34):
        return dx34;
      L1():
        dr28 = tryDispatchBuiltin.1("[[", ei15);
        dc14 = getTryDispatchBuiltinDispatched(dr28);
        if dc14 then L3() else L2(dr28);
      L2(ei17):
        __19 = ldf `[[` in base;
        r415 = dyn __19(ei17, 1);
        goto L0(r415);
      L3():
        dx33 = getTryDispatchBuiltinValue(dr28);
        goto L0(dx33);
      };
      r417 = dyn mode1(p90);
      return r417;
    };
    r419 = dyn cat8(".... mode(ei[[1L]])=", p91, "; paste(curr.fun)=");
    check L698() else D242();
  L703():
    print_eval2 = force? print_eval1;
    checkMissing(print_eval2);
    c143 = `as.logical`(print_eval2);
    if c143 then L704() else L192(i173, c143);
  D56():
    deopt 215 [i7, r91];
  D57():
    deopt 217 [i14, e4];
  D75():
    deopt 287 [r121];
  D82():
    deopt 314 [have_encoding];
  D130():
    deopt 472 [r208];
  D131():
    deopt 479 [];
  D184():
    deopt 699 [i84, r290];
  D214():
    deopt 813 [i138, r359];
  D221():
    deopt 843 [i147, r369];
  D234():
    deopt 893 [i166, verbose17];
  D242():
    deopt 920 [i170, r419];
  L157(i105, r294):
    st srcfile = r294;
    trySrcLines = ldf trySrcLines;
    check L599() else D189();
  L192(i175, c145):
    c154 = `as.logical`(c145);
    if c154 then L711() else L193();
  L319():
    goto L61(i7, r91);
  L321():
    e5 = force? e4;
    checkMissing(e5);
    st encoding = e5;
    goto L63();
  L353():
    srcfilecopy = ldf srcfilecopy;
    check L354() else D76();
  L363():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L76(dx5);
  L364():
    have_encoding1 = force? have_encoding;
    checkMissing(have_encoding1);
    c44 = `as.logical`(have_encoding1);
    if c44 then L365() else L77();
  L466():
    goto L110();
  L470():
    p42 = prom<V +>{
      path = ld path;
      path1 = force? path;
      checkMissing(path1);
      return path1;
    };
    r214 = dyn setwd(p42);
    check L471() else D132();
  L590():
    goto L154(i84, r290);
  L595():
    srcref20 = ld srcref;
    check L597() else D187();
  L596():
    r293 = dyn base39(<sym srcref>, "srcfile");
    goto L157(i100, r293);
  L649():
    st dep = r359;
    sym49 = ldf nchar;
    base49 = ldf nchar in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L650() else L651();
  L661():
    st dep = r369;
    cat6 = ldf cat;
    check L662() else D222();
  L685():
    dx31 = getTryDispatchBuiltinValue(dr26);
    goto L186(i162, dx31);
  L686():
    verbose18 = force? verbose17;
    checkMissing(verbose18);
    c140 = `as.logical`(verbose18);
    if c140 then L687() else L187();
  L698():
    __20 = ldf `::`;
    check L699() else D243();
  L704():
    yy = ld yy;
    check L705() else D247();
  D76():
    deopt 289 [];
  D132():
    deopt 481 [r214];
  D187():
    deopt 709 [i100, srcref20];
  D189():
    deopt 716 [i105];
  D222():
    deopt 846 [i147];
  D243():
    deopt 922 [i170];
  D247():
    deopt 933 [i173, c143, yy];
  L77():
    goto L83("unknown");
  L83(r139):
    st encoding = r139;
    goto L84();
  L175(i145, r361):
    r363 = `-`(r361, 1);
    st nd = r363;
    goto L176(i145, r363);
  L187():
    goto L188(i166, NULL);
  L188(i169, r412):
    goto L189(i169);
  L193():
    goto L197(i175);
  L197(i193):
    verbose21 = ld verbose;
    check L728() else D255();
  L354():
    p25 = prom<V +>{
      filename2 = ld filename;
      filename3 = force? filename2;
      checkMissing(filename3);
      return filename3;
    };
    p26 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    p28 = prom<V +>{
      file_mtime = ldf `file.mtime`;
      p27 = prom<V +>{
        filename4 = ld filename;
        filename5 = force? filename4;
        checkMissing(filename5);
        return filename5;
      };
      r125 = dyn file_mtime(p27);
      c42 = `is.object`(r125);
      if c42 then L1() else L2(r125);
    L0(dx4):
      return dx4;
    L1():
      dr2 = tryDispatchBuiltin.1("[", r125);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(r127):
      __2 = ldf `[` in base;
      r128 = dyn __2(r127, 1.0);
      goto L0(r128);
    L3():
      dx3 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx3);
    };
    r130 = dyn srcfilecopy[, , , isFile](p25, p26, p28, TRUE);
    check L355() else D77();
  L365():
    loc = ld loc;
    check L366() else D83();
  L471():
    goto L106(r214);
  L597():
    srcref21 = force? srcref20;
    checkMissing(srcref21);
    attr2 = ldf attr in base;
    r295 = dyn attr2(srcref21, "srcfile");
    check L598() else D188();
  L599():
    p53 = prom<V +>{
      srcfile4 = ld srcfile;
      srcfile5 = force? srcfile4;
      checkMissing(srcfile5);
      return srcfile5;
    };
    p54 = prom<V +>{
      lastshown2 = ld lastshown;
      lastshown3 = force? lastshown2;
      checkMissing(lastshown3);
      r297 = `+`(lastshown3, 1.0);
      return r297;
    };
    p55 = prom<V +>{
      lastl4 = ld lastl;
      lastl5 = force? lastl4;
      checkMissing(lastl5);
      return lastl5;
    };
    r300 = dyn trySrcLines(p53, p54, p55);
    check L600() else D190();
  L650():
    dep22 = ld dep;
    check L652() else D215();
  L651():
    r360 = dyn base49(<sym dep>, "c");
    goto L175(i138, r360);
  L662():
    p72 = prom<V +>{
      spaced1 = ld spaced;
      spaced2 = force? spaced1;
      checkMissing(spaced2);
      c125 = `as.logical`(spaced2);
      if c125 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return "\n";
    };
    p73 = prom<V +>{
      dep26 = ld dep;
      dep27 = force? dep26;
      checkMissing(dep27);
      return dep27;
    };
    p79 = prom<V +>{
      do_trunc2 = ld `do.trunc`;
      do_trunc3 = force? do_trunc2;
      checkMissing(do_trunc3);
      c126 = `as.logical`(do_trunc3);
      if c126 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      paste5 = ldf paste;
      p78 = prom<V +>{
        grepl2 = ldf grepl;
        p74 = prom<V +>{
          sd6 = ld sd;
          sd7 = force? sd6;
          checkMissing(sd7);
          return sd7;
        };
        p75 = prom<V +>{
          dep28 = ld dep;
          dep29 = force? dep28;
          checkMissing(dep29);
          return dep29;
        };
        r374 = dyn grepl2(p74, p75);
        c127 = `as.logical`(r374);
        if c127 then L2() else L0(c127);
      L0(c129):
        c133 = `as.logical`(c129);
        if c133 then L4() else L1();
      L2():
        grepl3 = ldf grepl;
        p76 = prom<V +>{
          oddsd = ld oddsd;
          oddsd1 = force? oddsd;
          checkMissing(oddsd1);
          return oddsd1;
        };
        p77 = prom<V +>{
          dep30 = ld dep;
          dep31 = force? dep30;
          checkMissing(dep31);
          return dep31;
        };
        r377 = dyn grepl3(p76, p77);
        c130 = `as.logical`(r377);
        c131 = `&&`(c127, c130);
        goto L0(c131);
      L1():
        return " ....";
      L4():
        return " ...\" ...";
      };
      r379 = dyn paste5(p78, "[TRUNCATED] ");
      return r379;
    };
    r381 = dyn cat6[, , , , sep](p72, p73, p79, "\n", "");
    check L663() else D223();
  L687():
    cat7 = ldf cat;
    check L688() else D235();
  L699():
    r420 = dyn __20("utils", "str");
    check L700() else D244();
  L705():
    yy1 = force? yy;
    checkMissing(yy1);
    c146 = `is.object`(yy1);
    if c146 then L707() else L708(i173, c143, yy1);
  L711():
    sym50 = ldf isS4;
    base50 = ldf isS4 in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L712() else L713();
  D77():
    deopt 295 [r130];
  D83():
    deopt 316 [loc];
  D188():
    deopt 713 [i100, r295];
  D190():
    deopt 720 [i105, r300];
  D215():
    deopt 817 [i138, dep22];
  D223():
    deopt 853 [i147, r381];
  D235():
    deopt 896 [i166];
  D244():
    deopt 925 [i170, r420];
  D255():
    deopt 958 [i193, verbose21];
  L194(i185, r429):
    c156 = `as.logical`(r429);
    if c156 then L720() else L195();
  L355():
    st srcfile = r130;
    goto L75();
  L366():
    loc1 = force? loc;
    checkMissing(loc1);
    c45 = `is.vector`(loc1, "any");
    if c45 then L367() else L368();
  L598():
    goto L157(i100, r295);
  L600():
    st dep = r300;
    sym40 = ldf length;
    base40 = ldf length in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L601() else L602();
  L652():
    dep23 = force? dep22;
    checkMissing(dep23);
    nchar1 = ldf nchar in base;
    r362 = dyn nchar1(dep23, "c", FALSE, NA_LGL);
    check L653() else D216();
  L663():
    goto L179(i147, r381);
  L688():
    r407 = dyn cat7("curr.fun:");
    check L689() else D236();
  L700():
    checkFun.0(r420);
    r421 = r420 as cls;
    p93 = prom<V +>{
      paste6 = ldf paste;
      p92 = prom<V +>{
        curr_fun2 = ld `curr.fun`;
        curr_fun3 = force? curr_fun2;
        checkMissing(curr_fun3);
        return curr_fun3;
      };
      r423 = dyn paste6(p92);
      return r423;
    };
    r425 = dyn r421(p93);
    check L701() else D245();
  L706(i179, c150, dx36):
    c151 = `as.logical`(dx36);
    c152 = `&&`(c150, c151);
    goto L192(i179, c152);
  L707():
    dr30 = tryDispatchBuiltin.1("$", yy1);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L709() else L708(i173, c143, dr30);
  L708(i177, c148, yy3):
    r427 = `$`(yy3, <sym visible>);
    goto L706(i177, c148, r427);
  L712():
    yy4 = ld yy;
    check L714() else D248();
  L713():
    r428 = dyn base50(<lang `$`(yy, value)>);
    goto L194(i175, r428);
  L728():
    verbose22 = force? verbose21;
    checkMissing(verbose22);
    c159 = `as.logical`(verbose22);
    if c159 then L729() else L198();
  D216():
    deopt 823 [i138, r362];
  D236():
    deopt 898 [i166, r407];
  D245():
    deopt 928 [i170, r425];
  D248():
    deopt 939 [i175, yy4];
  L158(i108, r302):
    c107 = `as.logical`(r302);
    if c107 then L605() else L159();
  L195():
    print1 = ldf print;
    check L725() else D253();
  L196(i192, r437):
    goto L197(i192);
  L198():
    goto L199(i193, NULL);
  L199(i196, r454):
    goto L200(i196);
  L367():
    c46 = inherits(loc1, "factor", FALSE);
    if c46 then L369() else L370();
  L368():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L601():
    dep = ld dep;
    check L603() else D191();
  L602():
    r301 = dyn base40(<sym dep>);
    goto L158(i105, r301);
  L653():
    goto L175(i138, r362);
  L689():
    __18 = ldf `::`;
    check L690() else D237();
  L701():
    goto L191(i170);
  L709():
    dx35 = getTryDispatchBuiltinValue(dr30);
    goto L706(i173, c143, dx35);
  L714():
    yy5 = force? yy4;
    checkMissing(yy5);
    c155 = `is.object`(yy5);
    if c155 then L716() else L717(i175, yy5);
  L720():
    __21 = ldf `::`;
    check L721() else D250();
  L729():
    cat9 = ldf cat;
    check L730() else D256();
  D191():
    deopt 724 [i105, dep];
  D237():
    deopt 900 [i166];
  D250():
    deopt 945 [i185];
  D253():
    deopt 953 [i185];
  D256():
    deopt 961 [i193];
  L159():
    st srcref = NULL;
    goto L169(i108, NULL);
  L169(i133, r338):
    goto L170(i133, r338);
  L369():
    c47 = `is.character`(loc1);
    if c47 then L371() else L372();
  L370():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L369();
  L603():
    dep1 = force? dep;
    checkMissing(dep1);
    length8 = ldf length in base;
    r303 = dyn length8(dep1);
    check L604() else D192();
  L605():
    tail4 = ld tail;
    check L606() else D193();
  L690():
    r408 = dyn __18("utils", "str");
    check L691() else D238();
  L715(i189, dx38):
    isS4 = ldf isS4 in base;
    r431 = dyn isS4(dx38);
    check L719() else D249();
  L716():
    dr32 = tryDispatchBuiltin.1("$", yy5);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L718() else L717(i175, dr32);
  L717(i187, yy7):
    r430 = `$`(yy7, <sym value>);
    goto L715(i187, r430);
  L721():
    r432 = dyn __21("methods", "show");
    check L722() else D251();
  L725():
    p95 = prom<V +>{
      yy12 = ld yy;
      yy13 = force? yy12;
      checkMissing(yy13);
      c158 = `is.object`(yy13);
      if c158 then L1() else L2(yy13);
    L0(dx42):
      return dx42;
    L1():
      dr36 = tryDispatchBuiltin.1("$", yy13);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(yy15):
      r438 = `$`(yy15, <sym value>);
      goto L0(r438);
    L3():
      dx41 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx41);
    };
    r440 = dyn print1(p95);
    check L726() else D254();
  L730():
    p100 = prom<V +>{
      sQuote = ldf sQuote;
      p99 = prom<V +>{
        deparse4 = ldf deparse;
        p96 = prom<V +>{
          ei18 = ld ei;
          ei19 = force? ei18;
          checkMissing(ei19);
          return ei19;
        };
        p98 = prom<V +>{
          unique = ldf unique;
          p97 = prom<V +>{
            sym51 = ldf c;
            base51 = ldf c in base;
            guard51 = `==`.4(sym51, base51);
            if guard51 then L1() else L2();
          L0(r444):
            return r444;
          L1():
            deparseCtrl3 = ld deparseCtrl;
            deparseCtrl4 = force? deparseCtrl3;
            checkMissing(deparseCtrl4);
            c160 = ldf c in base;
            r445 = dyn c160(deparseCtrl4, "useSource");
            goto L0(r445);
          L2():
            r443 = dyn base51(<sym deparseCtrl>, "useSource");
            goto L0(r443);
          };
          r447 = dyn unique(p97);
          return r447;
        };
        r449 = dyn deparse4[, control](p96, p98);
        return r449;
      };
      r451 = dyn sQuote(p99);
      return r451;
    };
    r453 = dyn cat9[, , , sep](" .. after ", p100, "\n", "");
    check L731() else D257();
  D192():
    deopt 727 [i105, r303];
  D193():
    deopt 728 [i108, tail4];
  D238():
    deopt 903 [i166, r408];
  D249():
    deopt 943 [i189, r431];
  D251():
    deopt 948 [i185, r432];
  D254():
    deopt 955 [i185, r440];
  D257():
    deopt 967 [i193, r453];
  L78():
    goto L82("UTF-8");
  L79():
    goto L82("latin1");
  L80():
    goto L82("unknown");
  L82(r138):
    goto L83(r138);
  L371():
    c48 = `==`.6(loc1, "UTF-8");
    if c48 then L78() else L373();
  L372():
    i_ddd = dots[loc1];
    i20 = `as.integer`(i_ddd);
    c50 = `==`.5(i20, 1);
    if c50 then L78() else L375();
  L604():
    goto L158(i105, r303);
  L606():
    tail5 = force? tail4;
    checkMissing(tail5);
    c108 = `as.logical`(tail5);
    if c108 then L607() else L160();
  L691():
    checkFun.0(r408);
    r409 = r408 as cls;
    p89 = prom<V +>{
      curr_fun = ld `curr.fun`;
      curr_fun1 = force? curr_fun;
      checkMissing(curr_fun1);
      return curr_fun1;
    };
    r411 = dyn r409(p89);
    check L692() else D239();
  L718():
    dx37 = getTryDispatchBuiltinValue(dr32);
    goto L715(i175, dx37);
  L719():
    goto L194(i189, r431);
  L722():
    checkFun.0(r432);
    r433 = r432 as cls;
    p94 = prom<V +>{
      yy8 = ld yy;
      yy9 = force? yy8;
      checkMissing(yy9);
      c157 = `is.object`(yy9);
      if c157 then L1() else L2(yy9);
    L0(dx40):
      return dx40;
    L1():
      dr34 = tryDispatchBuiltin.1("$", yy9);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(yy11):
      r434 = `$`(yy11, <sym value>);
      goto L0(r434);
    L3():
      dx39 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx39);
    };
    r436 = dyn r433(p94);
    check L723() else D252();
  L726():
    goto L196(i185, r440);
  L731():
    goto L199(i193, r453);
  D239():
    deopt 906 [i166, r411];
  D252():
    deopt 951 [i185, r436];
  L160():
    firstl = ld firstl;
    check L613() else D196();
  L162(i116, r307):
    st leading = r307;
    lastl6 = ld lastl;
    check L615() else D198();
  L373():
    c49 = `==`.6(loc1, "ISO8859-1");
    if c49 then L79() else L374();
  L375():
    c51 = `==`.5(i20, 2);
    if c51 then L79() else L376();
  L607():
    sym41 = ldf length;
    base41 = ldf length in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L608() else L609();
  L692():
    goto L188(i166, r411);
  L723():
    goto L196(i185, r436);
  D196():
    deopt 736 [i108, firstl];
  D198():
    deopt 741 [i116, lastl6];
  L161(i115, r305):
    goto L162(i115, r305);
  L374():
    goto L80();
  L376():
    c52 = `==`.5(i20, 3);
    if c52 then L80() else L377();
  L608():
    dep2 = ld dep;
    check L610() else D194();
  L609():
    r304 = dyn base41(<sym dep>);
    goto L161(i108, r304);
  L613():
    firstl1 = force? firstl;
    checkMissing(firstl1);
    lastshown4 = ld lastshown;
    check L614() else D197();
  L615():
    lastl7 = force? lastl6;
    checkMissing(lastl7);
    st lastshown = lastl7;
    goto L167(i116);
  D194():
    deopt 732 [i108, dep2];
  D197():
    deopt 737 [i108, firstl1, lastshown4];
  L167(i117):
    sym42 = ldf length;
    base42 = ldf length in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L616() else L617();
  L377():
    goto L82(NULL);
  L610():
    dep3 = force? dep2;
    checkMissing(dep3);
    length9 = ldf length in base;
    r306 = dyn length9(dep3);
    check L611() else D195();
  L614():
    lastshown5 = force? lastshown4;
    checkMissing(lastshown5);
    r308 = `-`(firstl1, lastshown5);
    goto L162(i108, r308);
  D195():
    deopt 735 [i108, r306];
  L163(i120, r310):
    c109 = `as.logical`(r310);
    if c109 then L620() else L164(i120, c109);
  L611():
    goto L161(i108, r306);
  L616():
    dep4 = ld dep;
    check L618() else D199();
  L617():
    r309 = dyn base42(<sym dep>);
    goto L163(i117, r309);
  D199():
    deopt 746 [i117, dep4];
  L164(i122, c111):
    c116 = `as.logical`(c111);
    if c116 then L624() else L165();
  L618():
    dep5 = force? dep4;
    checkMissing(dep5);
    length10 = ldf length in base;
    r311 = dyn length10(dep5);
    check L619() else D200();
  L620():
    grepl1 = ldf grepl;
    check L621() else D201();
  D200():
    deopt 749 [i117, r311];
  D201():
    deopt 751 [i120, c109];
  L165():
    paste1 = ldf paste0;
    check L631() else D205();
  L619():
    goto L163(i117, r311);
  L621():
    p56 = prom<V +>{
      dep6 = ld dep;
      dep7 = force? dep6;
      checkMissing(dep7);
      c112 = `is.object`(dep7);
      if c112 then L1() else L2(dep7);
    L0(dx22):
      return dx22;
    L1():
      dr18 = tryDispatchBuiltin.1("[", dep7);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(dep9):
      __13 = ldf `[` in base;
      r312 = dyn __13(dep9, 1);
      goto L0(r312);
    L3():
      dx21 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx21);
    };
    r314 = dyn grepl1("^[[:blank:]]*$", p56);
    check L622() else D202();
  L624():
    dep10 = ld dep;
    check L625() else D203();
  D202():
    deopt 754 [i120, c109, r314];
  D203():
    deopt 756 [i122, dep10];
  D205():
    deopt 771 [i122];
  L622():
    c113 = `as.logical`(r314);
    c114 = `&&`(c109, c113);
    goto L164(i120, c114);
  L625():
    dep11 = force? dep10;
    checkMissing(dep11);
    c117 = `is.object`(dep11);
    if c117 then L626() else L627(i122, dep11);
  L631():
    p58 = prom<V +>{
      sym43 = ldf `rep.int`;
      base43 = ldf `rep.int` in base;
      guard43 = `==`.4(sym43, base43);
      if guard43 then L2() else L3();
    L0(r318):
      return r318;
    L2():
      sym44 = ldf c;
      base44 = ldf c in base;
      guard44 = `==`.4(sym44, base44);
      if guard44 then L4() else L5();
    L3():
      r317 = dyn base43(<lang c(prompt.echo, continue.echo)>, <lang pmax(0, c(leading, `-`(length(dep), leading)))>);
      goto L0(r317);
    L1(r320):
      pmax = ldf pmax;
      p57 = prom<V +>{
        sym45 = ldf c;
        base45 = ldf c in base;
        guard45 = `==`.4(sym45, base45);
        if guard45 then L2() else L3();
      L0(r323):
        return r323;
      L2():
        leading2 = ld leading;
        leading3 = force? leading2;
        checkMissing(leading3);
        sym46 = ldf length;
        base46 = ldf length in base;
        guard46 = `==`.4(sym46, base46);
        if guard46 then L4() else L5();
      L3():
        r322 = dyn base45(<sym leading>, <lang `-`(length(dep), leading)>);
        goto L0(r322);
      L1(r325):
        leading4 = ld leading;
        leading5 = force? leading4;
        checkMissing(leading5);
        r327 = `-`(r325, leading5);
        c119 = ldf c in base;
        r328 = dyn c119(leading3, r327);
        goto L0(r328);
      L4():
        dep14 = ld dep;
        dep15 = force? dep14;
        checkMissing(dep15);
        length11 = ldf length in base;
        r326 = dyn length11(dep15);
        goto L1(r326);
      L5():
        r324 = dyn base46(<sym dep>);
        goto L1(r324);
      };
      r330 = dyn pmax(0, p57);
      rep_int = ldf `rep.int` in base;
      r331 = dyn rep_int(r320, r330);
      goto L0(r331);
    L4():
      prompt_echo1 = ld `prompt.echo`;
      prompt_echo2 = force? prompt_echo1;
      checkMissing(prompt_echo2);
      continue_echo1 = ld `continue.echo`;
      continue_echo2 = force? continue_echo1;
      checkMissing(continue_echo2);
      c118 = ldf c in base;
      r321 = dyn c118(prompt_echo2, continue_echo2);
      goto L1(r321);
    L5():
      r319 = dyn base44(<sym prompt.echo>, <sym continue.echo>);
      goto L1(r319);
    };
    p59 = prom<V +>{
      dep16 = ld dep;
      dep17 = force? dep16;
      checkMissing(dep17);
      return dep17;
    };
    r334 = dyn paste1[, , collapse](p58, p59, "\n");
    check L632() else D206();
  D206():
    deopt 776 [i122, r334];
  L166(i129, dx24):
    st dep = dx24;
    leading = ld leading;
    check L629() else D204();
  L626():
    dr20 = tryDispatchBuiltin.1("[", dep11);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L628() else L627(i122, dr20);
  L627(i127, dep13):
    __14 = ldf `[` in base;
    r315 = dyn __14(dep13, -1);
    goto L166(i127, r315);
  L632():
    st dep = r334;
    sym47 = ldf nchar;
    base47 = ldf nchar in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L633() else L634();
  D204():
    deopt 762 [i129, leading];
  L168(i132, r336):
    st nd = r336;
    goto L169(i132, r336);
  L628():
    dx23 = getTryDispatchBuiltinValue(dr20);
    goto L166(i122, dx23);
  L629():
    leading1 = force? leading;
    checkMissing(leading1);
    r316 = `-`(leading1, 1);
    st leading = r316;
    goto L167(i129);
  L633():
    dep18 = ld dep;
    check L635() else D207();
  L634():
    r335 = dyn base47(<sym dep>, "c");
    goto L168(i122, r335);
  D207():
    deopt 780 [i122, dep18];
  L635():
    dep19 = force? dep18;
    checkMissing(dep19);
    nchar = ldf nchar in base;
    r337 = dyn nchar(dep19, "c", FALSE, NA_LGL);
    check L636() else D208();
  D208():
    deopt 786 [i122, r337];
  L636():
    goto L168(i122, r337);
  }
}
fun `inner-1800273180`(srcfile, showfrom, showto) {
  (reg srcfile:*, reg showfrom:*, reg showto:*) -+> V { var srcfile:*, var showfrom:*, var showto:*, reg tryCatch:cls, reg suppressWarnings:cls, reg getSrcLines:cls, reg srcfile1:*, reg srcfile2:V, reg p:p(V +), reg showfrom1:*, reg showfrom2:V, reg p1:p(V +), reg showto1:*, reg showto2:V, reg p2:p(V +), reg r3:V, reg p3:p(V +), reg r5:V, reg p4:p(V +), reg r7:cls, reg p5:p(V +), reg r9:V |
    mkenv;
    st srcfile = srcfile;
    st showfrom = showfrom;
    st showto = showto;
    tryCatch = ldf tryCatch;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p4 = prom<V +>{
      suppressWarnings = ldf suppressWarnings;
      p3 = prom<V +>{
        getSrcLines = ldf getSrcLines;
        p = prom<V +>{
          srcfile1 = ld srcfile;
          srcfile2 = force? srcfile1;
          checkMissing(srcfile2);
          return srcfile2;
        };
        p1 = prom<V +>{
          showfrom1 = ld showfrom;
          showfrom2 = force? showfrom1;
          checkMissing(showfrom2);
          return showfrom2;
        };
        p2 = prom<V +>{
          showto1 = ld showto;
          showto2 = force? showto1;
          checkMissing(showto2);
          return showto2;
        };
        r3 = dyn getSrcLines(p, p1, p2);
        return r3;
      };
      r5 = dyn suppressWarnings(p3);
      return r5;
    };
    p5 = prom<V +>{
      r7 = clos inner1560918050;
      return r7;
    };
    r9 = dyn tryCatch[, error](p4, p5);
    check L1() else D1();
  D1():
    deopt 5 [r9];
  L1():
    popenv;
    return r9;
  }
}
fun inner1560918050(e) {
  (reg e:*) -+> V { var e:*, reg character:cls, reg r:V |
    mkenv;
    st e = e;
    character = ldf character;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn character();
    check L1() else D1();
  D1():
    deopt 2 [r];
  L1():
    popenv;
    return r;
  }
}
fun inner560854305() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V |
    mkenv;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    list = ldf list in base;
    r2 = dyn list(NULL, FALSE);
    check L3() else D0();
  L2():
    r = dyn base[value, visible](NULL, FALSE);
    goto L0(r);
  D0():
    deopt 7 [r2];
  L3():
    goto L0(r2);
  }
}
fun `inner-289195048`(path, trace, `...`) {
  (reg path:*, reg trace:*, reg ddd:dots) -+> V { var path:*, var trace:*, reg trace_isMissing:L, reg trace_orDefault:*, var `...`:dots?, reg options:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg on_exit:cls, reg r3:V, reg list_files:cls, reg path1:*, reg path2:V, reg p:p(V +), reg r5:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg trace1:*, reg trace2:V, reg c1:L, reg cat:cls, reg nm:*, reg nm1:V, reg p1:p(V +), reg r7:V, reg i7:I, reg source:cls, reg file_path:cls, reg path3:*, reg path4:V, reg p2:p(V +), reg nm2:*, reg nm3:V, reg p3:p(V +), reg r11:V, reg p4:p(V +), reg ddd1:dots?, reg r13:V, reg trace3:*, reg trace4:V, reg c2:L, reg cat1:cls, reg r14:V, reg i10:I, reg options1:cls, reg op:*, reg op1:V, reg p5:p(V +), reg r17:V |
    mkenv;
    st path = path;
    trace_isMissing = missing.0(trace);
    if trace_isMissing then L0(TRUE) else L0(trace);
  L0(trace_orDefault):
    st trace = trace_orDefault;
    st `...` = ddd;
    options = ldf options;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    r = dyn options();
    check L11() else D1();
  D1():
    deopt 2 [r];
  L11():
    st op = r;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L1():
    list_files = ldf `list.files`;
    check L14() else D2();
  L12():
    on_exit = ldf `on.exit` in base;
    r3 = dyn on_exit(<lang options(op)>);
    goto L1();
  L13():
    r1 = dyn base(<lang options(op)>);
    goto L1();
  D2():
    deopt 8 [];
  L14():
    p = prom<V +>{
      path1 = ld path;
      path2 = force? path1;
      checkMissing(path2);
      return path2;
    };
    r5 = dyn list_files[, pattern](p, "[.][RrSsQq]$");
    check L15() else D3();
  D3():
    deopt 12 [r5];
  L15():
    s = toForSeq(r5);
    l = length(s);
    i = 0;
    goto L4(i);
  L4(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L3() else L9();
  L3():
    invisible.0();
    popenv;
    return i2;
  L9():
    x = `[[`(s, i2, NULL, TRUE);
    st nm = x;
    trace1 = ld trace;
    check L16() else D4();
  D4():
    deopt 15 [i2, trace1];
  L16():
    trace2 = force? trace1;
    checkMissing(trace2);
    c1 = `as.logical`(trace2);
    if c1 then L17() else L5();
  L5():
    goto L6(i2);
  L6(i7):
    source = ldf source;
    check L21() else D7();
  L17():
    cat = ldf cat;
    check L18() else D5();
  D5():
    deopt 18 [i2];
  D7():
    deopt 25 [i7];
  L18():
    p1 = prom<V +>{
      nm = ld nm;
      nm1 = force? nm;
      checkMissing(nm1);
      return nm1;
    };
    r7 = dyn cat(p1, ":");
    check L19() else D6();
  L21():
    p4 = prom<V +>{
      file_path = ldf `file.path`;
      p2 = prom<V +>{
        path3 = ld path;
        path4 = force? path3;
        checkMissing(path4);
        return path4;
      };
      p3 = prom<V +>{
        nm2 = ld nm;
        nm3 = force? nm2;
        checkMissing(nm3);
        return nm3;
      };
      r11 = dyn file_path(p2, p3);
      return r11;
    };
    ddd1 = ld `...`;
    r13 = dyn source[, `...`](p4, ddd1);
    check L22() else D8();
  D6():
    deopt 21 [i2, r7];
  D8():
    deopt 28 [i7, r13];
  L19():
    goto L6(i2);
  L22():
    trace3 = ld trace;
    check L23() else D9();
  D9():
    deopt 29 [i7, trace3];
  L23():
    trace4 = force? trace3;
    checkMissing(trace4);
    c2 = `as.logical`(trace4);
    if c2 then L24() else L7();
  L7():
    goto L8(i7);
  L8(i10):
    options1 = ldf options;
    check L28() else D12();
  L24():
    cat1 = ldf cat;
    check L25() else D10();
  D10():
    deopt 32 [i7];
  D12():
    deopt 38 [i10];
  L25():
    r14 = dyn cat1("\n");
    check L26() else D11();
  L28():
    p5 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r17 = dyn options1(p5);
    check L29() else D13();
  D11():
    deopt 34 [i7, r14];
  D13():
    deopt 40 [i10, r17];
  L26():
    goto L8(i7);
  L29():
    goto L4(i10);
  }
}