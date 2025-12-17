fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1287657899;
    st checkVignettes = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1287657899(package, dir, `lib.loc`, tangle, weave, latex, workdir, keepfiles) {
  (reg package:*, reg dir:*, reg lib_loc:*, reg tangle:*, reg weave:*, reg latex:*, reg workdir:*, reg keepfiles:*) -+> V { var package:*, var dir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var tangle:*, reg tangle_isMissing:L, reg tangle_orDefault:*, var weave:*, reg weave_isMissing:L, reg weave_orDefault:*, var latex:*, reg latex_isMissing:L, reg latex_orDefault:*, var workdir:*, reg workdir_isMissing:L, reg workdir_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var keepfiles:*, reg keepfiles_isMissing:L, reg keepfiles_orDefault:*, reg pkgVignettes:cls, reg package1:*, reg package2:V, reg p1:p(V +), reg dir1:*, reg dir2:V, reg p2:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p3:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg vigns:*, reg vigns1:V, reg c1:V, reg c2:L, reg match_arg:cls, reg workdir1:*, reg workdir2:V, reg p4:p(V +), reg r13:V, reg getwd:cls, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg wd:*, reg wd1:V, reg c3:V, reg c4:L, reg stop:cls, reg r17:V, reg workdir3:*, reg workdir4:V, reg r19:V, reg c5:L, reg tempfile:cls, reg r20:V, reg dir_create:cls, reg tmpd:*, reg tmpd1:V, reg p5:p(V +), reg r22:V, reg r23:V, reg c6:L, reg stop1:cls, reg gettextf:cls, reg sQuote:cls, reg tmpd2:*, reg tmpd3:V, reg p6:p(V +), reg r25:V, reg p7:p(V +), reg r27:V, reg p8:p(V +), reg r29:V, reg setwd:cls, reg tmpd4:*, reg tmpd5:V, reg p9:p(V +), reg r32:V, reg workdir5:*, reg workdir6:V, reg r34:V, reg c7:L, reg setwd1:cls, reg vigns2:*, reg vigns3:V, reg c8:L, reg vigns5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r35:V, reg p10:p(V +), reg r37:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r38:V, reg on_exit:cls, reg r40:V, reg file_create:cls, reg r41:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r42:V, reg r43:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r44:V, reg r45:V, reg list:cls, reg r46:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg r48:V, reg list1:cls, reg r49:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r50:V, reg r51:V, reg list2:cls, reg r52:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r53:V, reg r54:V, reg list3:cls, reg r55:V, reg list4:cls, reg r56:V, reg loadVignetteBuilder:cls, reg vigns6:*, reg vigns7:V, reg c9:L, reg vigns9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r57:V, reg p11:p(V +), reg r59:V, reg getwd1:cls, reg r60:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r61:V, reg r62:V, reg vigns10:*, reg vigns11:V, reg c10:L, reg vigns13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r63:V, reg r64:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c11:L, reg x:V, reg vigns14:*, reg vigns15:V, reg c12:L, reg i6:I, reg vigns17:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i8:I, reg dx7:V, reg r65:V, reg c13:L, reg i10:I, reg dx9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg i12:I, reg dx11:V, reg i13:*, reg i14:V, reg __:cls, reg r66:V, reg basename:cls, reg path:*, reg path1:V, reg p12:p(V +), reg r68:V, reg vigns18:*, reg vigns19:V, reg c14:L, reg i16:I, reg vigns21:V, reg dr10:V, reg dc5:L, reg dx12:V, reg i18:I, reg dx13:V, reg r69:V, reg c15:L, reg i20:I, reg dx15:V, reg dr12:V, reg dc6:L, reg dx16:V, reg i22:I, reg dx17:V, reg i23:*, reg i24:V, reg __1:cls, reg r70:V, reg vignetteEngine:cls, reg vigns22:*, reg vigns23:V, reg c16:L, reg vigns25:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg r71:V, reg c17:L, reg dx21:V, reg dr16:V, reg dc8:L, reg dx22:V, reg dx23:V, reg i25:*, reg i26:V, reg __2:cls, reg r72:V, reg p13:p(V +), reg r74:V, reg vigns26:*, reg vigns27:V, reg c18:L, reg i28:I, reg vigns29:V, reg dr18:V, reg dc9:L, reg dx24:V, reg i30:I, reg dx25:V, reg r75:V, reg c19:L, reg i32:I, reg dx27:V, reg dr20:V, reg dc10:L, reg dx28:V, reg i34:I, reg dx29:V, reg i35:*, reg i36:V, reg __3:cls, reg r76:V, reg enc:*, reg enc1:V, reg r77:V, reg c20:L, reg stop2:cls, reg gettextf1:cls, reg name:*, reg name1:V, reg p14:p(V +), reg r79:V, reg p15:p(V +), reg r81:V, reg i39:I, reg tangle1:*, reg tangle2:V, reg c21:L, reg message:cls, reg sQuote1:cls, reg file:*, reg file1:V, reg p16:p(V +), reg r84:V, reg p17:p(V +), reg r86:V, reg _eval_with_capture:cls, reg tryCatch:cls, reg engine:*, reg engine1:V, reg c22:L, reg engine3:V, reg dr22:V, reg dc11:L, reg dx30:V, reg dx31:V, reg r87:V, reg dx32:cls, reg path2:*, reg path3:V, reg p18:p(V +), reg enc2:*, reg enc3:V, reg p19:p(V +), reg setwd2:cls, reg startdir:*, reg startdir1:V, reg p20:p(V +), reg find_vignette_product:cls, reg name2:*, reg name3:V, reg p21:p(V +), reg engine4:*, reg engine5:V, reg p22:p(V +), reg r95:V, reg p23:p(V +), reg identity:*, reg identity1:V, reg p24:p(V +), reg r98:V, reg l1:*, reg c23:L, reg r101:V, reg l4:*, reg r102:V, reg l5:*, reg dr24:V, reg dc12:L, reg dx33:V, reg r105:V, reg l7:*, reg r106:V, reg dx34:V, reg r107:V, reg c24:L, reg r109:V, reg l9:*, reg dx36:V, reg dr26:V, reg dc13:L, reg dx37:V, reg r111:V, reg l11:*, reg dx38:V, reg file2:*, reg file3:V, reg ____:cls, reg r112:V, reg c25:L, reg r114:V, reg l13:*, reg dr28:V, reg dc14:L, reg dx39:V, reg r116:V, reg dx40:V, reg r117:V, reg p25:p(V +), reg r119:V, reg i42:I, reg weave1:*, reg weave2:V, reg c26:L, reg setwd3:cls, reg startdir2:*, reg startdir3:V, reg p26:p(V +), reg r122:V, reg _eval_with_capture1:cls, reg tryCatch1:cls, reg engine6:*, reg engine7:V, reg c27:L, reg engine9:V, reg dr30:V, reg dc15:L, reg dx41:V, reg dx42:V, reg r123:V, reg dx43:cls, reg path4:*, reg path5:V, reg p27:p(V +), reg enc4:*, reg enc5:V, reg p28:p(V +), reg setwd4:cls, reg startdir4:*, reg startdir5:V, reg p29:p(V +), reg find_vignette_product1:cls, reg name4:*, reg name5:V, reg p30:p(V +), reg engine10:*, reg engine11:V, reg p31:p(V +), reg r131:V, reg p32:p(V +), reg identity2:*, reg identity3:V, reg p33:p(V +), reg r134:V, reg l14:*, reg c28:L, reg r137:V, reg l17:*, reg r138:V, reg l18:*, reg dr32:V, reg dc16:L, reg dx44:V, reg r141:V, reg l20:*, reg r142:V, reg dx45:V, reg r143:V, reg c29:L, reg r145:V, reg l22:*, reg dx47:V, reg dr34:V, reg dc17:L, reg dx48:V, reg r147:V, reg l24:*, reg dx49:V, reg file4:*, reg file5:V, reg ____1:cls, reg r148:V, reg c30:L, reg r150:V, reg l26:*, reg dr36:V, reg dc18:L, reg dx50:V, reg r152:V, reg dx51:V, reg r153:V, reg p34:p(V +), reg r155:V, reg i45:I, reg setwd5:cls, reg startdir6:*, reg startdir7:V, reg p35:p(V +), reg r158:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r159:V, reg r160:V, reg c31:cls, reg r161:V, reg s1:V, reg l27:I, reg i46:I, reg i47:I, reg i48:I, reg c32:L, reg x1:V, reg result:*, reg result1:V, reg c33:L, reg i52:I, reg result3:V, reg dr38:V, reg dc19:L, reg dx52:V, reg i54:I, reg dx53:V, reg name6:*, reg name7:V, reg __4:cls, reg r162:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r163:V, reg i57:I, reg r164:V, reg resultsT:*, reg resultsT1:V, reg length:cls, reg r165:V, reg r166:V, reg c34:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r170:V, reg i64:I, reg r171:I, reg r172:V, reg resultsT2:*, reg resultsT3:V, reg length1:cls, reg r173:V, reg r174:V, reg r175:V, reg s2:V, reg l28:I, reg i65:I, reg i66:I, reg i67:I, reg i68:I, reg c35:L, reg x2:V, reg resultsT4:*, reg resultsT5:V, reg c36:L, reg i75:I, reg i76:I, reg resultsT7:V, reg dr40:V, reg dc20:L, reg dx54:V, reg i79:I, reg i80:I, reg dx55:V, reg i81:*, reg i82:V, reg __5:cls, reg r176:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r177:V, reg i87:I, reg i88:I, reg r178:V, reg outputsI:*, reg outputsI1:V, reg inherits:cls, reg r179:V, reg c37:L, reg normalizePath:cls, reg outputsI2:*, reg outputsI3:V, reg p36:p(V +), reg r182:V, reg i97:*, reg i98:V, reg r183:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r186:V, reg i103:I, reg i104:I, reg r187:V, reg r188:V, reg resultsT8:*, reg resultsT9:V, reg length2:cls, reg r189:V, reg r190:V, reg s3:V, reg l29:I, reg i105:I, reg i106:I, reg i107:I, reg i108:I, reg i109:I, reg c38:L, reg x3:V, reg resultsT10:*, reg resultsT11:V, reg c39:L, reg i119:I, reg i120:I, reg i121:I, reg resultsT13:V, reg dr42:V, reg dc21:L, reg dx56:V, reg i125:I, reg i126:I, reg i127:I, reg dx57:V, reg j:*, reg j1:V, reg __6:cls, reg r191:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r192:V, reg i134:I, reg i135:I, reg i136:I, reg r193:V, reg outputsJ:*, reg outputsJ1:V, reg inherits1:cls, reg r194:V, reg c40:L, reg normalizePath1:cls, reg outputsJ2:*, reg outputsJ3:V, reg p37:p(V +), reg r197:V, reg intersect:cls, reg outputsJ4:*, reg outputsJ5:V, reg p38:p(V +), reg outputsI4:*, reg outputsI5:V, reg p39:p(V +), reg r200:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r201:V, reg i155:I, reg i156:I, reg i157:I, reg r202:V, reg bad:*, reg bad1:V, reg length3:cls, reg r203:V, reg r204:V, reg c41:L, reg stop3:cls, reg gettextf2:cls, reg sQuote2:cls, reg basename1:cls, reg sym17:cls, reg base17:cls, reg guard17:L, reg r205:V, reg r206:V, reg resultsT14:*, reg resultsT15:V, reg names:cls, reg r207:V, reg c42:L, reg r209:V, reg dr44:V, reg dc22:L, reg dx58:V, reg dx59:V, reg j2:*, reg j3:V, reg __7:cls, reg r210:V, reg p40:p(V +), reg r212:V, reg p41:p(V +), reg r214:V, reg p42:p(V +), reg sQuote3:cls, reg name8:*, reg name9:V, reg p43:p(V +), reg r217:V, reg p44:p(V +), reg sQuote4:cls, reg basename2:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r219:V, reg r220:V, reg resultsT16:*, reg resultsT17:V, reg names1:cls, reg r221:V, reg c43:L, reg r223:V, reg dr46:V, reg dc23:L, reg dx60:V, reg dx61:V, reg i164:*, reg i165:V, reg __8:cls, reg r224:V, reg p45:p(V +), reg r226:V, reg p46:p(V +), reg r228:V, reg p47:p(V +), reg paste:cls, reg basename3:cls, reg bad2:*, reg bad3:V, reg p48:p(V +), reg r231:V, reg p49:p(V +), reg r233:V, reg p50:p(V +), reg r235:V, reg p51:p(V +), reg r237:V, reg i166:I, reg i167:I, reg i168:I, reg tangle3:*, reg tangle4:V, reg c44:L, reg getwd2:cls, reg r239:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r240:V, reg r241:V, reg cwd:*, reg cwd1:V, reg c45:V, reg c46:L, reg stop4:cls, reg r242:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r244:V, reg r245:V, reg result4:*, reg result5:V, reg c47:L, reg result7:V, reg dr48:V, reg dc24:L, reg dx62:V, reg dx63:V, reg r246:V, reg r247:I, reg s4:V, reg l30:I, reg i169:I, reg i170:I, reg i171:I, reg c48:L, reg x4:V, reg result8:*, reg result9:V, reg c49:L, reg i175:I, reg result11:V, reg dr50:V, reg dc25:L, reg dx64:V, reg i177:I, reg dx65:V, reg r248:V, reg c50:L, reg i179:I, reg dx67:V, reg dr52:V, reg dc26:L, reg dx68:V, reg i181:I, reg dx69:V, reg i182:*, reg i183:V, reg __9:cls, reg r249:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r250:V, reg i186:I, reg r251:V, reg sources:*, reg sources1:V, reg inherits2:cls, reg r252:V, reg c51:L, reg sources2:*, reg sources3:V, reg c52:L, reg i192:I, reg sources5:V, reg dr54:V, reg dc27:L, reg dx70:V, reg i194:I, reg dx71:V, reg file_test:cls, reg sources6:*, reg sources7:V, reg p52:p(V +), reg r255:V, reg __10:cls, reg r256:V, reg sources8:*, reg sources9:V, reg s5:V, reg l31:I, reg i195:I, reg i196:I, reg i197:I, reg i198:I, reg c53:L, reg x5:V, reg _eval_with_capture2:cls, reg tryCatch2:cls, reg source:cls, reg file6:*, reg file7:V, reg p53:p(V +), reg r258:V, reg p54:p(V +), reg identity4:*, reg identity5:V, reg p55:p(V +), reg r261:V, reg l32:*, reg c54:L, reg r264:V, reg l35:*, reg r265:V, reg l36:*, reg dr56:V, reg dc28:L, reg dx72:V, reg r268:V, reg l38:*, reg r269:V, reg dx73:V, reg r270:V, reg c55:L, reg r272:V, reg l40:*, reg dx75:V, reg dr58:V, reg dc29:L, reg dx76:V, reg r274:V, reg l42:*, reg dx77:V, reg file8:*, reg file9:V, reg ____2:cls, reg r275:V, reg c56:L, reg r277:V, reg l44:*, reg dr60:V, reg dc30:L, reg dx78:V, reg r279:V, reg dx79:V, reg r280:V, reg p56:p(V +), reg r282:V, reg setwd6:cls, reg startdir8:*, reg startdir9:V, reg p57:p(V +), reg r284:V, reg weave3:*, reg weave4:V, reg c57:L, reg c59:V, reg latex1:*, reg latex2:V, reg c60:L, reg c61:V, reg c63:L, reg _notin_:cls, reg list_files:cls, reg vigns30:*, reg vigns31:V, reg c64:L, reg vigns33:V, reg dr62:V, reg dc31:L, reg dx80:V, reg dx81:V, reg r285:V, reg p58:p(V +), reg r287:V, reg p59:p(V +), reg r289:V, reg c65:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r290:V, reg r291:V, reg result12:*, reg result13:V, reg c66:L, reg result15:V, reg dr64:V, reg dc32:L, reg dx82:V, reg dx83:V, reg r292:V, reg r293:I, reg s6:V, reg l45:I, reg i204:I, reg i205:I, reg i206:I, reg c67:L, reg x6:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r294:V, reg i211:I, reg r295:V, reg result16:*, reg result17:V, reg c68:L, reg i213:I, reg result19:V, reg dr66:V, reg dc33:L, reg dx84:V, reg i215:I, reg dx85:V, reg r296:V, reg names2:cls, reg r297:V, reg c69:L, reg i217:I, reg r299:V, reg dr68:V, reg dc34:L, reg dx86:V, reg i219:I, reg dx87:V, reg i220:*, reg i221:V, reg __11:cls, reg r300:V, reg result20:*, reg result21:V, reg c70:L, reg i223:I, reg result23:V, reg dr70:V, reg dc35:L, reg dx88:V, reg i225:I, reg dx89:V, reg r301:V, reg c71:L, reg i227:I, reg dx91:V, reg dr72:V, reg dc36:L, reg dx92:V, reg i229:I, reg dx93:V, reg i230:*, reg i231:V, reg __12:cls, reg r302:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r303:V, reg i234:I, reg r304:V, reg output:*, reg output1:V, reg inherits3:cls, reg r305:V, reg c72:L, reg vignette_is_tex:cls, reg output2:*, reg output3:V, reg p60:p(V +), reg r308:V, reg r309:V, reg c73:L, reg _eval_with_capture3:cls, reg tryCatch3:cls, reg texi2pdf:cls, reg output4:*, reg output5:V, reg p61:p(V +), reg vigns34:*, reg vigns35:V, reg c74:L, reg vigns37:V, reg dr74:V, reg dc37:L, reg dx94:V, reg dx95:V, reg r312:V, reg p62:p(V +), reg find_vignette_product2:cls, reg file_path_sans_ext:cls, reg output6:*, reg output7:V, reg p63:p(V +), reg r316:V, reg p64:p(V +), reg engine12:*, reg engine13:V, reg p65:p(V +), reg r319:V, reg p66:p(V +), reg identity6:*, reg identity7:V, reg p67:p(V +), reg r322:V, reg l46:*, reg c75:L, reg r325:V, reg l49:*, reg r326:V, reg l50:*, reg dr76:V, reg dc38:L, reg dx96:V, reg r329:V, reg l52:*, reg r330:V, reg dx97:V, reg r331:V, reg c76:L, reg r333:V, reg l54:*, reg dx99:V, reg dr78:V, reg dc39:L, reg dx100:V, reg r335:V, reg l56:*, reg dx101:V, reg file10:*, reg file11:V, reg ____3:cls, reg r336:V, reg c77:L, reg r338:V, reg l58:*, reg dr80:V, reg dc40:L, reg dx102:V, reg r340:V, reg dx103:V, reg r341:V, reg p68:p(V +), reg r343:V, reg i243:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r344:V, reg r345:V, reg c78:cls, reg r346:V, reg s7:V, reg l59:I, reg i245:I, reg i246:I, reg i247:I, reg c79:L, reg x7:V, reg result24:*, reg result25:V, reg c80:L, reg i251:I, reg result27:V, reg dr82:V, reg dc41:L, reg dx104:V, reg i253:I, reg dx105:V, reg name10:*, reg name11:V, reg __13:cls, reg r347:V, reg lapply:cls, reg resultsT18:*, reg resultsT19:V, reg p69:p(V +), reg r349:cls, reg p70:p(V +), reg r351:V, reg resultsT20:*, reg resultsT21:V, reg c81:L, reg i255:I, reg resultsT23:V, reg dr84:V, reg dc42:L, reg dx106:V, reg i257:I, reg dx107:V, reg vapply:cls, reg resultsT24:*, reg resultsT25:V, reg p71:p(V +), reg is_null:*, reg is_null1:V, reg p72:p(V +), reg r354:V, reg r355:V, reg __14:cls, reg r356:V, reg resultsT26:*, reg resultsT27:V, reg l60:*, reg c82:L, reg i259:I, reg resultsT29:V, reg l62:*, reg dr86:V, reg dc43:L, reg dx108:V, reg i261:I, reg dx109:V, reg name12:*, reg name13:V, reg ____4:cls, reg r357:V, reg file_remove:cls, reg r358:V, reg l63:*, reg class__:cls, reg r359:V, reg result28:*, reg result29:V |
    mkenv;
    st package = package;
    st dir = dir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    tangle_isMissing = missing.0(tangle);
    if tangle_isMissing then L1(TRUE) else L1(tangle);
  L1(tangle_orDefault):
    st tangle = tangle_orDefault;
    weave_isMissing = missing.0(weave);
    if weave_isMissing then L2(TRUE) else L2(weave);
  L2(weave_orDefault):
    st weave = weave_orDefault;
    latex_isMissing = missing.0(latex);
    if latex_isMissing then L3(FALSE) else L3(latex);
  L3(latex_orDefault):
    st latex = latex_orDefault;
    workdir_isMissing = missing.0(workdir);
    if workdir_isMissing then L4() else L5(workdir);
  L4():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("tmp", "src", "cur");
      goto L0(r2);
    L2():
      r = dyn base("tmp", "src", "cur");
      goto L0(r);
    };
    goto L5(p);
  L5(workdir_orDefault):
    st workdir = workdir_orDefault;
    keepfiles_isMissing = missing.0(keepfiles);
    if keepfiles_isMissing then L6(FALSE) else L6(keepfiles);
  L6(keepfiles_orDefault):
    st keepfiles = keepfiles_orDefault;
    pkgVignettes = ldf pkgVignettes;
    check L99() else D0();
  D0():
    deopt 1 [];
  L99():
    p1 = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    p2 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p3 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r7 = dyn pkgVignettes[package, dir, `lib.loc`](p1, p2, p3);
    check L100() else D1();
  D1():
    deopt 8 [r7];
  L100():
    st vigns = r7;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L101() else L102();
  L7(r9):
    c2 = `as.logical`(r9);
    if c2 then L104() else L8();
  L101():
    vigns = ld vigns;
    check L103() else D2();
  L102():
    r8 = dyn base1(<sym vigns>);
    goto L7(r8);
  D2():
    deopt 11 [vigns];
  L8():
    match_arg = ldf `match.arg`;
    check L107() else D3();
  L103():
    vigns1 = force? vigns;
    checkMissing(vigns1);
    c1 = `==`(vigns1, NULL);
    goto L7(c1);
  L104():
    popenv;
    return NULL;
  D3():
    deopt 20 [];
  L107():
    p4 = prom<V +>{
      workdir1 = ld workdir;
      workdir2 = force? workdir1;
      checkMissing(workdir2);
      return workdir2;
    };
    r13 = dyn match_arg(p4);
    check L108() else D4();
  D4():
    deopt 22 [r13];
  L108():
    st workdir = r13;
    getwd = ldf getwd;
    check L109() else D5();
  D5():
    deopt 25 [];
  L109():
    r14 = dyn getwd();
    check L110() else D6();
  D6():
    deopt 26 [r14];
  L110():
    st wd = r14;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L111() else L112();
  L10(r16):
    c4 = `as.logical`(r16);
    if c4 then L114() else L11();
  L111():
    wd = ld wd;
    check L113() else D7();
  L112():
    r15 = dyn base2(<sym wd>);
    goto L10(r15);
  D7():
    deopt 29 [wd];
  L11():
    goto L12();
  L12():
    workdir3 = ld workdir;
    check L118() else D10();
  L113():
    wd1 = force? wd;
    checkMissing(wd1);
    c3 = `==`(wd1, NULL);
    goto L10(c3);
  L114():
    stop = ldf stop;
    check L115() else D8();
  D8():
    deopt 33 [];
  D10():
    deopt 38 [workdir3];
  L115():
    r17 = dyn stop("current working directory cannot be ascertained");
    check L116() else D9();
  L118():
    workdir4 = force? workdir3;
    checkMissing(workdir4);
    r19 = `==`(workdir4, "tmp");
    c5 = `as.logical`(r19);
    if c5 then L119() else L13();
  D9():
    deopt 35 [r17];
  L13():
    st keepfiles = TRUE;
    workdir5 = ld workdir;
    check L131() else D19();
  L16():
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L136() else L137();
  L116():
    goto L12();
  L119():
    tempfile = ldf tempfile;
    check L120() else D11();
  D11():
    deopt 43 [];
  D19():
    deopt 67 [workdir5];
  L18():
    file_create = ldf `file.create`;
    check L138() else D22();
  L120():
    r20 = dyn tempfile("Sweave");
    check L121() else D12();
  L131():
    workdir6 = force? workdir5;
    checkMissing(workdir6);
    r34 = `==`(workdir6, "src");
    c7 = `as.logical`(r34);
    if c7 then L132() else L17();
  L136():
    on_exit = ldf `on.exit` in base;
    r40 = dyn on_exit(<lang {
      setwd(wd);
      if(`!`(keepfiles), unlink(tmpd, recursive=TRUE))
    }>);
    goto L18();
  L137():
    r38 = dyn base3(<lang {
      setwd(wd);
      if(`!`(keepfiles), unlink(tmpd, recursive=TRUE))
    }>);
    goto L18();
  D12():
    deopt 45 [r20];
  D22():
    deopt 81 [];
  L17():
    goto L16();
  L121():
    st tmpd = r20;
    dir_create = ldf `dir.create`;
    check L122() else D13();
  L132():
    setwd1 = ldf setwd;
    check L133() else D20();
  L138():
    r41 = dyn file_create(".check.timestamp");
    check L139() else D23();
  D13():
    deopt 48 [];
  D20():
    deopt 72 [];
  D23():
    deopt 83 [r41];
  L122():
    p5 = prom<V +>{
      tmpd = ld tmpd;
      tmpd1 = force? tmpd;
      checkMissing(tmpd1);
      return tmpd1;
    };
    r22 = dyn dir_create(p5);
    check L123() else D14();
  L133():
    p10 = prom<V +>{
      vigns2 = ld vigns;
      vigns3 = force? vigns2;
      checkMissing(vigns3);
      c8 = `is.object`(vigns3);
      if c8 then L1() else L2(vigns3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", vigns3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(vigns5):
      r35 = `$`(vigns5, <sym dir>);
      goto L0(r35);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r37 = dyn setwd1(p10);
    check L134() else D21();
  L139():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L140() else L141();
  D14():
    deopt 50 [r22];
  D21():
    deopt 74 [r37];
  L19(r43):
    st result = r43;
    loadVignetteBuilder = ldf loadVignetteBuilder;
    check L155() else D29();
  L123():
    r23 = `!`(r22);
    c6 = `as.logical`(r23);
    if c6 then L124() else L14();
  L134():
    goto L16();
  L140():
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L142() else L143();
  L141():
    r42 = dyn base4[tangle, weave, source, latex](<lang list()>, <lang list()>, <lang list()>, <lang list()>);
    goto L19(r42);
  D29():
    deopt 110 [];
  L14():
    goto L15();
  L15():
    setwd = ldf setwd;
    check L128() else D17();
  L20(r45):
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L145() else L146();
  L124():
    stop1 = ldf stop;
    check L125() else D15();
  L142():
    list = ldf list in base;
    r46 = dyn list();
    check L144() else D24();
  L143():
    r44 = dyn base5();
    goto L20(r44);
  L155():
    p11 = prom<V +>{
      vigns6 = ld vigns;
      vigns7 = force? vigns6;
      checkMissing(vigns7);
      c9 = `is.object`(vigns7);
      if c9 then L1() else L2(vigns7);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", vigns7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(vigns9):
      r57 = `$`(vigns9, <sym pkgdir>);
      goto L0(r57);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r59 = dyn loadVignetteBuilder(p11);
    check L156() else D30();
  D15():
    deopt 53 [];
  D17():
    deopt 61 [];
  D24():
    deopt 89 [r46];
  D30():
    deopt 112 [r59];
  L21(r48):
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L148() else L149();
  L125():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        sQuote = ldf sQuote;
        p6 = prom<V +>{
          tmpd2 = ld tmpd;
          tmpd3 = force? tmpd2;
          checkMissing(tmpd3);
          return tmpd3;
        };
        r25 = dyn sQuote(p6);
        return r25;
      };
      r27 = dyn gettextf("unable to create temp directory %s ", p7);
      return r27;
    };
    r29 = dyn stop1[, domain](p8, NA_LGL);
    check L126() else D16();
  L128():
    p9 = prom<V +>{
      tmpd4 = ld tmpd;
      tmpd5 = force? tmpd4;
      checkMissing(tmpd5);
      return tmpd5;
    };
    r32 = dyn setwd(p9);
    check L129() else D18();
  L144():
    goto L20(r46);
  L145():
    list1 = ldf list in base;
    r49 = dyn list1();
    check L147() else D25();
  L146():
    r47 = dyn base6();
    goto L21(r47);
  L156():
    getwd1 = ldf getwd;
    check L157() else D31();
  D16():
    deopt 57 [r29];
  D18():
    deopt 63 [r32];
  D25():
    deopt 94 [r49];
  D31():
    deopt 114 [];
  L22(r51):
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L151() else L152();
  L126():
    goto L15();
  L129():
    goto L16();
  L147():
    goto L21(r49);
  L148():
    list2 = ldf list in base;
    r52 = dyn list2();
    check L150() else D26();
  L149():
    r50 = dyn base7();
    goto L22(r50);
  L157():
    r60 = dyn getwd1();
    check L158() else D32();
  D26():
    deopt 99 [r52];
  D32():
    deopt 115 [r60];
  L23(r54):
    list4 = ldf list in base;
    r56 = dyn list4(r45, r48, r51, r54);
    check L154() else D28();
  L150():
    goto L22(r52);
  L151():
    list3 = ldf list in base;
    r55 = dyn list3();
    check L153() else D27();
  L152():
    r53 = dyn base8();
    goto L23(r53);
  L158():
    st startdir = r60;
    sym9 = ldf seq_along;
    base9 = ldf seq_along in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L159() else L160();
  D27():
    deopt 104 [r55];
  D28():
    deopt 107 [r56];
  L24(r62):
    s = toForSeq(r62);
    l = length(s);
    i = 0;
    goto L25(i);
  L153():
    goto L23(r55);
  L154():
    goto L19(r56);
  L159():
    vigns10 = ld vigns;
    check L161() else D33();
  L160():
    r61 = dyn base9(<lang `$`(vigns, docs)>);
    goto L24(r61);
  D33():
    deopt 118 [vigns10];
  L25(i1):
    i2 = `+`.1(i1, 1);
    c11 = `<`.1(l, i2);
    if c11 then L166() else L35();
  L161():
    vigns11 = force? vigns10;
    checkMissing(vigns11);
    c10 = `is.object`(vigns11);
    if c10 then L163() else L164(vigns11);
  L35():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    vigns14 = ld vigns;
    check L167() else D34();
  L162(dx5):
    r64 = seq_along(dx5);
    goto L24(r64);
  L163():
    dr4 = tryDispatchBuiltin.1("$", vigns11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L165() else L164(dr4);
  L164(vigns13):
    r63 = `$`(vigns13, <sym docs>);
    goto L162(r63);
  L166():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L219() else L220();
  D34():
    deopt 122 [i2, vigns14];
  L36(r160):
    s1 = toForSeq(r160);
    l27 = length(s1);
    i46 = 0;
    goto L37(i46);
  L165():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L162(dx4);
  L167():
    vigns15 = force? vigns14;
    checkMissing(vigns15);
    c12 = `is.object`(vigns15);
    if c12 then L169() else L170(i2, vigns15);
  L219():
    c31 = ldf c in base;
    r161 = dyn c31("weave", "tangle");
    check L221() else D59();
  L220():
    r159 = dyn base10("weave", "tangle");
    goto L36(r159);
  D59():
    deopt 202 [r161];
  L37(i47):
    i48 = `+`.1(i47, 1);
    c32 = `<`.1(l27, i48);
    if c32 then L222() else L59();
  L168(i8, dx7):
    c13 = `is.object`(dx7);
    if c13 then L172() else L173(i8, dx7);
  L169():
    dr6 = tryDispatchBuiltin.1("$", vigns15);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L171() else L170(i2, dr6);
  L170(i6, vigns17):
    r65 = `$`(vigns17, <sym docs>);
    goto L168(i6, r65);
  L221():
    goto L36(r161);
  L26(i12, dx11):
    st path = dx11;
    basename = ldf basename;
    check L176() else D36();
  L59():
    x1 = `[[`(s1, i48, NULL, TRUE);
    st name = x1;
    result = ld result;
    check L223() else D60();
  L171():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L168(i2, dx6);
  L172():
    dr8 = tryDispatchBuiltin.1("[", dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L174() else L173(i8, dr8);
  L173(i10, dx9):
    i13 = ld i;
    check L175() else D35();
  L222():
    tangle3 = ld tangle;
    check L284() else D87();
  D35():
    deopt 125 [i10, dx9, i13];
  D36():
    deopt 130 [i12];
  D60():
    deopt 203 [i48, result];
  D87():
    deopt 318 [tangle3];
  L174():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L26(i8, dx10);
  L175():
    i14 = force? i13;
    __ = ldf `[` in base;
    r66 = dyn __(dx9, i14);
    goto L26(i10, r66);
  L176():
    p12 = prom<V +>{
      path = ld path;
      path1 = force? path;
      checkMissing(path1);
      return path1;
    };
    r68 = dyn basename(p12);
    check L177() else D37();
  L223():
    result1 = force? result;
    checkMissing(result1);
    c33 = `is.object`(result1);
    if c33 then L224() else L225(i48, result1);
  L284():
    tangle4 = force? tangle3;
    checkMissing(tangle4);
    c44 = `as.logical`(tangle4);
    if c44 then L285() else L60();
  D37():
    deopt 132 [i12, r68];
  L38(i54, dx53):
    st resultsT = dx53;
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L228() else L229();
  L60():
    goto L76();
  L76():
    weave3 = ld weave;
    check L331() else D106();
  L177():
    st file = r68;
    vigns18 = ld vigns;
    check L178() else D38();
  L224():
    dr38 = tryDispatchBuiltin.1("[[", result1);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L226() else L225(i48, dr38);
  L225(i52, result3):
    name6 = ld name;
    check L227() else D61();
  L285():
    getwd2 = ldf getwd;
    check L286() else D88();
  D38():
    deopt 134 [i12, vigns18];
  D61():
    deopt 205 [i52, result3, name6];
  D88():
    deopt 321 [];
  D106():
    deopt 389 [weave3];
  L39(i57, r164):
    r166 = `<=`(r164, 1);
    c34 = `as.logical`(r166);
    if c34 then L232() else L40();
  L178():
    vigns19 = force? vigns18;
    checkMissing(vigns19);
    c14 = `is.object`(vigns19);
    if c14 then L180() else L181(i12, vigns19);
  L226():
    dx52 = getTryDispatchBuiltinValue(dr38);
    goto L38(i48, dx52);
  L227():
    name7 = force? name6;
    __4 = ldf `[[` in base;
    r162 = dyn __4(result3, name7);
    goto L38(i52, r162);
  L228():
    resultsT = ld resultsT;
    check L230() else D62();
  L229():
    r163 = dyn base11(<sym resultsT>);
    goto L39(i54, r163);
  L286():
    r239 = dyn getwd2();
    check L287() else D89();
  L331():
    weave4 = force? weave3;
    checkMissing(weave4);
    c57 = `as.logical`(weave4);
    if c57 then L332() else L77(c57);
  D62():
    deopt 211 [i54, resultsT];
  D89():
    deopt 322 [r239];
  L40():
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L235() else L236();
  L77(c59):
    c63 = `as.logical`(c59);
    if c63 then L335() else L78();
  L179(i18, dx13):
    c15 = `is.object`(dx13);
    if c15 then L183() else L184(i18, dx13);
  L180():
    dr10 = tryDispatchBuiltin.1("$", vigns19);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L182() else L181(i12, dr10);
  L181(i16, vigns21):
    r69 = `$`(vigns21, <sym names>);
    goto L179(i16, r69);
  L230():
    resultsT1 = force? resultsT;
    checkMissing(resultsT1);
    length = ldf length in base;
    r165 = dyn length(resultsT1);
    check L231() else D63();
  L232():
    goto L37(i57);
  L287():
    st cwd = r239;
    sym19 = ldf `is.null`;
    base19 = ldf `is.null` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L288() else L289();
  L332():
    latex1 = ld latex;
    check L333() else D107();
  D63():
    deopt 214 [i54, r165];
  D107():
    deopt 391 [c57, latex1];
  L27(i22, dx17):
    st name = dx17;
    vignetteEngine = ldf vignetteEngine;
    check L187() else D40();
  L42(i64, r171, r172):
    r174 = `-`(r172, 1);
    r175 = `:`(r171, r174);
    s2 = toForSeq(r175);
    l28 = length(s2);
    i65 = 0;
    goto L43(i64, i65);
  L61(r241):
    c46 = `as.logical`(r241);
    if c46 then L291() else L62();
  L78():
    goto L92();
  L92():
    sym25 = ldf c;
    base25 = ldf c in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L384() else L385();
  L182():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L179(i12, dx12);
  L183():
    dr12 = tryDispatchBuiltin.1("[", dx13);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L185() else L184(i18, dr12);
  L184(i20, dx15):
    i23 = ld i;
    check L186() else D39();
  L231():
    goto L39(i54, r165);
  L235():
    resultsT2 = ld resultsT;
    check L237() else D64();
  L236():
    r170 = dyn base12(<sym resultsT>);
    goto L42(i57, 1, r170);
  L288():
    cwd = ld cwd;
    check L290() else D90();
  L289():
    r240 = dyn base19(<sym cwd>);
    goto L61(r240);
  L333():
    latex2 = force? latex1;
    checkMissing(latex2);
    c60 = `as.logical`(latex2);
    c61 = `&&`(c57, c60);
    goto L77(c61);
  L335():
    _notin_ = ldf `%notin%`;
    check L336() else D108();
  D39():
    deopt 137 [i20, dx15, i23];
  D40():
    deopt 142 [i22];
  D64():
    deopt 224 [i57, 1, resultsT2];
  D90():
    deopt 325 [cwd];
  D108():
    deopt 395 [];
  L43(i66, i67):
    i68 = `+`.1(i67, 1);
    c35 = `<`.1(l28, i68);
    if c35 then L239() else L58();
  L62():
    goto L63();
  L63():
    sym20 = ldf seq_along;
    base20 = ldf seq_along in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L295() else L296();
  L93(r345):
    s7 = toForSeq(r345);
    l59 = length(s7);
    i245 = 0;
    goto L94(i245);
  L185():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L27(i18, dx16);
  L186():
    i24 = force? i23;
    __1 = ldf `[` in base;
    r70 = dyn __1(dx15, i24);
    goto L27(i20, r70);
  L187():
    p13 = prom<V +>{
      vigns22 = ld vigns;
      vigns23 = force? vigns22;
      checkMissing(vigns23);
      c16 = `is.object`(vigns23);
      if c16 then L2() else L3(vigns23);
    L1(dx19):
      c17 = `is.object`(dx19);
      if c17 then L5() else L6(dx19);
    L2():
      dr14 = tryDispatchBuiltin.1("$", vigns23);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L4() else L3(dr14);
    L3(vigns25):
      r71 = `$`(vigns25, <sym engines>);
      goto L1(r71);
    L0(dx23):
      return dx23;
    L4():
      dx18 = getTryDispatchBuiltinValue(dr14);
      goto L1(dx18);
    L5():
      dr16 = tryDispatchBuiltin.1("[", dx19);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L7() else L6(dr16);
    L6(dx21):
      i25 = ld i;
      i26 = force? i25;
      __2 = ldf `[` in base;
      r72 = dyn __2(dx21, i26);
      goto L0(r72);
    L7():
      dx22 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx22);
    };
    r74 = dyn vignetteEngine(p13);
    check L188() else D41();
  L237():
    resultsT3 = force? resultsT2;
    checkMissing(resultsT3);
    length1 = ldf length in base;
    r173 = dyn length1(resultsT3);
    check L238() else D65();
  L290():
    cwd1 = force? cwd;
    checkMissing(cwd1);
    c45 = `==`(cwd1, NULL);
    goto L61(c45);
  L291():
    stop4 = ldf stop;
    check L292() else D91();
  L336():
    p59 = prom<V +>{
      list_files = ldf `list.files`;
      p58 = prom<V +>{
        vigns30 = ld vigns;
        vigns31 = force? vigns30;
        checkMissing(vigns31);
        c64 = `is.object`(vigns31);
        if c64 then L1() else L2(vigns31);
      L0(dx81):
        return dx81;
      L1():
        dr62 = tryDispatchBuiltin.1("$", vigns31);
        dc31 = getTryDispatchBuiltinDispatched(dr62);
        if dc31 then L3() else L2(dr62);
      L2(vigns33):
        r285 = `$`(vigns33, <sym dir>);
        goto L0(r285);
      L3():
        dx80 = getTryDispatchBuiltinValue(dr62);
        goto L0(dx80);
      };
      r287 = dyn list_files(p58);
      return r287;
    };
    r289 = dyn _notin_("Makefile", p59);
    check L337() else D109();
  L384():
    c78 = ldf c in base;
    r346 = dyn c78("tangle", "weave", "source", "latex");
    check L386() else D122();
  L385():
    r344 = dyn base25("tangle", "weave", "source", "latex");
    goto L93(r344);
  D41():
    deopt 144 [i22, r74];
  D65():
    deopt 227 [i57, 1, r173];
  D91():
    deopt 329 [];
  D109():
    deopt 398 [r289];
  D122():
    deopt 461 [r346];
  L58():
    x2 = `[[`(s2, i68, NULL, TRUE);
    st i = x2;
    resultsT4 = ld resultsT;
    check L240() else D66();
  L64(r245):
    s4 = toForSeq(r245);
    l30 = length(s4);
    i169 = 0;
    goto L65(i169);
  L94(i246):
    i247 = `+`.1(i246, 1);
    c79 = `<`.1(l59, i247);
    if c79 then L387() else L98();
  L188():
    st engine = r74;
    vigns26 = ld vigns;
    check L189() else D42();
  L238():
    goto L42(i57, 1, r173);
  L239():
    goto L37(i66);
  L292():
    r242 = dyn stop4("current working directory cannot be ascertained");
    check L293() else D92();
  L295():
    result4 = ld result;
    check L297() else D93();
  L296():
    r244 = dyn base20(<lang `$`(result, tangle)>);
    goto L64(r244);
  L337():
    c65 = `as.logical`(r289);
    if c65 then L338() else L79();
  L386():
    goto L93(r346);
  D42():
    deopt 146 [i22, vigns26];
  D66():
    deopt 231 [i66, i68, resultsT4];
  D92():
    deopt 331 [r242];
  D93():
    deopt 335 [result4];
  L65(i170):
    i171 = `+`.1(i170, 1);
    c48 = `<`.1(l30, i171);
    if c48 then L302() else L75();
  L79():
    goto L91(NULL);
  L91(i243):
    goto L92();
  L98():
    x7 = `[[`(s7, i247, NULL, TRUE);
    st name = x7;
    result24 = ld result;
    check L388() else D123();
  L189():
    vigns27 = force? vigns26;
    checkMissing(vigns27);
    c18 = `is.object`(vigns27);
    if c18 then L191() else L192(i22, vigns27);
  L240():
    resultsT5 = force? resultsT4;
    checkMissing(resultsT5);
    c36 = `is.object`(resultsT5);
    if c36 then L241() else L242(i66, i68, resultsT5);
  L293():
    goto L63();
  L297():
    result5 = force? result4;
    checkMissing(result5);
    c47 = `is.object`(result5);
    if c47 then L299() else L300(result5);
  L338():
    sym22 = ldf seq_along;
    base22 = ldf seq_along in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L339() else L340();
  L387():
    file_remove = ldf `file.remove`;
    check L406() else D132();
  D123():
    deopt 462 [i247, result24];
  D132():
    deopt 497 [];
  L44(i79, i80, dx55):
    st outputsI = dx55;
    sym13 = ldf inherits;
    base13 = ldf inherits in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L245() else L246();
  L75():
    x4 = `[[`(s4, i171, NULL, TRUE);
    st i = x4;
    result8 = ld result;
    check L303() else D94();
  L80(r291):
    s6 = toForSeq(r291);
    l45 = length(s6);
    i204 = 0;
    goto L81(i204);
  L190(i30, dx25):
    c19 = `is.object`(dx25);
    if c19 then L194() else L195(i30, dx25);
  L191():
    dr18 = tryDispatchBuiltin.1("$", vigns27);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L193() else L192(i22, dr18);
  L192(i28, vigns29):
    r75 = `$`(vigns29, <sym encodings>);
    goto L190(i28, r75);
  L241():
    dr40 = tryDispatchBuiltin.1("[[", resultsT5);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L243() else L242(i66, i68, dr40);
  L242(i75, i76, resultsT7):
    i81 = ld i;
    check L244() else D67();
  L298(dx63):
    r247 = seq_along(dx63);
    goto L64(r247);
  L299():
    dr48 = tryDispatchBuiltin.1("$", result5);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L301() else L300(dr48);
  L300(result7):
    r246 = `$`(result7, <sym tangle>);
    goto L298(r246);
  L302():
    goto L76();
  L339():
    result12 = ld result;
    check L341() else D110();
  L340():
    r290 = dyn base22(<lang `$`(result, weave)>);
    goto L80(r290);
  L388():
    result25 = force? result24;
    checkMissing(result25);
    c80 = `is.object`(result25);
    if c80 then L389() else L390(i247, result25);
  L406():
    r358 = dyn file_remove(".check.timestamp");
    check L407() else D133();
  D67():
    deopt 233 [i75, i76, resultsT7, i81];
  D94():
    deopt 339 [i171, result8];
  D110():
    deopt 400 [result12];
  D133():
    deopt 499 [r358];
  L28(i34, dx29):
    st enc = dx29;
    enc = ld enc;
    check L198() else D44();
  L45(i87, i88, r178):
    c37 = `as.logical`(r178);
    if c37 then L249() else L46();
  L81(i205):
    i206 = `+`.1(i205, 1);
    c67 = `<`.1(l45, i206);
    if c67 then L346() else L90();
  L95(i253, dx105):
    st resultsT = dx105;
    lapply = ldf lapply;
    check L393() else D125();
  L193():
    dx24 = getTryDispatchBuiltinValue(dr18);
    goto L190(i22, dx24);
  L194():
    dr20 = tryDispatchBuiltin.1("[", dx25);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L196() else L195(i30, dr20);
  L195(i32, dx27):
    i35 = ld i;
    check L197() else D43();
  L243():
    dx54 = getTryDispatchBuiltinValue(dr40);
    goto L44(i66, i68, dx54);
  L244():
    i82 = force? i81;
    __5 = ldf `[[` in base;
    r176 = dyn __5(resultsT7, i82);
    goto L44(i75, i76, r176);
  L245():
    outputsI = ld outputsI;
    check L247() else D68();
  L246():
    r177 = dyn base13(<sym outputsI>, "error");
    goto L45(i79, i80, r177);
  L301():
    dx62 = getTryDispatchBuiltinValue(dr48);
    goto L298(dx62);
  L303():
    result9 = force? result8;
    checkMissing(result9);
    c49 = `is.object`(result9);
    if c49 then L305() else L306(i171, result9);
  L341():
    result13 = force? result12;
    checkMissing(result13);
    c66 = `is.object`(result13);
    if c66 then L343() else L344(result13);
  L389():
    dr82 = tryDispatchBuiltin.1("[[", result25);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L391() else L390(i247, dr82);
  L390(i251, result27):
    name10 = ld name;
    check L392() else D124();
  L407():
    l63 = ld result;
    class__ = ldf `class<-`;
    check L408() else D134();
  D43():
    deopt 149 [i32, dx27, i35];
  D44():
    deopt 153 [i34, enc];
  D68():
    deopt 239 [i79, i80, outputsI];
  D124():
    deopt 464 [i251, result27, name10];
  D125():
    deopt 469 [i253];
  D134():
    deopt 503 ["checkVignettes", l63, "checkVignettes"];
  L46():
    normalizePath = ldf normalizePath;
    check L252() else D70();
  L90():
    x6 = `[[`(s6, i206, NULL, TRUE);
    st i = x6;
    sym23 = ldf names;
    base23 = ldf names in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L347() else L348();
  L196():
    dx28 = getTryDispatchBuiltinValue(dr20);
    goto L28(i30, dx28);
  L197():
    i36 = force? i35;
    __3 = ldf `[` in base;
    r76 = dyn __3(dx27, i36);
    goto L28(i32, r76);
  L198():
    enc1 = force? enc;
    checkMissing(enc1);
    r77 = `==`(enc1, "non-ASCII");
    c20 = `as.logical`(r77);
    if c20 then L199() else L29();
  L247():
    outputsI1 = force? outputsI;
    checkMissing(outputsI1);
    inherits = ldf inherits in base;
    r179 = dyn inherits(outputsI1, "error", FALSE);
    check L248() else D69();
  L249():
    goto L43(i87, i88);
  L304(i177, dx65):
    c50 = `is.object`(dx65);
    if c50 then L308() else L309(i177, dx65);
  L305():
    dr50 = tryDispatchBuiltin.1("$", result9);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L307() else L306(i171, dr50);
  L306(i175, result11):
    r248 = `$`(result11, <sym tangle>);
    goto L304(i175, r248);
  L342(dx83):
    r293 = seq_along(dx83);
    goto L80(r293);
  L343():
    dr64 = tryDispatchBuiltin.1("$", result13);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L345() else L344(dr64);
  L344(result15):
    r292 = `$`(result15, <sym weave>);
    goto L342(r292);
  L346():
    goto L91(i206);
  L391():
    dx104 = getTryDispatchBuiltinValue(dr82);
    goto L95(i247, dx104);
  L392():
    name11 = force? name10;
    __13 = ldf `[[` in base;
    r347 = dyn __13(result27, name11);
    goto L95(i251, r347);
  L393():
    p69 = prom<V +>{
      resultsT18 = ld resultsT;
      resultsT19 = force? resultsT18;
      checkMissing(resultsT19);
      return resultsT19;
    };
    p70 = prom<V +>{
      r349 = clos inner1061701020;
      return r349;
    };
    r351 = dyn lapply[, FUN](p69, p70);
    check L394() else D126();
  L408():
    r359 = dyn class__(l63, NULL, "checkVignettes");
    check L409() else D135();
  D69():
    deopt 244 [i79, i80, r179];
  D70():
    deopt 250 [i87, i88];
  D126():
    deopt 473 [i253, r351];
  D135():
    deopt 505 ["checkVignettes", r359];
  L29():
    goto L30(i34);
  L30(i39):
    tangle1 = ld tangle;
    check L203() else D47();
  L66(i181, dx69):
    st sources = dx69;
    sym21 = ldf inherits;
    base21 = ldf inherits in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L312() else L313();
  L82(i211, r295):
    c69 = `is.object`(r295);
    if c69 then L355() else L356(i211, r295);
  L199():
    stop2 = ldf stop;
    check L200() else D45();
  L248():
    goto L45(i79, i80, r179);
  L252():
    p36 = prom<V +>{
      outputsI2 = ld outputsI;
      outputsI3 = force? outputsI2;
      checkMissing(outputsI3);
      return outputsI3;
    };
    r182 = dyn normalizePath(p36);
    check L253() else D71();
  L307():
    dx64 = getTryDispatchBuiltinValue(dr50);
    goto L304(i171, dx64);
  L308():
    dr52 = tryDispatchBuiltin.1("[[", dx65);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L310() else L309(i177, dr52);
  L309(i179, dx67):
    i182 = ld i;
    check L311() else D95();
  L345():
    dx82 = getTryDispatchBuiltinValue(dr64);
    goto L342(dx82);
  L347():
    result16 = ld result;
    check L349() else D111();
  L348():
    r294 = dyn base23(<lang `$`(result, weave)>);
    goto L82(i206, r294);
  L394():
    st resultsT = r351;
    resultsT20 = ld resultsT;
    check L395() else D127();
  L409():
    st result = r359;
    result28 = ld result;
    check L410() else D136();
  D45():
    deopt 158 [i34];
  D47():
    deopt 165 [i39, tangle1];
  D71():
    deopt 252 [i87, i88, r182];
  D95():
    deopt 342 [i179, dx67, i182];
  D111():
    deopt 406 [i206, result16];
  D127():
    deopt 475 [i253, resultsT20];
  D136():
    deopt 507 [result28];
  L67(i186, r251):
    c51 = `as.logical`(r251);
    if c51 then L316() else L68();
  L83(i219, dx87):
    st file = dx87;
    result20 = ld result;
    check L359() else D114();
  L200():
    p15 = prom<V +>{
      gettextf1 = ldf gettextf;
      p14 = prom<V +>{
        name = ld name;
        name1 = force? name;
        checkMissing(name1);
        return name1;
      };
      r79 = dyn gettextf1("Vignette '%s' is non-ASCII but has no declared encoding", p14);
      return r79;
    };
    r81 = dyn stop2[, domain](p15, NA_LGL);
    check L201() else D46();
  L203():
    tangle2 = force? tangle1;
    checkMissing(tangle2);
    c21 = `as.logical`(tangle2);
    if c21 then L204() else L31();
  L253():
    st outputsI = r182;
    i97 = ld i;
    check L254() else D72();
  L310():
    dx68 = getTryDispatchBuiltinValue(dr52);
    goto L66(i177, dx68);
  L311():
    i183 = force? i182;
    __9 = ldf `[[` in base;
    r249 = dyn __9(dx67, i183);
    goto L66(i179, r249);
  L312():
    sources = ld sources;
    check L314() else D96();
  L313():
    r250 = dyn base21(<sym sources>, "error");
    goto L67(i181, r250);
  L349():
    result17 = force? result16;
    checkMissing(result17);
    c68 = `is.object`(result17);
    if c68 then L351() else L352(i206, result17);
  L355():
    dr68 = tryDispatchBuiltin.1("[", r295);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L357() else L356(i211, dr68);
  L356(i217, r299):
    i220 = ld i;
    check L358() else D113();
  L395():
    resultsT21 = force? resultsT20;
    checkMissing(resultsT21);
    c81 = `is.object`(resultsT21);
    if c81 then L396() else L397(i253, resultsT21);
  L410():
    result29 = force? result28;
    checkMissing(result29);
    popenv;
    return result29;
  D46():
    deopt 162 [i34, r81];
  D72():
    deopt 254 [i87, i88, i97];
  D96():
    deopt 348 [i181, sources];
  D113():
    deopt 411 [i217, r299, i220];
  D114():
    deopt 415 [i219, result20];
  L31():
    goto L32(i39);
  L32(i42):
    weave1 = ld weave;
    check L210() else D52();
  L68():
    sources2 = ld sources;
    check L319() else D98();
  L96(i257, dx107):
    st resultsT = dx107;
    resultsT26 = ld resultsT;
    check L401() else D130();
  L201():
    goto L30(i34);
  L204():
    message = ldf message;
    check L205() else D48();
  L254():
    i98 = force? i97;
    checkMissing(i98);
    r183 = `+`(i98, 1);
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L255() else L256();
  L314():
    sources1 = force? sources;
    checkMissing(sources1);
    inherits2 = ldf inherits in base;
    r252 = dyn inherits2(sources1, "error", FALSE);
    check L315() else D97();
  L316():
    goto L65(i186);
  L350(i215, dx85):
    names2 = ldf names in base;
    r297 = dyn names2(dx85);
    check L354() else D112();
  L351():
    dr66 = tryDispatchBuiltin.1("$", result17);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L353() else L352(i206, dr66);
  L352(i213, result19):
    r296 = `$`(result19, <sym weave>);
    goto L350(i213, r296);
  L357():
    dx86 = getTryDispatchBuiltinValue(dr68);
    goto L83(i211, dx86);
  L358():
    i221 = force? i220;
    __11 = ldf `[` in base;
    r300 = dyn __11(r299, i221);
    goto L83(i217, r300);
  L359():
    result21 = force? result20;
    checkMissing(result21);
    c70 = `is.object`(result21);
    if c70 then L361() else L362(i219, result21);
  L396():
    dr84 = tryDispatchBuiltin.1("[", resultsT21);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L398() else L397(i253, dr84);
  L397(i255, resultsT23):
    vapply = ldf vapply;
    check L399() else D128();
  D48():
    deopt 168 [i39];
  D52():
    deopt 178 [i42, weave1];
  D97():
    deopt 353 [i181, r252];
  D98():
    deopt 358 [i186, sources2];
  D112():
    deopt 410 [i215, r297];
  D128():
    deopt 478 [i255, resultsT23];
  D130():
    deopt 486 [i257, resultsT26];
  L48(i103, i104, r187, r188):
    r190 = `:`(r187, r188);
    s3 = toForSeq(r190);
    l29 = length(s3);
    i105 = 0;
    goto L49(i103, i104, i105);
  L205():
    p17 = prom<V +>{
      sQuote1 = ldf sQuote;
      p16 = prom<V +>{
        file = ld file;
        file1 = force? file;
        checkMissing(file1);
        return file1;
      };
      r84 = dyn sQuote1(p16);
      return r84;
    };
    r86 = dyn message("  Running ", p17);
    check L206() else D49();
  L210():
    weave2 = force? weave1;
    checkMissing(weave2);
    c26 = `as.logical`(weave2);
    if c26 then L211() else L33();
  L255():
    resultsT8 = ld resultsT;
    check L257() else D73();
  L256():
    r186 = dyn base14(<sym resultsT>);
    goto L48(i87, i88, r183, r186);
  L315():
    goto L67(i181, r252);
  L319():
    sources3 = force? sources2;
    checkMissing(sources3);
    c52 = `is.object`(sources3);
    if c52 then L320() else L321(i186, sources3);
  L353():
    dx84 = getTryDispatchBuiltinValue(dr66);
    goto L350(i206, dx84);
  L354():
    goto L82(i215, r297);
  L360(i225, dx89):
    c71 = `is.object`(dx89);
    if c71 then L364() else L365(i225, dx89);
  L361():
    dr70 = tryDispatchBuiltin.1("$", result21);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L363() else L362(i219, dr70);
  L362(i223, result23):
    r301 = `$`(result23, <sym weave>);
    goto L360(i223, r301);
  L398():
    dx106 = getTryDispatchBuiltinValue(dr84);
    goto L96(i253, dx106);
  L399():
    p71 = prom<V +>{
      resultsT24 = ld resultsT;
      resultsT25 = force? resultsT24;
      checkMissing(resultsT25);
      return resultsT25;
    };
    p72 = prom<V +>{
      is_null = ld `is.null`;
      is_null1 = force? is_null;
      checkMissing(is_null1);
      return is_null1;
    };
    r354 = dyn vapply(p71, p72, NA_LGL);
    check L400() else D129();
  L401():
    resultsT27 = force? resultsT26;
    checkMissing(resultsT27);
    l60 = ld result;
    c82 = `is.object`(l60);
    if c82 then L402() else L403(i257, resultsT27, l60);
  D49():
    deopt 171 [i39, r86];
  D73():
    deopt 259 [i87, i88, r183, resultsT8];
  D129():
    deopt 482 [i255, resultsT23, r354];
  L33():
    goto L34(i42);
  L34(i45):
    setwd5 = ldf setwd;
    check L217() else D57();
  L49(i106, i107, i108):
    i109 = `+`.1(i108, 1);
    c38 = `<`.1(l29, i109);
    if c38 then L259() else L57();
  L70(i194, dx71):
    st sources = dx71;
    sources8 = ld sources;
    check L325() else D101();
  L84(i229, dx93):
    st output = dx93;
    sym24 = ldf inherits;
    base24 = ldf inherits in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L368() else L369();
  L97(i261, dx109):
    st result = dx109;
    goto L94(i261);
  L206():
    _eval_with_capture = ldf `.eval_with_capture`;
    check L207() else D50();
  L211():
    setwd3 = ldf setwd;
    check L212() else D53();
  L257():
    resultsT9 = force? resultsT8;
    checkMissing(resultsT9);
    length2 = ldf length in base;
    r189 = dyn length2(resultsT9);
    check L258() else D74();
  L320():
    dr54 = tryDispatchBuiltin.1("[", sources3);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L322() else L321(i186, dr54);
  L321(i192, sources5):
    file_test = ldf file_test;
    check L323() else D99();
  L363():
    dx88 = getTryDispatchBuiltinValue(dr70);
    goto L360(i219, dx88);
  L364():
    dr72 = tryDispatchBuiltin.1("[[", dx89);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L366() else L365(i225, dr72);
  L365(i227, dx91):
    i230 = ld i;
    check L367() else D115();
  L400():
    r355 = `!`(r354);
    __14 = ldf `[` in base;
    r356 = dyn __14(resultsT23, r355);
    goto L96(i255, r356);
  L402():
    dr86 = tryDispatchBuiltin.0("[[<-", l60, resultsT27);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L404() else L403(i257, resultsT27, dr86);
  L403(i259, resultsT29, l62):
    name12 = ld name;
    check L405() else D131();
  D50():
    deopt 173 [i39];
  D53():
    deopt 181 [i42];
  D57():
    deopt 191 [i45];
  D74():
    deopt 262 [i87, i88, r183, r189];
  D99():
    deopt 361 [i192, sources5];
  D101():
    deopt 368 [i194, sources8];
  D115():
    deopt 418 [i227, dx91, i230];
  D131():
    deopt 489 [i259, resultsT29, l62, resultsT27, name12];
  L57():
    x3 = `[[`(s3, i109, NULL, TRUE);
    st j = x3;
    resultsT10 = ld resultsT;
    check L260() else D75();
  L85(i234, r304):
    c72 = `as.logical`(r304);
    if c72 then L372() else L86();
  L207():
    p25 = prom<V +>{
      tryCatch = ldf tryCatch;
      p23 = prom<V +>{
        engine = ld engine;
        engine1 = force? engine;
        checkMissing(engine1);
        c22 = `is.object`(engine1);
        if c22 then L1() else L2(engine1);
      L0(dx31):
        checkFun.0(dx31);
        dx32 = dx31 as cls;
        p18 = prom<V +>{
          path2 = ld path;
          path3 = force? path2;
          checkMissing(path3);
          return path3;
        };
        p19 = prom<V +>{
          enc2 = ld enc;
          enc3 = force? enc2;
          checkMissing(enc3);
          return enc3;
        };
        dyn dx32[, quiet, encoding](p18, TRUE, p19);
        setwd2 = ldf setwd;
        p20 = prom<V +>{
          startdir = ld startdir;
          startdir1 = force? startdir;
          checkMissing(startdir1);
          return startdir1;
        };
        dyn setwd2(p20);
        find_vignette_product = ldf find_vignette_product;
        p21 = prom<V +>{
          name2 = ld name;
          name3 = force? name2;
          checkMissing(name3);
          return name3;
        };
        p22 = prom<V +>{
          engine4 = ld engine;
          engine5 = force? engine4;
          checkMissing(engine5);
          return engine5;
        };
        r95 = dyn find_vignette_product[, by, main, engine](p21, "tangle", FALSE, p22);
        return r95;
      L1():
        dr22 = tryDispatchBuiltin.1("$", engine1);
        dc11 = getTryDispatchBuiltinDispatched(dr22);
        if dc11 then L3() else L2(dr22);
      L2(engine3):
        r87 = `$`(engine3, <sym tangle>);
        goto L0(r87);
      L3():
        dx30 = getTryDispatchBuiltinValue(dr22);
        goto L0(dx30);
      };
      p24 = prom<V +>{
        identity = ld identity;
        identity1 = force? identity;
        checkMissing(identity1);
        return identity1;
      };
      r98 = dyn tryCatch[, error](p23, p24);
      l1 = ld result;
      c23 = `is.object`(l1);
      if c23 then L2() else L3(r98, l1, r98, l1);
    L1(r105, l7, r106, dx34):
      c24 = `is.object`(dx34);
      if c24 then L5() else L6(r105, l7, dx34);
    L2():
      dr24 = tryDispatchBuiltin.1("$", l1);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L4() else L3(r98, l1, r98, dr24);
    L3(r101, l4, r102, l5):
      r107 = `$`(l5, <sym tangle>);
      goto L1(r101, l4, r102, r107);
    L0(r111, l11, dx38):
      c25 = `is.object`(l11);
      if c25 then L9() else L10(r111, l11);
    L4():
      dx33 = getTryDispatchBuiltinValue(dr24);
      goto L1(r98, l1, r98, dx33);
    L5():
      dr26 = tryDispatchBuiltin.0("[[<-", dx34, r106);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L7() else L6(r105, l7, dr26);
    L6(r109, l9, dx36):
      file2 = ld file;
      file3 = force? file2;
      ____ = ldf `[[<-` in base;
      r112 = dyn ____(dx36, r106, file3);
      goto L0(r109, l9, r112);
    L7():
      dx37 = getTryDispatchBuiltinValue(dr26);
      goto L0(r105, l7, dx37);
    L8(r116, dx40):
      st result = dx40;
      invisible.0();
      return r116;
    L9():
      dr28 = tryDispatchBuiltin.0("$<-", l11, dx38);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L11() else L10(r111, dr28);
    L10(r114, l13):
      r117 = `$<-`(l13, <sym tangle>, dx38);
      goto L8(r114, r117);
    L11():
      dx39 = getTryDispatchBuiltinValue(dr28);
      goto L8(r111, dx39);
    };
    r119 = dyn _eval_with_capture(p25);
    check L208() else D51();
  L212():
    p26 = prom<V +>{
      startdir2 = ld startdir;
      startdir3 = force? startdir2;
      checkMissing(startdir3);
      return startdir3;
    };
    r122 = dyn setwd3(p26);
    check L213() else D54();
  L217():
    p35 = prom<V +>{
      startdir6 = ld startdir;
      startdir7 = force? startdir6;
      checkMissing(startdir7);
      return startdir7;
    };
    r158 = dyn setwd5(p35);
    check L218() else D58();
  L258():
    goto L48(i87, i88, r183, r189);
  L259():
    goto L43(i106, i107);
  L322():
    dx70 = getTryDispatchBuiltinValue(dr54);
    goto L70(i186, dx70);
  L323():
    p52 = prom<V +>{
      sources6 = ld sources;
      sources7 = force? sources6;
      checkMissing(sources7);
      return sources7;
    };
    r255 = dyn file_test("-nt", p52, ".check.timestamp");
    check L324() else D100();
  L325():
    sources9 = force? sources8;
    checkMissing(sources9);
    s5 = toForSeq(sources9);
    l31 = length(s5);
    i195 = 0;
    goto L73(i194, i195);
  L366():
    dx92 = getTryDispatchBuiltinValue(dr72);
    goto L84(i225, dx92);
  L367():
    i231 = force? i230;
    __12 = ldf `[[` in base;
    r302 = dyn __12(dx91, i231);
    goto L84(i227, r302);
  L368():
    output = ld output;
    check L370() else D116();
  L369():
    r303 = dyn base24(<sym output>, "error");
    goto L85(i229, r303);
  L404():
    dx108 = getTryDispatchBuiltinValue(dr86);
    goto L97(i257, dx108);
  L405():
    name13 = force? name12;
    ____4 = ldf `[[<-` in base;
    r357 = dyn ____4(l62, resultsT27, name13);
    goto L97(i259, r357);
  D51():
    deopt 175 [i39, r119];
  D54():
    deopt 183 [i42, r122];
  D58():
    deopt 193 [i45, r158];
  D75():
    deopt 264 [i106, i107, i109, resultsT10];
  D100():
    deopt 365 [i192, sources5, r255];
  D116():
    deopt 424 [i229, output];
  L73(i196, i197):
    i198 = `+`.1(i197, 1);
    c53 = `<`.1(l31, i198);
    if c53 then L72() else L74();
  L86():
    vignette_is_tex = ldf vignette_is_tex;
    check L375() else D118();
  L208():
    goto L32(i39);
  L213():
    _eval_with_capture1 = ldf `.eval_with_capture`;
    check L214() else D55();
  L218():
    goto L25(i45);
  L260():
    resultsT11 = force? resultsT10;
    checkMissing(resultsT11);
    c39 = `is.object`(resultsT11);
    if c39 then L261() else L262(i106, i107, i109, resultsT11);
  L324():
    __10 = ldf `[` in base;
    r256 = dyn __10(sources5, r255);
    goto L70(i192, r256);
  L370():
    output1 = force? output;
    checkMissing(output1);
    inherits3 = ldf inherits in base;
    r305 = dyn inherits3(output1, "error", FALSE);
    check L371() else D117();
  L372():
    goto L81(i234);
  D55():
    deopt 185 [i42];
  D117():
    deopt 429 [i229, r305];
  D118():
    deopt 435 [i234];
  L50(i125, i126, i127, dx57):
    st outputsJ = dx57;
    sym15 = ldf inherits;
    base15 = ldf inherits in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L265() else L266();
  L72():
    goto L65(i196);
  L74():
    x5 = `[[`(s5, i198, NULL, TRUE);
    st file = x5;
    _eval_with_capture2 = ldf `.eval_with_capture`;
    check L326() else D102();
  L214():
    p34 = prom<V +>{
      tryCatch1 = ldf tryCatch;
      p32 = prom<V +>{
        engine6 = ld engine;
        engine7 = force? engine6;
        checkMissing(engine7);
        c27 = `is.object`(engine7);
        if c27 then L1() else L2(engine7);
      L0(dx42):
        checkFun.0(dx42);
        dx43 = dx42 as cls;
        p27 = prom<V +>{
          path4 = ld path;
          path5 = force? path4;
          checkMissing(path5);
          return path5;
        };
        p28 = prom<V +>{
          enc4 = ld enc;
          enc5 = force? enc4;
          checkMissing(enc5);
          return enc5;
        };
        dyn dx43[, quiet, encoding](p27, TRUE, p28);
        setwd4 = ldf setwd;
        p29 = prom<V +>{
          startdir4 = ld startdir;
          startdir5 = force? startdir4;
          checkMissing(startdir5);
          return startdir5;
        };
        dyn setwd4(p29);
        find_vignette_product1 = ldf find_vignette_product;
        p30 = prom<V +>{
          name4 = ld name;
          name5 = force? name4;
          checkMissing(name5);
          return name5;
        };
        p31 = prom<V +>{
          engine10 = ld engine;
          engine11 = force? engine10;
          checkMissing(engine11);
          return engine11;
        };
        r131 = dyn find_vignette_product1[, by, engine](p30, "weave", p31);
        return r131;
      L1():
        dr30 = tryDispatchBuiltin.1("$", engine7);
        dc15 = getTryDispatchBuiltinDispatched(dr30);
        if dc15 then L3() else L2(dr30);
      L2(engine9):
        r123 = `$`(engine9, <sym weave>);
        goto L0(r123);
      L3():
        dx41 = getTryDispatchBuiltinValue(dr30);
        goto L0(dx41);
      };
      p33 = prom<V +>{
        identity2 = ld identity;
        identity3 = force? identity2;
        checkMissing(identity3);
        return identity3;
      };
      r134 = dyn tryCatch1[, error](p32, p33);
      l14 = ld result;
      c28 = `is.object`(l14);
      if c28 then L2() else L3(r134, l14, r134, l14);
    L1(r141, l20, r142, dx45):
      c29 = `is.object`(dx45);
      if c29 then L5() else L6(r141, l20, dx45);
    L2():
      dr32 = tryDispatchBuiltin.1("$", l14);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L4() else L3(r134, l14, r134, dr32);
    L3(r137, l17, r138, l18):
      r143 = `$`(l18, <sym weave>);
      goto L1(r137, l17, r138, r143);
    L0(r147, l24, dx49):
      c30 = `is.object`(l24);
      if c30 then L9() else L10(r147, l24);
    L4():
      dx44 = getTryDispatchBuiltinValue(dr32);
      goto L1(r134, l14, r134, dx44);
    L5():
      dr34 = tryDispatchBuiltin.0("[[<-", dx45, r142);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L7() else L6(r141, l20, dr34);
    L6(r145, l22, dx47):
      file4 = ld file;
      file5 = force? file4;
      ____1 = ldf `[[<-` in base;
      r148 = dyn ____1(dx47, r142, file5);
      goto L0(r145, l22, r148);
    L7():
      dx48 = getTryDispatchBuiltinValue(dr34);
      goto L0(r141, l20, dx48);
    L8(r152, dx51):
      st result = dx51;
      invisible.0();
      return r152;
    L9():
      dr36 = tryDispatchBuiltin.0("$<-", l24, dx49);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L11() else L10(r147, dr36);
    L10(r150, l26):
      r153 = `$<-`(l26, <sym weave>, dx49);
      goto L8(r150, r153);
    L11():
      dx50 = getTryDispatchBuiltinValue(dr36);
      goto L8(r147, dx50);
    };
    r155 = dyn _eval_with_capture1(p34);
    check L215() else D56();
  L261():
    dr42 = tryDispatchBuiltin.1("[[", resultsT11);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L263() else L262(i106, i107, i109, dr42);
  L262(i119, i120, i121, resultsT13):
    j = ld j;
    check L264() else D76();
  L371():
    goto L85(i229, r305);
  L375():
    p60 = prom<V +>{
      output2 = ld output;
      output3 = force? output2;
      checkMissing(output3);
      return output3;
    };
    r308 = dyn vignette_is_tex(p60);
    check L376() else D119();
  D56():
    deopt 187 [i42, r155];
  D76():
    deopt 266 [i119, i120, i121, resultsT13, j];
  D102():
    deopt 373 [i196, i198];
  D119():
    deopt 437 [i234, r308];
  L51(i134, i135, i136, r193):
    c40 = `as.logical`(r193);
    if c40 then L269() else L52();
  L215():
    goto L34(i42);
  L263():
    dx56 = getTryDispatchBuiltinValue(dr42);
    goto L50(i106, i107, i109, dx56);
  L264():
    j1 = force? j;
    __6 = ldf `[[` in base;
    r191 = dyn __6(resultsT13, j1);
    goto L50(i119, i120, i121, r191);
  L265():
    outputsJ = ld outputsJ;
    check L267() else D77();
  L266():
    r192 = dyn base15(<sym outputsJ>, "error");
    goto L51(i125, i126, i127, r192);
  L326():
    p56 = prom<V +>{
      tryCatch2 = ldf tryCatch;
      p54 = prom<V +>{
        source = ldf source;
        p53 = prom<V +>{
          file6 = ld file;
          file7 = force? file6;
          checkMissing(file7);
          return file7;
        };
        r258 = dyn source(p53);
        return r258;
      };
      p55 = prom<V +>{
        identity4 = ld identity;
        identity5 = force? identity4;
        checkMissing(identity5);
        return identity5;
      };
      r261 = dyn tryCatch2[, error](p54, p55);
      l32 = ld result;
      c54 = `is.object`(l32);
      if c54 then L2() else L3(r261, l32, r261, l32);
    L1(r268, l38, r269, dx73):
      c55 = `is.object`(dx73);
      if c55 then L5() else L6(r268, l38, dx73);
    L2():
      dr56 = tryDispatchBuiltin.1("$", l32);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L4() else L3(r261, l32, r261, dr56);
    L3(r264, l35, r265, l36):
      r270 = `$`(l36, <sym source>);
      goto L1(r264, l35, r265, r270);
    L0(r274, l42, dx77):
      c56 = `is.object`(l42);
      if c56 then L9() else L10(r274, l42);
    L4():
      dx72 = getTryDispatchBuiltinValue(dr56);
      goto L1(r261, l32, r261, dx72);
    L5():
      dr58 = tryDispatchBuiltin.0("[[<-", dx73, r269);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L7() else L6(r268, l38, dr58);
    L6(r272, l40, dx75):
      file8 = ld file;
      file9 = force? file8;
      ____2 = ldf `[[<-` in base;
      r275 = dyn ____2(dx75, r269, file9);
      goto L0(r272, l40, r275);
    L7():
      dx76 = getTryDispatchBuiltinValue(dr58);
      goto L0(r268, l38, dx76);
    L8(r279, dx79):
      st result = dx79;
      invisible.0();
      return r279;
    L9():
      dr60 = tryDispatchBuiltin.0("$<-", l42, dx77);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L11() else L10(r274, dr60);
    L10(r277, l44):
      r280 = `$<-`(l44, <sym source>, dx77);
      goto L8(r277, r280);
    L11():
      dx78 = getTryDispatchBuiltinValue(dr60);
      goto L8(r274, dx78);
    };
    r282 = dyn _eval_with_capture2(p56);
    check L327() else D103();
  L376():
    r309 = `!`(r308);
    c73 = `as.logical`(r309);
    if c73 then L377() else L88();
  D77():
    deopt 272 [i125, i126, i127, outputsJ];
  D103():
    deopt 375 [i196, i198, r282];
  L52():
    normalizePath1 = ldf normalizePath;
    check L272() else D79();
  L88():
    _eval_with_capture3 = ldf `.eval_with_capture`;
    check L380() else D120();
  L267():
    outputsJ1 = force? outputsJ;
    checkMissing(outputsJ1);
    inherits1 = ldf inherits in base;
    r194 = dyn inherits1(outputsJ1, "error", FALSE);
    check L268() else D78();
  L269():
    goto L49(i134, i135, i136);
  L327():
    setwd6 = ldf setwd;
    check L328() else D104();
  L377():
    goto L81(i234);
  D78():
    deopt 277 [i125, i126, i127, r194];
  D79():
    deopt 283 [i134, i135, i136];
  D104():
    deopt 377 [i196, i198];
  D120():
    deopt 444 [i234];
  L268():
    goto L51(i125, i126, i127, r194);
  L272():
    p37 = prom<V +>{
      outputsJ2 = ld outputsJ;
      outputsJ3 = force? outputsJ2;
      checkMissing(outputsJ3);
      return outputsJ3;
    };
    r197 = dyn normalizePath1(p37);
    check L273() else D80();
  L328():
    p57 = prom<V +>{
      startdir8 = ld startdir;
      startdir9 = force? startdir8;
      checkMissing(startdir9);
      return startdir9;
    };
    r284 = dyn setwd6(p57);
    check L329() else D105();
  L380():
    p68 = prom<V +>{
      tryCatch3 = ldf tryCatch;
      p66 = prom<V +>{
        texi2pdf = ldf texi2pdf;
        p61 = prom<V +>{
          output4 = ld output;
          output5 = force? output4;
          checkMissing(output5);
          return output5;
        };
        p62 = prom<V +>{
          vigns34 = ld vigns;
          vigns35 = force? vigns34;
          checkMissing(vigns35);
          c74 = `is.object`(vigns35);
          if c74 then L1() else L2(vigns35);
        L0(dx95):
          return dx95;
        L1():
          dr74 = tryDispatchBuiltin.1("$", vigns35);
          dc37 = getTryDispatchBuiltinDispatched(dr74);
          if dc37 then L3() else L2(dr74);
        L2(vigns37):
          r312 = `$`(vigns37, <sym dir>);
          goto L0(r312);
        L3():
          dx94 = getTryDispatchBuiltinValue(dr74);
          goto L0(dx94);
        };
        dyn texi2pdf[file, clean, quiet, texinputs](p61, FALSE, TRUE, p62);
        find_vignette_product2 = ldf find_vignette_product;
        p64 = prom<V +>{
          file_path_sans_ext = ldf file_path_sans_ext;
          p63 = prom<V +>{
            output6 = ld output;
            output7 = force? output6;
            checkMissing(output7);
            return output7;
          };
          r316 = dyn file_path_sans_ext(p63);
          return r316;
        };
        p65 = prom<V +>{
          engine12 = ld engine;
          engine13 = force? engine12;
          checkMissing(engine13);
          return engine13;
        };
        r319 = dyn find_vignette_product2[, by, engine](p64, "texi2pdf", p65);
        return r319;
      };
      p67 = prom<V +>{
        identity6 = ld identity;
        identity7 = force? identity6;
        checkMissing(identity7);
        return identity7;
      };
      r322 = dyn tryCatch3[, error](p66, p67);
      l46 = ld result;
      c75 = `is.object`(l46);
      if c75 then L2() else L3(r322, l46, r322, l46);
    L1(r329, l52, r330, dx97):
      c76 = `is.object`(dx97);
      if c76 then L5() else L6(r329, l52, dx97);
    L2():
      dr76 = tryDispatchBuiltin.1("$", l46);
      dc38 = getTryDispatchBuiltinDispatched(dr76);
      if dc38 then L4() else L3(r322, l46, r322, dr76);
    L3(r325, l49, r326, l50):
      r331 = `$`(l50, <sym latex>);
      goto L1(r325, l49, r326, r331);
    L0(r335, l56, dx101):
      c77 = `is.object`(l56);
      if c77 then L9() else L10(r335, l56);
    L4():
      dx96 = getTryDispatchBuiltinValue(dr76);
      goto L1(r322, l46, r322, dx96);
    L5():
      dr78 = tryDispatchBuiltin.0("[[<-", dx97, r330);
      dc39 = getTryDispatchBuiltinDispatched(dr78);
      if dc39 then L7() else L6(r329, l52, dr78);
    L6(r333, l54, dx99):
      file10 = ld file;
      file11 = force? file10;
      ____3 = ldf `[[<-` in base;
      r336 = dyn ____3(dx99, r330, file11);
      goto L0(r333, l54, r336);
    L7():
      dx100 = getTryDispatchBuiltinValue(dr78);
      goto L0(r329, l52, dx100);
    L8(r340, dx103):
      st result = dx103;
      invisible.0();
      return r340;
    L9():
      dr80 = tryDispatchBuiltin.0("$<-", l56, dx101);
      dc40 = getTryDispatchBuiltinDispatched(dr80);
      if dc40 then L11() else L10(r335, dr80);
    L10(r338, l58):
      r341 = `$<-`(l58, <sym latex>, dx101);
      goto L8(r338, r341);
    L11():
      dx102 = getTryDispatchBuiltinValue(dr80);
      goto L8(r335, dx102);
    };
    r343 = dyn _eval_with_capture3(p68);
    check L381() else D121();
  D80():
    deopt 285 [i134, i135, i136, r197];
  D105():
    deopt 379 [i196, i198, r284];
  D121():
    deopt 446 [i234, r343];
  L273():
    st outputsJ = r197;
    intersect = ldf intersect;
    check L274() else D81();
  L329():
    goto L73(i196, i198);
  L381():
    goto L81(i234);
  D81():
    deopt 288 [i134, i135, i136];
  L274():
    p38 = prom<V +>{
      outputsJ4 = ld outputsJ;
      outputsJ5 = force? outputsJ4;
      checkMissing(outputsJ5);
      return outputsJ5;
    };
    p39 = prom<V +>{
      outputsI4 = ld outputsI;
      outputsI5 = force? outputsI4;
      checkMissing(outputsI5);
      return outputsI5;
    };
    r200 = dyn intersect(p38, p39);
    check L275() else D82();
  D82():
    deopt 291 [i134, i135, i136, r200];
  L275():
    st bad = r200;
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L276() else L277();
  L54(i155, i156, i157, r202):
    r204 = `>`(r202, 0);
    c41 = `as.logical`(r204);
    if c41 then L280() else L55();
  L276():
    bad = ld bad;
    check L278() else D83();
  L277():
    r201 = dyn base16(<sym bad>);
    goto L54(i134, i135, i136, r201);
  D83():
    deopt 295 [i134, i135, i136, bad];
  L55():
    goto L56(i155, i156, i157);
  L56(i166, i167, i168):
    goto L49(i166, i167, i168);
  L278():
    bad1 = force? bad;
    checkMissing(bad1);
    length3 = ldf length in base;
    r203 = dyn length3(bad1);
    check L279() else D84();
  L280():
    stop3 = ldf stop;
    check L281() else D85();
  D84():
    deopt 298 [i134, i135, i136, r203];
  D85():
    deopt 302 [i155, i156, i157];
  L279():
    goto L54(i134, i135, i136, r203);
  L281():
    p51 = prom<V +>{
      gettextf2 = ldf gettextf;
      p42 = prom<V +>{
        sQuote2 = ldf sQuote;
        p41 = prom<V +>{
          basename1 = ldf basename;
          p40 = prom<V +>{
            sym17 = ldf names;
            base17 = ldf names in base;
            guard17 = `==`.4(sym17, base17);
            if guard17 then L2() else L3();
          L0(r206):
            c42 = `is.object`(r206);
            if c42 then L4() else L5(r206);
          L2():
            resultsT14 = ld resultsT;
            resultsT15 = force? resultsT14;
            checkMissing(resultsT15);
            names = ldf names in base;
            r207 = dyn names(resultsT15);
            goto L0(r207);
          L3():
            r205 = dyn base17(<sym resultsT>);
            goto L0(r205);
          L1(dx59):
            return dx59;
          L4():
            dr44 = tryDispatchBuiltin.1("[", r206);
            dc22 = getTryDispatchBuiltinDispatched(dr44);
            if dc22 then L6() else L5(dr44);
          L5(r209):
            j2 = ld j;
            j3 = force? j2;
            __7 = ldf `[` in base;
            r210 = dyn __7(r209, j3);
            goto L1(r210);
          L6():
            dx58 = getTryDispatchBuiltinValue(dr44);
            goto L1(dx58);
          };
          r212 = dyn basename1(p40);
          return r212;
        };
        r214 = dyn sQuote2(p41);
        return r214;
      };
      p44 = prom<V +>{
        sQuote3 = ldf sQuote;
        p43 = prom<V +>{
          name8 = ld name;
          name9 = force? name8;
          checkMissing(name9);
          return name9;
        };
        r217 = dyn sQuote3(p43);
        return r217;
      };
      p47 = prom<V +>{
        sQuote4 = ldf sQuote;
        p46 = prom<V +>{
          basename2 = ldf basename;
          p45 = prom<V +>{
            sym18 = ldf names;
            base18 = ldf names in base;
            guard18 = `==`.4(sym18, base18);
            if guard18 then L2() else L3();
          L0(r220):
            c43 = `is.object`(r220);
            if c43 then L4() else L5(r220);
          L2():
            resultsT16 = ld resultsT;
            resultsT17 = force? resultsT16;
            checkMissing(resultsT17);
            names1 = ldf names in base;
            r221 = dyn names1(resultsT17);
            goto L0(r221);
          L3():
            r219 = dyn base18(<sym resultsT>);
            goto L0(r219);
          L1(dx61):
            return dx61;
          L4():
            dr46 = tryDispatchBuiltin.1("[", r220);
            dc23 = getTryDispatchBuiltinDispatched(dr46);
            if dc23 then L6() else L5(dr46);
          L5(r223):
            i164 = ld i;
            i165 = force? i164;
            __8 = ldf `[` in base;
            r224 = dyn __8(r223, i165);
            goto L1(r224);
          L6():
            dx60 = getTryDispatchBuiltinValue(dr46);
            goto L1(dx60);
          };
          r226 = dyn basename2(p45);
          return r226;
        };
        r228 = dyn sQuote4(p46);
        return r228;
      };
      p50 = prom<V +>{
        paste = ldf paste;
        p49 = prom<V +>{
          basename3 = ldf basename;
          p48 = prom<V +>{
            bad2 = ld bad;
            bad3 = force? bad2;
            checkMissing(bad3);
            return bad3;
          };
          r231 = dyn basename3(p48);
          return r231;
        };
        r233 = dyn paste[, collapse](p49, ", ");
        return r233;
      };
      r235 = dyn gettextf2("Vignette %s overwrites the following %s output by vignette %s: %s", p42, p44, p47, p50);
      return r235;
    };
    r237 = dyn stop3[, domain](p51, NA_LGL);
    check L282() else D86();
  D86():
    deopt 306 [i155, i156, i157, r237];
  L282():
    goto L56(i155, i156, i157);
  }
}
fun inner1061701020(res) {
  (reg res:*) -+> V { var res:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg res1:*, reg res2:V, reg inherits:cls, reg r2:V, reg c:L, reg conditionMessage:cls, reg res3:*, reg res4:V, reg p:p(V +), reg r4:V |
    mkenv;
    st res = res;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `as.logical`(r1);
    if c then L6() else L1();
  L2():
    res1 = ld res;
    check L4() else D0();
  L3():
    r = dyn base(<sym res>, "error");
    goto L0(r);
  D0():
    deopt 2 [res1];
  L1():
    popenv;
    return NULL;
  L4():
    res2 = force? res1;
    checkMissing(res2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(res2, "error", FALSE);
    check L5() else D1();
  L6():
    conditionMessage = ldf conditionMessage;
    check L7() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 9 [];
  L5():
    goto L0(r2);
  L7():
    p = prom<V +>{
      res3 = ld res;
      res4 = force? res3;
      checkMissing(res4);
      return res4;
    };
    r4 = dyn conditionMessage(p);
    check L8() else D3();
  D3():
    deopt 11 [r4];
  L8():
    popenv;
    return r4;
  }
}