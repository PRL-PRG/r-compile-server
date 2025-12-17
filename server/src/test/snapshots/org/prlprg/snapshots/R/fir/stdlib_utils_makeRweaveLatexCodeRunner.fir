fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner766145540;
    st makeRweaveLatexCodeRunner = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner766145540(evalFunc) {
  (reg evalFunc:*) -+> V { var evalFunc:*, reg evalFunc_isMissing:L, reg evalFunc_orDefault:*, reg RweaveEvalWithOpt:*, reg RweaveEvalWithOpt1:V, reg p:p(V +), reg r1:cls |
    mkenv;
    evalFunc_isMissing = missing.0(evalFunc);
    if evalFunc_isMissing then L0() else L1(evalFunc);
  L0():
    p = prom<V +>{
      RweaveEvalWithOpt = ld RweaveEvalWithOpt;
      RweaveEvalWithOpt1 = force? RweaveEvalWithOpt;
      checkMissing(RweaveEvalWithOpt1);
      return RweaveEvalWithOpt1;
    };
    goto L1(p);
  L1(evalFunc_orDefault):
    st evalFunc = evalFunc_orDefault;
    r1 = clos inner2027988528;
    popenv;
    return r1;
  }
}
fun inner2027988528(object, chunk, options) {
  (reg object:*, reg chunk:*, reg options:*) -+> V { var object:*, var chunk:*, var options:*, reg r:cls, reg r1:cls, reg r2:cls, reg r3:cls, reg _in_:cls, reg options1:*, reg options2:V, reg c:L, reg options4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg r11:V, reg c2:L, reg object1:*, reg object2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg list:cls, reg r16:V, reg options5:*, reg options6:V, reg c3:L, reg options8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r17:V, reg c4:L, reg c6:V, reg options9:*, reg options10:V, reg c7:L, reg c9:L, reg options12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c11:L, reg dx5:V, reg r18:V, reg c12:L, reg c13:V, reg c15:L, reg options13:*, reg options14:V, reg c16:L, reg options16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r19:V, reg c17:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg devs:*, reg devs1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg pdf_Swd:*, reg pdf_Swd1:V, reg list1:cls, reg r24:V, reg c18:cls, reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg devoffs:*, reg devoffs1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg __:cls, reg r30:V, reg list2:cls, reg r31:V, reg c19:cls, reg r32:V, reg options17:*, reg options18:V, reg c20:L, reg options20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r34:V, reg c21:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg devs2:*, reg devs3:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg eps_Swd:*, reg eps_Swd1:V, reg list3:cls, reg r39:V, reg c22:cls, reg r40:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r41:V, reg r42:V, reg devoffs2:*, reg devoffs3:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg r44:V, reg __1:cls, reg r45:V, reg list4:cls, reg r46:V, reg c23:cls, reg r47:V, reg options21:*, reg options22:V, reg c24:L, reg options24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r49:V, reg c25:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r50:V, reg r51:V, reg devs4:*, reg devs5:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r52:V, reg r53:V, reg png_Swd:*, reg png_Swd1:V, reg list5:cls, reg r54:V, reg c26:cls, reg r55:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r56:V, reg r57:V, reg devoffs4:*, reg devoffs5:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r58:V, reg r59:V, reg __2:cls, reg r60:V, reg list6:cls, reg r61:V, reg c27:cls, reg r62:V, reg options25:*, reg options26:V, reg c28:L, reg options28:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r64:V, reg c29:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r65:V, reg r66:V, reg devs6:*, reg devs7:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r67:V, reg r68:V, reg jpeg_Swd:*, reg jpeg_Swd1:V, reg list7:cls, reg r69:V, reg c30:cls, reg r70:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r71:V, reg r72:V, reg devoffs6:*, reg devoffs7:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r73:V, reg r74:V, reg __3:cls, reg r75:V, reg list8:cls, reg r76:V, reg c31:cls, reg r77:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r79:V, reg r80:V, reg options29:*, reg options30:V, reg c32:L, reg options32:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r81:V, reg nzchar:cls, reg r82:V, reg c33:L, reg paste0:cls, reg grd:*, reg grd1:V, reg p2:p(V +), reg r84:V, reg grepl:cls, reg grd2:*, reg grd3:V, reg p3:p(V +), reg r86:V, reg c34:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r87:V, reg r88:V, reg devs8:*, reg devs9:V, reg eval:cls, reg str2expression:cls, reg grd4:*, reg grd5:V, reg p4:p(V +), reg r90:V, reg p5:p(V +), reg r92:V, reg c35:cls, reg r93:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r94:V, reg r95:V, reg devoffs8:*, reg devoffs9:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r96:V, reg r97:V, reg tryCatch:cls, reg eval1:cls, reg str2expression1:cls, reg grdo:*, reg grdo1:V, reg p6:p(V +), reg r99:V, reg p7:p(V +), reg r101:V, reg p8:p(V +), reg identity:*, reg identity1:V, reg p9:p(V +), reg r104:V, reg inherits:cls, reg r105:V, reg r106:V, reg c36:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r107:V, reg r108:V, reg grdo2:*, reg grdo3:V, reg list9:cls, reg r109:V, reg r110:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r111:V, reg __4:cls, reg r112:V, reg list10:cls, reg r113:V, reg c37:cls, reg r114:V, reg r115:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r116:V, reg r117:V, reg devs10:*, reg devs11:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r118:V, reg r119:V, reg get:cls, reg grd6:*, reg grd7:V, reg p10:p(V +), reg _GlobalEnv:*, reg _GlobalEnv1:V, reg p11:p(V +), reg r122:V, reg list11:cls, reg r123:V, reg c38:cls, reg r124:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r125:V, reg r126:V, reg devoffs10:*, reg devoffs11:V, reg exists:cls, reg grdo4:*, reg grdo5:V, reg p12:p(V +), reg _GlobalEnv2:*, reg _GlobalEnv3:V, reg p13:p(V +), reg r129:V, reg c39:L, reg sym27:cls, reg base27:cls, reg guard27:L, reg r130:V, reg r131:V, reg get1:cls, reg grdo6:*, reg grdo7:V, reg p14:p(V +), reg _GlobalEnv4:*, reg _GlobalEnv5:V, reg p15:p(V +), reg r134:V, reg list12:cls, reg r135:V, reg r136:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r137:V, reg __5:cls, reg r138:V, reg list13:cls, reg r139:V, reg c40:cls, reg r140:V, reg r141:V, reg object3:*, reg object4:V, reg c41:L, reg object6:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r143:V, reg r144:V, reg c42:L, reg cat:cls, reg formatC:cls, reg options33:*, reg options34:V, reg c43:L, reg options36:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r145:V, reg p16:p(V +), reg r147:V, reg p17:p(V +), reg r149:V, reg options37:*, reg options38:V, reg c44:L, reg options40:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r150:V, reg c45:L, reg cat1:cls, reg r151:V, reg options41:*, reg options42:V, reg c46:L, reg options44:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r153:V, reg c47:L, reg cat2:cls, reg r154:V, reg options45:*, reg options46:V, reg c48:L, reg options48:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg r156:V, reg c49:L, reg options49:*, reg options50:V, reg c50:L, reg options52:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg r157:V, reg c51:L, reg cat3:cls, reg r158:V, reg options53:*, reg options54:V, reg c52:L, reg options56:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg r160:V, reg c53:L, reg cat4:cls, reg r161:V, reg cat5:cls, reg options57:*, reg options58:V, reg c54:L, reg options60:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg r163:V, reg p18:p(V +), reg r165:V, reg options61:*, reg options62:V, reg c55:L, reg options64:V, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg r166:V, reg c56:L, reg options65:*, reg options66:V, reg c57:L, reg options68:V, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg r167:V, reg c58:L, reg cat6:cls, reg r168:V, reg options69:*, reg options70:V, reg c59:L, reg options72:V, reg dr36:V, reg dc18:L, reg dx36:V, reg dx37:V, reg r170:V, reg c60:L, reg cat7:cls, reg r171:V, reg options73:*, reg options74:V, reg c61:L, reg options76:V, reg dr38:V, reg dc19:L, reg dx38:V, reg dx39:V, reg r173:V, reg c62:L, reg cat8:cls, reg r174:V, reg options77:*, reg options78:V, reg c63:L, reg options80:V, reg dr40:V, reg dc20:L, reg dx40:V, reg dx41:V, reg r176:V, reg c64:L, reg cat9:cls, reg r177:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r179:V, reg r180:V, reg options81:*, reg options82:V, reg c65:L, reg options84:V, reg dr42:V, reg dc21:L, reg dx42:V, reg dx43:V, reg r181:V, reg c66:V, reg r182:V, reg c67:L, reg cat10:cls, reg options85:*, reg options86:V, reg c68:L, reg options88:V, reg dr44:V, reg dc22:L, reg dx44:V, reg dx45:V, reg r183:V, reg p19:p(V +), reg r185:V, reg r186:V, reg r187:V, reg cat11:cls, reg r189:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r190:V, reg r191:V, reg options89:*, reg options90:V, reg c69:L, reg options92:V, reg dr46:V, reg dc23:L, reg dx46:V, reg dx47:V, reg r192:V, reg c70:V, reg r193:V, reg c71:L, reg cat12:cls, reg options93:*, reg options94:V, reg c72:L, reg options96:V, reg dr48:V, reg dc24:L, reg dx48:V, reg dx49:V, reg r194:V, reg p20:p(V +), reg r196:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r198:V, reg r199:V, reg chunk1:*, reg chunk2:V, reg attr:cls, reg r200:V, reg c73:L, reg r202:V, reg dr50:V, reg dc25:L, reg dx50:V, reg dx51:V, reg __6:cls, reg r203:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r204:V, reg r205:V, reg chunk3:*, reg chunk4:V, reg attr1:cls, reg r206:V, reg c74:L, reg r208:V, reg dr52:V, reg dc26:L, reg dx52:V, reg dx53:V, reg filenum:*, reg filenum1:V, reg __7:cls, reg r209:V, reg cat13:cls, reg basename:cls, reg filename:*, reg filename1:V, reg p21:p(V +), reg r211:V, reg p22:p(V +), reg sym33:cls, reg base33:cls, reg guard33:L, reg r213:V, reg r214:V, reg chunk5:*, reg chunk6:V, reg attr2:cls, reg r215:V, reg c75:L, reg r217:V, reg dr54:V, reg dc27:L, reg dx54:V, reg dx55:V, reg __8:cls, reg r218:V, reg p23:p(V +), reg r220:V, reg cat14:cls, reg r221:V, reg RweaveChunkPrefix:cls, reg options97:*, reg options98:V, reg p24:p(V +), reg r224:V, reg options99:*, reg options100:V, reg c76:L, reg options102:V, reg dr56:V, reg dc28:L, reg dx56:V, reg dx57:V, reg r225:V, reg c77:L, reg object7:*, reg object8:V, reg c78:L, reg object10:V, reg dr58:V, reg dc29:L, reg dx58:V, reg dx59:V, reg r226:V, reg c79:L, reg dx61:V, reg dr60:V, reg dc30:L, reg dx62:V, reg dx63:V, reg chunkprefix:*, reg chunkprefix1:V, reg __9:cls, reg r227:V, reg c80:L, reg dx65:V, reg dr62:V, reg dc31:L, reg dx66:V, reg dx67:V, reg __10:cls, reg r228:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r229:V, reg r230:V, reg chunkout:*, reg chunkout1:V, reg c81:V, reg c82:L, reg file:cls, reg paste1:cls, reg chunkprefix2:*, reg chunkprefix3:V, reg p25:p(V +), reg r232:V, reg p26:p(V +), reg r234:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r235:V, reg r236:V, reg options103:*, reg options104:V, reg c83:L, reg options106:V, reg dr64:V, reg dc32:L, reg dx68:V, reg dx69:V, reg r237:V, reg c84:V, reg r238:V, reg c85:L, reg chunkout2:*, reg chunkout3:V, reg l:*, reg c86:L, reg chunkout6:V, reg l3:*, reg chunkout7:V, reg l4:*, reg dr66:V, reg dc33:L, reg dx70:V, reg chunkout10:V, reg l6:*, reg chunkout11:V, reg dx71:V, reg r239:V, reg c87:L, reg chunkout13:V, reg l8:*, reg dx73:V, reg dr68:V, reg dc34:L, reg dx74:V, reg chunkout15:V, reg l10:*, reg dx75:V, reg chunkprefix4:*, reg chunkprefix5:V, reg ____:cls, reg r240:V, reg c88:L, reg chunkout17:V, reg l12:*, reg dr70:V, reg dc35:L, reg dx76:V, reg chunkout19:V, reg dx77:V, reg r241:V, reg grepl1:cls, reg _SweaveValidFilenameRegexp:*, reg _SweaveValidFilenameRegexp1:V, reg p27:p(V +), reg chunkout21:*, reg chunkout22:V, reg p28:p(V +), reg r244:V, reg r245:V, reg c89:L, reg warning:cls, reg sQuote:cls, reg chunkout23:*, reg chunkout24:V, reg p29:p(V +), reg r247:V, reg p30:p(V +), reg r249:V, reg r250:V, reg r251:V, reg object11:*, reg object12:V, reg c90:L, reg object14:V, reg dr72:V, reg dc36:L, reg dx78:V, reg dx79:V, reg r253:V, reg srcfilecopy:cls, reg object15:*, reg object16:V, reg c91:L, reg object18:V, reg dr74:V, reg dc37:L, reg dx80:V, reg dx81:V, reg r254:V, reg p31:p(V +), reg chunk7:*, reg chunk8:V, reg p32:p(V +), reg r257:V, reg try:cls, reg parse:cls, reg chunk9:*, reg chunk10:V, reg p33:p(V +), reg srcfile:*, reg srcfile1:V, reg p34:p(V +), reg r260:V, reg p35:p(V +), reg r262:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r263:V, reg r264:V, reg chunkexps:*, reg chunkexps1:V, reg inherits1:cls, reg r265:V, reg c92:L, reg sub:cls, reg chunkexps2:*, reg chunkexps3:V, reg c93:L, reg chunkexps5:V, reg dr76:V, reg dc38:L, reg dx82:V, reg dx83:V, reg __11:cls, reg r266:V, reg p36:p(V +), reg r268:V, reg l13:*, reg c94:L, reg r270:V, reg l15:*, reg dr78:V, reg dc39:L, reg dx84:V, reg r272:V, reg dx85:V, reg ___:cls, reg r273:V, reg RweaveTryStop:cls, reg chunkexps6:*, reg chunkexps7:V, reg p37:p(V +), reg options107:*, reg options108:V, reg p38:p(V +), reg r277:V, reg r278:cls, reg r279:cls, reg r280:cls, reg sym37:cls, reg base37:cls, reg guard37:L, reg r281:V, reg r282:V, reg chunk11:*, reg chunk12:V, reg attr3:cls, reg r283:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r284:V, reg r285:V, reg chunk13:*, reg chunk14:V, reg attr4:cls, reg r286:V, reg integer:cls, reg r287:V, reg integer1:cls, reg r288:V, reg srclines:*, reg srclines1:V, reg c95:L, reg srclines3:V, reg dr80:V, reg dc40:L, reg dx86:V, reg dx87:V, reg __12:cls, reg r289:V, reg srcfilenums:*, reg srcfilenums1:V, reg c96:L, reg srcfilenums3:V, reg dr82:V, reg dc41:L, reg dx88:V, reg dx89:V, reg __13:cls, reg r290:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r291:V, reg r292:V, reg chunkexps8:*, reg chunkexps9:V, reg attr5:cls, reg r293:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r294:V, reg r295:V, reg devs12:*, reg devs13:V, reg length:cls, reg r296:V, reg c97:L, reg grepl2:cls, reg _SweaveValidFilenameRegexp2:*, reg _SweaveValidFilenameRegexp3:V, reg p39:p(V +), reg chunkprefix6:*, reg chunkprefix7:V, reg p40:p(V +), reg r299:V, reg r300:V, reg c98:L, reg warning1:cls, reg sQuote1:cls, reg chunkprefix8:*, reg chunkprefix9:V, reg p41:p(V +), reg r302:V, reg p42:p(V +), reg r304:V, reg options109:*, reg options110:V, reg c99:L, reg options112:V, reg dr84:V, reg dc42:L, reg dx90:V, reg dx91:V, reg r306:V, reg c100:L, reg devs14:*, reg devs15:V, reg c101:L, reg devs17:V, reg dr86:V, reg dc43:L, reg dx92:V, reg dx93:V, reg __14:cls, reg r307:V, reg dx94:cls, reg chunkprefix10:*, reg chunkprefix11:V, reg p43:p(V +), reg options113:*, reg options114:V, reg c102:L, reg options116:V, reg dr88:V, reg dc44:L, reg dx95:V, reg dx96:V, reg r309:V, reg p44:p(V +), reg options117:*, reg options118:V, reg c103:L, reg options120:V, reg dr90:V, reg dc45:L, reg dx97:V, reg dx98:V, reg r311:V, reg p45:p(V +), reg options121:*, reg options122:V, reg p46:p(V +), reg r314:V, reg r315:V, reg SweaveHooks:cls, reg options123:*, reg options124:V, reg p47:p(V +), reg r318:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r319:V, reg r320:V, reg chunkexps10:*, reg chunkexps11:V, reg r321:I, reg s:V, reg l16:I, reg i:I, reg i1:I, reg i2:I, reg c104:L, reg x:V, reg chunkexps12:*, reg chunkexps13:V, reg c105:L, reg i6:I, reg chunkexps15:V, reg dr92:V, reg dc46:L, reg dx99:V, reg i8:I, reg dx100:V, reg nce:*, reg nce1:V, reg __15:cls, reg r322:V, reg options125:*, reg options126:V, reg c106:L, reg i10:I, reg options128:V, reg dr94:V, reg dc47:L, reg dx101:V, reg i12:I, reg dx102:V, reg r323:V, reg c107:L, reg i14:I, reg c109:V, reg nce2:*, reg nce3:V, reg sym42:cls, reg base42:cls, reg guard42:L, reg r324:V, reg i17:I, reg c112:L, reg nce6:V, reg r325:V, reg srcrefs:*, reg srcrefs1:V, reg length1:cls, reg r326:V, reg r327:V, reg c113:L, reg c114:V, reg c116:L, reg i20:I, reg c118:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r328:V, reg i23:I, reg c121:L, reg r329:V, reg srcrefs2:*, reg srcrefs3:V, reg c122:L, reg i25:I, reg c124:L, reg srcrefs5:V, reg dr96:V, reg dc48:L, reg dx103:V, reg i27:I, reg c126:L, reg dx104:V, reg nce7:*, reg nce8:V, reg __16:cls, reg r330:V, reg c127:V, reg r331:V, reg c128:L, reg c129:V, reg c131:L, reg srcref:*, reg srcref1:V, reg c132:L, reg i32:I, reg srcref3:V, reg dr98:V, reg dc49:L, reg dx105:V, reg i34:I, reg dx106:V, reg __17:cls, reg r332:V, reg srcref4:*, reg srcref5:V, reg c133:L, reg i36:I, reg srcref7:V, reg dr100:V, reg dc50:L, reg dx107:V, reg i38:I, reg dx108:V, reg __18:cls, reg r333:V, reg trySrcLines:cls, reg srcfile2:*, reg srcfile3:V, reg p48:p(V +), reg lastshown:*, reg lastshown1:V, reg r335:V, reg p49:p(V +), reg showto:*, reg showto1:V, reg p50:p(V +), reg ce:*, reg ce1:V, reg p51:p(V +), reg r339:V, reg showfrom:*, reg showfrom1:V, reg lastshown2:*, reg lastshown3:V, reg r340:V, reg showto2:*, reg showto3:V, reg srcref8:*, reg srcref9:V, reg c134:L, reg i40:I, reg srcref11:V, reg dr102:V, reg dc51:L, reg dx109:V, reg i42:I, reg dx110:V, reg __19:cls, reg r341:V, reg startsWith:cls, reg dce:*, reg dce1:V, reg p52:p(V +), reg r343:V, reg dce2:*, reg dce3:V, reg c135:L, reg i44:I, reg dce5:V, reg dr104:V, reg dc52:L, reg dx111:V, reg i46:I, reg dx112:V, reg linedirs:*, reg linedirs1:V, reg r344:V, reg __20:cls, reg r345:V, reg leading:*, reg leading1:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r346:V, reg i49:I, reg leading4:V, reg r347:V, reg linedirs2:*, reg linedirs3:V, reg c136:L, reg i51:I, reg leading6:V, reg linedirs5:V, reg dr106:V, reg dc53:L, reg dx113:V, reg i53:I, reg leading8:V, reg dx114:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r348:V, reg i56:I, reg leading11:V, reg linedirs8:V, reg r349:V, reg leading12:*, reg leading13:V, reg r350:I, reg __21:cls, reg r351:V, reg sum:cls, reg r352:V, reg r353:V, reg i57:I, reg sym46:cls, reg base46:cls, reg guard46:L, reg r354:V, reg i60:I, reg r355:V, reg dce6:*, reg dce7:V, reg length2:cls, reg r356:V, reg c137:L, reg i62:I, reg c139:V, reg sym47:cls, reg base47:cls, reg guard47:L, reg r357:V, reg i65:I, reg c142:L, reg r358:V, reg grep:cls, reg dce8:*, reg dce9:V, reg c143:L, reg dce11:V, reg dr108:V, reg dc54:L, reg dx115:V, reg dx116:V, reg __22:cls, reg r359:V, reg p53:p(V +), reg r361:V, reg length3:cls, reg r362:V, reg c144:L, reg c145:V, reg c147:L, reg dce12:*, reg dce13:V, reg c148:L, reg i70:I, reg dce15:V, reg dr110:V, reg dc55:L, reg dx117:V, reg i72:I, reg dx118:V, reg __23:cls, reg r363:V, reg leading14:*, reg leading15:V, reg r364:V, reg i73:I, reg deparse:cls, reg ce2:*, reg ce3:V, reg p54:p(V +), reg getOption:cls, reg r367:V, reg r368:V, reg p55:p(V +), reg r370:V, reg object19:*, reg object20:V, reg c149:L, reg i75:I, reg object22:V, reg dr112:V, reg dc56:L, reg dx119:V, reg i77:I, reg dx120:V, reg r371:V, reg c150:L, reg cat15:cls, reg paste2:cls, reg dce16:*, reg dce17:V, reg p56:p(V +), reg r373:V, reg p57:p(V +), reg r375:V, reg i80:I, reg options129:*, reg options130:V, reg c151:L, reg i82:I, reg options132:V, reg dr114:V, reg dc57:L, reg dx121:V, reg i84:I, reg dx122:V, reg r377:V, reg c152:L, reg i86:I, reg c154:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r378:V, reg i89:I, reg c157:L, reg r379:V, reg dce18:*, reg dce19:V, reg length4:cls, reg r380:V, reg c158:L, reg c159:V, reg c161:L, reg putSinput:cls, reg dce20:*, reg dce21:V, reg p58:p(V +), reg leading16:*, reg leading17:V, reg p59:p(V +), reg r383:V, reg i93:I, reg options133:*, reg options134:V, reg c162:L, reg i95:I, reg options136:V, reg dr116:V, reg dc58:L, reg dx123:V, reg i97:I, reg dx124:V, reg r385:V, reg c163:L, reg file1:cls, reg r386:V, reg sink:cls, reg tmpcon:*, reg tmpcon1:V, reg p60:p(V +), reg r388:V, reg tryCatch1:cls, reg evalFunc:cls, reg ce4:*, reg ce5:V, reg p61:p(V +), reg options137:*, reg options138:V, reg p62:p(V +), reg r391:V, reg p63:p(V +), reg cat16:cls, reg sink1:cls, reg r394:V, reg p64:p(V +), reg r396:V, reg readLines:cls, reg tmpcon2:*, reg tmpcon3:V, reg p65:p(V +), reg r398:V, reg close:cls, reg tmpcon4:*, reg tmpcon5:V, reg p66:p(V +), reg r400:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r401:V, reg i102:I, reg r402:V, reg output:*, reg output1:V, reg length5:cls, reg r403:V, reg r404:V, reg c164:L, reg i104:I, reg c166:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r405:V, reg i107:I, reg c169:L, reg r406:V, reg output2:*, reg output3:V, reg c170:L, reg i109:I, reg c172:L, reg output5:V, reg dr118:V, reg dc59:L, reg dx125:V, reg i111:I, reg c174:L, reg dx126:V, reg __24:cls, reg r407:V, reg nzchar1:cls, reg r408:V, reg r409:V, reg c175:L, reg c176:V, reg c178:L, reg i115:I, reg RweaveTryStop1:cls, reg err:*, reg err1:V, reg p67:p(V +), reg options139:*, reg options140:V, reg p68:p(V +), reg r413:V, reg i116:I, reg sym51:cls, reg base51:cls, reg guard51:L, reg r415:V, reg i119:I, reg r416:V, reg output6:*, reg output7:V, reg length6:cls, reg r417:V, reg c179:L, reg i121:I, reg c181:V, reg object23:*, reg object24:V, reg c182:L, reg i123:I, reg c184:L, reg object26:V, reg dr120:V, reg dc60:L, reg dx127:V, reg i125:I, reg c186:L, reg dx128:V, reg r418:V, reg c187:L, reg c188:V, reg c190:L, reg cat17:cls, reg paste3:cls, reg output8:*, reg output9:V, reg p69:p(V +), reg r420:V, reg p70:p(V +), reg r422:V, reg i129:I, reg sym52:cls, reg base52:cls, reg guard52:L, reg r424:V, reg i132:I, reg r425:V, reg output10:*, reg output11:V, reg length7:cls, reg r426:V, reg c191:L, reg i134:I, reg c193:V, reg options141:*, reg options142:V, reg c194:L, reg i136:I, reg c196:L, reg options144:V, reg dr122:V, reg dc61:L, reg dx129:V, reg i138:I, reg c198:L, reg dx130:V, reg r427:V, reg r428:V, reg c199:L, reg c200:V, reg c202:L, reg openSinput:*, reg openSinput1:V, reg c203:L, reg cat18:cls, reg chunkout25:*, reg chunkout26:V, reg p71:p(V +), reg r430:V, reg srcline:*, reg srcline1:V, reg l17:*, reg c204:L, reg i145:I, reg srcline3:V, reg l19:*, reg dr124:V, reg dc62:L, reg dx131:V, reg i147:I, reg dx132:V, reg thisline:*, reg thisline1:V, reg r431:V, reg ___1:cls, reg r432:V, reg srcfilenum:*, reg srcfilenum1:V, reg l20:*, reg c205:L, reg i149:I, reg srcfilenum3:V, reg l22:*, reg dr126:V, reg dc63:L, reg dx133:V, reg i151:I, reg dx134:V, reg thisline2:*, reg thisline3:V, reg r433:V, reg ___2:cls, reg r434:V, reg thisline4:*, reg thisline5:V, reg r435:V, reg i152:I, reg options145:*, reg options146:V, reg c206:L, reg i154:I, reg options148:V, reg dr128:V, reg dc64:L, reg dx135:V, reg i156:I, reg dx136:V, reg r437:V, reg r438:V, reg c207:L, reg openSchunk:*, reg openSchunk1:V, reg r439:V, reg c208:L, reg cat19:cls, reg chunkout27:*, reg chunkout28:V, reg p72:p(V +), reg r441:V, reg srcline6:*, reg srcline7:V, reg l23:*, reg c209:L, reg i162:I, reg srcline9:V, reg l25:*, reg dr130:V, reg dc65:L, reg dx137:V, reg i164:I, reg dx138:V, reg thisline6:*, reg thisline7:V, reg r442:V, reg ___3:cls, reg r443:V, reg srcfilenum6:*, reg srcfilenum7:V, reg l26:*, reg c210:L, reg i166:I, reg srcfilenum9:V, reg l28:*, reg dr132:V, reg dc66:L, reg dx139:V, reg i168:I, reg dx140:V, reg thisline8:*, reg thisline9:V, reg r444:V, reg ___4:cls, reg r445:V, reg thisline10:*, reg thisline11:V, reg r446:V, reg i169:I, reg cat20:cls, reg chunkout29:*, reg chunkout30:V, reg p73:p(V +), reg r449:V, reg srcline12:*, reg srcline13:V, reg l29:*, reg c211:L, reg i171:I, reg srcline15:V, reg l31:*, reg dr134:V, reg dc67:L, reg dx141:V, reg i173:I, reg dx142:V, reg thisline12:*, reg thisline13:V, reg r450:V, reg ___5:cls, reg r451:V, reg srcfilenum12:*, reg srcfilenum13:V, reg l32:*, reg c212:L, reg i175:I, reg srcfilenum15:V, reg l34:*, reg dr136:V, reg dc68:L, reg dx143:V, reg i177:I, reg dx144:V, reg thisline14:*, reg thisline15:V, reg r452:V, reg ___6:cls, reg r453:V, reg thisline16:*, reg thisline17:V, reg r454:V, reg i178:I, reg paste4:cls, reg output12:*, reg output13:V, reg p74:p(V +), reg r457:V, reg _in_1:cls, reg options149:*, reg options150:V, reg c213:L, reg options152:V, reg dr138:V, reg dc69:L, reg dx145:V, reg dx146:V, reg r458:V, reg p75:p(V +), reg sym53:cls, reg base53:cls, reg guard53:L, reg r460:V, reg r461:V, reg c214:cls, reg r462:V, reg p76:p(V +), reg r464:V, reg c215:L, reg sub1:cls, reg output14:*, reg output15:V, reg p77:p(V +), reg r466:V, reg sub2:cls, reg output16:*, reg output17:V, reg p78:p(V +), reg r468:V, reg options153:*, reg options154:V, reg c216:L, reg i182:I, reg options156:V, reg dr140:V, reg dc70:L, reg dx147:V, reg i184:I, reg dx148:V, reg r469:V, reg r470:V, reg c217:L, reg sub3:cls, reg output18:*, reg output19:V, reg p79:p(V +), reg r472:V, reg i187:I, reg r473:V, reg i188:I, reg cat21:cls, reg output20:*, reg output21:V, reg p80:p(V +), reg chunkout31:*, reg chunkout32:V, reg p81:p(V +), reg r477:V, reg sym54:cls, reg base54:cls, reg guard54:L, reg r478:V, reg i191:I, reg r479:V, reg strsplit:cls, reg output22:*, reg output23:V, reg p82:p(V +), reg r481:V, reg c218:L, reg i193:I, reg r483:V, reg dr142:V, reg dc71:L, reg dx149:V, reg i195:I, reg dx150:V, reg __25:cls, reg r484:V, reg r485:V, reg sum1:cls, reg r486:V, reg count:*, reg count1:V, reg r487:V, reg c219:L, reg srcline18:*, reg srcline19:V, reg l35:*, reg c220:L, reg i199:I, reg srcline21:V, reg l37:*, reg dr144:V, reg dc72:L, reg dx151:V, reg i201:I, reg dx152:V, reg thisline18:*, reg thisline19:V, reg count2:*, reg count3:V, reg r488:V, reg r489:V, reg ___7:cls, reg r490:V, reg srcfilenum18:*, reg srcfilenum19:V, reg l38:*, reg c221:L, reg i203:I, reg srcfilenum21:V, reg l40:*, reg dr146:V, reg dc73:L, reg dx153:V, reg i205:I, reg dx154:V, reg thisline20:*, reg thisline21:V, reg count4:*, reg count5:V, reg r491:V, reg r492:V, reg ___8:cls, reg r493:V, reg thisline22:*, reg thisline23:V, reg count6:*, reg count7:V, reg r494:V, reg i206:I, reg remove:cls, reg output24:*, reg output25:V, reg p83:p(V +), reg r497:V, reg options157:*, reg options158:V, reg c222:L, reg i208:I, reg options160:V, reg dr148:V, reg dc74:L, reg dx155:V, reg i210:I, reg dx156:V, reg r498:V, reg r499:V, reg c223:L, reg cat22:cls, reg chunkout33:*, reg chunkout34:V, reg p84:p(V +), reg r501:V, reg srcline24:*, reg srcline25:V, reg l41:*, reg c224:L, reg i214:I, reg srcline27:V, reg l43:*, reg dr150:V, reg dc75:L, reg dx157:V, reg i216:I, reg dx158:V, reg thisline24:*, reg thisline25:V, reg r502:V, reg ___9:cls, reg r503:V, reg srcfilenum24:*, reg srcfilenum25:V, reg l44:*, reg c225:L, reg i218:I, reg srcfilenum27:V, reg l46:*, reg dr152:V, reg dc76:L, reg dx159:V, reg i220:I, reg dx160:V, reg thisline26:*, reg thisline27:V, reg r504:V, reg ___10:cls, reg r505:V, reg thisline28:*, reg thisline29:V, reg r506:V, reg i221:I, reg r507:V, reg i222:I, reg options161:*, reg options162:V, reg c226:L, reg options164:V, reg dr154:V, reg dc77:L, reg dx161:V, reg dx162:V, reg r509:V, reg c227:L, reg echoComments:cls, reg sym55:cls, reg base55:cls, reg guard55:L, reg r510:V, reg r511:V, reg srcfile4:*, reg srcfile5:V, reg c228:L, reg srcfile7:V, reg dr156:V, reg dc78:L, reg dx163:V, reg dx164:V, reg r512:V, reg length8:cls, reg r513:V, reg p85:p(V +), reg r515:V, reg openSinput2:*, reg openSinput3:V, reg c229:L, reg cat23:cls, reg chunkout35:*, reg chunkout36:V, reg p86:p(V +), reg r518:V, reg srcline30:*, reg srcline31:V, reg l47:*, reg c230:L, reg srcline33:V, reg l49:*, reg dr158:V, reg dc79:L, reg dx165:V, reg dx166:V, reg thisline30:*, reg thisline31:V, reg r519:V, reg ___11:cls, reg r520:V, reg srcfilenum30:*, reg srcfilenum31:V, reg l50:*, reg c231:L, reg srcfilenum33:V, reg l52:*, reg dr160:V, reg dc80:L, reg dx167:V, reg dx168:V, reg thisline32:*, reg thisline33:V, reg r521:V, reg ___12:cls, reg r522:V, reg thisline34:*, reg thisline35:V, reg r523:V, reg openSchunk2:*, reg openSchunk3:V, reg c232:L, reg cat24:cls, reg chunkout37:*, reg chunkout38:V, reg p87:p(V +), reg r526:V, reg srcline36:*, reg srcline37:V, reg l53:*, reg c233:L, reg srcline39:V, reg l55:*, reg dr162:V, reg dc81:L, reg dx169:V, reg dx170:V, reg thisline36:*, reg thisline37:V, reg r527:V, reg ___13:cls, reg r528:V, reg srcfilenum36:*, reg srcfilenum37:V, reg l56:*, reg c234:L, reg srcfilenum39:V, reg l58:*, reg dr164:V, reg dc82:L, reg dx171:V, reg dx172:V, reg thisline38:*, reg thisline39:V, reg r529:V, reg ___14:cls, reg r530:V, reg thisline40:*, reg thisline41:V, reg r531:V, reg sym56:cls, reg base56:cls, reg guard56:L, reg r533:V, reg r534:V, reg options165:*, reg options166:V, reg c235:L, reg options168:V, reg dr166:V, reg dc83:L, reg dx173:V, reg dx174:V, reg r535:V, reg c236:V, reg c237:L, reg c239:V, reg options169:*, reg options170:V, reg c240:L, reg c242:L, reg options172:V, reg dr168:V, reg dc84:L, reg dx175:V, reg c244:L, reg dx176:V, reg r536:V, reg c245:L, reg c246:V, reg c248:L, reg close1:cls, reg chunkout39:*, reg chunkout40:V, reg p88:p(V +), reg r538:V, reg options173:*, reg options174:V, reg c249:L, reg options176:V, reg dr170:V, reg dc85:L, reg dx177:V, reg dx178:V, reg r540:V, reg c250:L, reg c252:V, reg options177:*, reg options178:V, reg c253:L, reg c255:L, reg options180:V, reg dr172:V, reg dc86:L, reg dx179:V, reg c257:L, reg dx180:V, reg r541:V, reg c258:L, reg c259:V, reg c261:L, reg cat25:cls, reg chunkprefix12:*, reg chunkprefix13:V, reg p89:p(V +), reg object27:*, reg object28:V, reg c262:L, reg object30:V, reg dr174:V, reg dc87:L, reg dx181:V, reg dx182:V, reg r543:V, reg p90:p(V +), reg r545:V, reg srcline42:*, reg srcline43:V, reg l59:*, reg c263:L, reg srcline45:V, reg l61:*, reg dr176:V, reg dc88:L, reg dx183:V, reg dx184:V, reg thisline42:*, reg thisline43:V, reg r546:V, reg ___15:cls, reg r547:V, reg srcfilenum42:*, reg srcfilenum43:V, reg l62:*, reg c264:L, reg srcfilenum45:V, reg l64:*, reg dr178:V, reg dc89:L, reg dx185:V, reg dx186:V, reg thisline44:*, reg thisline45:V, reg r548:V, reg ___16:cls, reg r549:V, reg thisline46:*, reg thisline47:V, reg r550:V, reg sym57:cls, reg base57:cls, reg guard57:L, reg r552:V, reg r553:V, reg devs18:*, reg devs19:V, reg length9:cls, reg r554:V, reg c265:L, reg options181:*, reg options182:V, reg c266:L, reg options184:V, reg dr180:V, reg dc90:L, reg dx187:V, reg dx188:V, reg r555:V, reg c267:L, reg devoffs12:*, reg devoffs13:V, reg c268:L, reg devoffs15:V, reg dr182:V, reg dc91:L, reg dx189:V, reg dx190:V, reg __26:cls, reg r556:V, reg dx191:cls, reg r557:V, reg sym58:cls, reg base58:cls, reg guard58:L, reg r559:V, reg r560:V, reg devs20:*, reg devs21:V, reg r561:I, reg s1:V, reg l65:I, reg i223:I, reg i224:I, reg i225:I, reg c269:L, reg x1:V, reg options185:*, reg options186:V, reg c270:L, reg i229:I, reg options188:V, reg dr184:V, reg dc92:L, reg dx192:V, reg i231:I, reg dx193:V, reg r562:V, reg c271:L, reg i233:I, reg c273:V, reg i234:*, reg i235:V, reg r563:V, reg c274:L, reg c275:V, reg c277:L, reg devs22:*, reg devs23:V, reg c278:L, reg i242:I, reg devs25:V, reg dr186:V, reg dc93:L, reg dx194:V, reg i244:I, reg dx195:V, reg i245:*, reg i246:V, reg __27:cls, reg r565:V, reg dx196:cls, reg chunkprefix14:*, reg chunkprefix15:V, reg p91:p(V +), reg options189:*, reg options190:V, reg c279:L, reg options192:V, reg dr188:V, reg dc94:L, reg dx197:V, reg dx198:V, reg r567:V, reg p92:p(V +), reg options193:*, reg options194:V, reg c280:L, reg options196:V, reg dr190:V, reg dc95:L, reg dx199:V, reg dx200:V, reg r569:V, reg p93:p(V +), reg options197:*, reg options198:V, reg p94:p(V +), reg r572:V, reg tryCatch2:cls, reg SweaveHooks1:cls, reg options199:*, reg options200:V, reg p95:p(V +), reg eval2:cls, reg chunkexps16:*, reg chunkexps17:V, reg p96:p(V +), reg _GlobalEnv6:*, reg _GlobalEnv7:V, reg p97:p(V +), reg r577:V, reg p98:p(V +), reg r579:cls, reg p99:p(V +), reg r581:V, reg devoffs16:*, reg devoffs17:V, reg c281:L, reg i248:I, reg devoffs19:V, reg dr192:V, reg dc96:L, reg dx201:V, reg i250:I, reg dx202:V, reg i251:*, reg i252:V, reg __28:cls, reg r582:V, reg dx203:cls, reg r583:V, reg options201:*, reg options202:V, reg c282:L, reg options204:V, reg dr194:V, reg dc97:L, reg dx204:V, reg dx205:V, reg r584:V, reg c283:L, reg cat26:cls, reg chunkprefix16:*, reg chunkprefix17:V, reg p100:p(V +), reg object31:*, reg object32:V, reg c284:L, reg object34:V, reg dr196:V, reg dc98:L, reg dx206:V, reg dx207:V, reg r586:V, reg p101:p(V +), reg r588:V, reg srcline48:*, reg srcline49:V, reg l66:*, reg c285:L, reg srcline51:V, reg l68:*, reg dr198:V, reg dc99:L, reg dx208:V, reg dx209:V, reg thisline48:*, reg thisline49:V, reg r589:V, reg ___17:cls, reg r590:V, reg srcfilenum48:*, reg srcfilenum49:V, reg l69:*, reg c286:L, reg srcfilenum51:V, reg l71:*, reg dr200:V, reg dc100:L, reg dx210:V, reg dx211:V, reg thisline50:*, reg thisline51:V, reg r591:V, reg ___18:cls, reg r592:V, reg thisline52:*, reg thisline53:V, reg r593:V, reg r594:V, reg sym59:cls, reg base59:cls, reg guard59:L, reg r596:V, reg r597:V, reg object35:*, reg object36:V, reg c287:L, reg object38:V, reg dr202:V, reg dc101:L, reg dx212:V, reg dx213:V, reg r598:V, reg linesout:*, reg linesout1:V, reg c288:cls, reg r599:V, reg l72:*, reg c289:L, reg r601:V, reg l74:*, reg dr204:V, reg dc102:L, reg dx214:V, reg dx215:V, reg r604:V, reg sym60:cls, reg base60:cls, reg guard60:L, reg r605:V, reg r606:V, reg object39:*, reg object40:V, reg c290:L, reg object42:V, reg dr206:V, reg dc103:L, reg dx216:V, reg dx217:V, reg r607:V, reg filenumout:*, reg filenumout1:V, reg c291:cls, reg r608:V, reg l75:*, reg c292:L, reg r610:V, reg l77:*, reg dr208:V, reg dc104:L, reg dx218:V, reg dx219:V, reg r613:V, reg object43:*, reg object44:V |
    mkenv;
    st object = object;
    st chunk = chunk;
    st options = options;
    r = clos inner3658529368;
    st `pdf.Swd` = r;
    r1 = clos inner3658529368;
    st `eps.Swd` = r1;
    r2 = clos inner1726834190;
    st `png.Swd` = r2;
    r3 = clos inner1726834190;
    st `jpeg.Swd` = r3;
    _in_ = ldf `%in%`;
    check L222() else D0();
  D0():
    deopt 13 [];
  L222():
    p = prom<V +>{
      options1 = ld options;
      options2 = force? options1;
      checkMissing(options2);
      c = `is.object`(options2);
      if c then L1() else L2(options2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", options2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(options4):
      r4 = `$`(options4, <sym engine>);
      goto L0(r4);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c1 = ldf c in base;
      r8 = dyn c1("R", "S");
      goto L0(r8);
    L2():
      r6 = dyn base("R", "S");
      goto L0(r6);
    };
    r10 = dyn _in_(p, p1);
    check L223() else D1();
  D1():
    deopt 16 [r10];
  L223():
    r11 = `!`(r10);
    c2 = `as.logical`(r11);
    if c2 then L224() else L0();
  L0():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L228() else L229();
  L224():
    object1 = ld object;
    check L225() else D2();
  D2():
    deopt 18 [object1];
  L2(r15):
    st devoffs = r15;
    st devs = r15;
    options5 = ld options;
    check L231() else D4();
  L225():
    object2 = force? object1;
    checkMissing(object2);
    popenv;
    return object2;
  L228():
    list = ldf list in base;
    r16 = dyn list();
    check L230() else D3();
  L229():
    r14 = dyn base1();
    goto L2(r14);
  D3():
    deopt 26 [r16];
  D4():
    deopt 29 [options5];
  L230():
    goto L2(r16);
  L231():
    options6 = force? options5;
    checkMissing(options6);
    c3 = `is.object`(options6);
    if c3 then L233() else L234(options6);
  L232(dx3):
    c4 = `as.logical`(dx3);
    if c4 then L236() else L3(c4);
  L233():
    dr2 = tryDispatchBuiltin.1("$", options6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L235() else L234(dr2);
  L234(options8):
    r17 = `$`(options8, <sym fig>);
    goto L232(r17);
  L3(c6):
    c15 = `as.logical`(c6);
    if c15 then L243() else L4();
  L235():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L232(dx2);
  L236():
    options9 = ld options;
    check L237() else D5();
  D5():
    deopt 32 [c4, options9];
  L4():
    goto L46();
  L46():
    object3 = ld object;
    check L410() else D81();
  L237():
    options10 = force? options9;
    checkMissing(options10);
    c7 = `is.object`(options10);
    if c7 then L239() else L240(c4, options10);
  L243():
    options13 = ld options;
    check L244() else D6();
  D6():
    deopt 36 [options13];
  D81():
    deopt 293 [object3];
  L238(c11, dx5):
    c12 = `as.logical`(dx5);
    c13 = `&&`(c11, c12);
    goto L3(c13);
  L239():
    dr4 = tryDispatchBuiltin.1("$", options10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L241() else L240(c4, dr4);
  L240(c9, options12):
    r18 = `$`(options12, <sym eval>);
    goto L238(c9, r18);
  L244():
    options14 = force? options13;
    checkMissing(options14);
    c16 = `is.object`(options14);
    if c16 then L246() else L247(options14);
  L410():
    object4 = force? object3;
    checkMissing(object4);
    c41 = `is.object`(object4);
    if c41 then L412() else L413(object4);
  L241():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L238(c4, dx4);
  L245(dx7):
    c17 = `as.logical`(dx7);
    if c17 then L249() else L5();
  L246():
    dr6 = tryDispatchBuiltin.1("$", options14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L248() else L247(dr6);
  L247(options16):
    r19 = `$`(options16, <sym pdf>);
    goto L245(r19);
  L411(dx17):
    r144 = `!`(dx17);
    c42 = `as.logical`(r144);
    if c42 then L415() else L47();
  L412():
    dr16 = tryDispatchBuiltin.1("$", object4);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L414() else L413(dr16);
  L413(object6):
    r143 = `$`(object6, <sym quiet>);
    goto L411(r143);
  L5():
    goto L10();
  L10():
    options17 = ld options;
    check L268() else D16();
  L47():
    goto L78();
  L78():
    RweaveChunkPrefix = ldf RweaveChunkPrefix;
    check L550() else D129();
  L248():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L245(dx6);
  L249():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L250() else L251();
  L414():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L411(dx16);
  L415():
    cat = ldf cat;
    check L416() else D82();
  D16():
    deopt 70 [options17];
  D82():
    deopt 298 [];
  D129():
    deopt 460 [];
  L6(r21):
    st devs = r21;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L258() else L259();
  L250():
    devs = ld devs;
    check L252() else D7();
  L251():
    r20 = dyn base2(<sym devs>, <lang list(pdf.Swd)>);
    goto L6(r20);
  L268():
    options18 = force? options17;
    checkMissing(options18);
    c20 = `is.object`(options18);
    if c20 then L270() else L271(options18);
  L416():
    p17 = prom<V +>{
      formatC = ldf formatC;
      p16 = prom<V +>{
        options33 = ld options;
        options34 = force? options33;
        checkMissing(options34);
        c43 = `is.object`(options34);
        if c43 then L1() else L2(options34);
      L0(dx19):
        return dx19;
      L1():
        dr18 = tryDispatchBuiltin.1("$", options34);
        dc9 = getTryDispatchBuiltinDispatched(dr18);
        if dc9 then L3() else L2(dr18);
      L2(options36):
        r145 = `$`(options36, <sym chunknr>);
        goto L0(r145);
      L3():
        dx18 = getTryDispatchBuiltinValue(dr18);
        goto L0(dx18);
      };
      r147 = dyn formatC[, width](p16, 2.0);
      return r147;
    };
    r149 = dyn cat(p17, ":");
    check L417() else D83();
  L550():
    p24 = prom<V +>{
      options97 = ld options;
      options98 = force? options97;
      checkMissing(options98);
      return options98;
    };
    r224 = dyn RweaveChunkPrefix(p24);
    check L551() else D130();
  D7():
    deopt 41 [devs];
  D83():
    deopt 301 [r149];
  D130():
    deopt 462 [r224];
  L8(r27):
    st devoffs = r27;
    goto L10();
  L252():
    devs1 = force? devs;
    checkMissing(devs1);
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L253() else L254();
  L258():
    devoffs = ld devoffs;
    check L260() else D11();
  L259():
    r26 = dyn base4(<sym devoffs>, <lang list(`::`(grDevices, dev.off))>);
    goto L8(r26);
  L269(dx9):
    c21 = `as.logical`(dx9);
    if c21 then L273() else L11();
  L270():
    dr8 = tryDispatchBuiltin.1("$", options18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L272() else L271(dr8);
  L271(options20):
    r34 = `$`(options20, <sym eps>);
    goto L269(r34);
  L417():
    options37 = ld options;
    check L418() else D84();
  L551():
    st chunkprefix = r224;
    options99 = ld options;
    check L552() else D131();
  D11():
    deopt 54 [devoffs];
  D84():
    deopt 302 [options37];
  D131():
    deopt 464 [options99];
  L7(r23):
    c18 = ldf c in base;
    r25 = dyn c18(devs1, r23);
    check L257() else D10();
  L11():
    goto L16();
  L16():
    options21 = ld options;
    check L292() else D26();
  L253():
    pdf_Swd = ld `pdf.Swd`;
    check L255() else D8();
  L254():
    r22 = dyn base3(<sym pdf.Swd>);
    goto L7(r22);
  L260():
    devoffs1 = force? devoffs;
    checkMissing(devoffs1);
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L261() else L262();
  L272():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L269(dx8);
  L273():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L274() else L275();
  L418():
    options38 = force? options37;
    checkMissing(options38);
    c44 = `is.object`(options38);
    if c44 then L420() else L421(options38);
  L552():
    options100 = force? options99;
    checkMissing(options100);
    c76 = `is.object`(options100);
    if c76 then L554() else L555(options100);
  D8():
    deopt 45 [pdf_Swd];
  D10():
    deopt 50 [r25];
  D26():
    deopt 104 [options21];
  L9(r29):
    c19 = ldf c in base;
    r32 = dyn c19(devoffs1, r29);
    check L266() else D15();
  L12(r36):
    st devs = r36;
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L282() else L283();
  L255():
    pdf_Swd1 = force? pdf_Swd;
    checkMissing(pdf_Swd1);
    list1 = ldf list in base;
    r24 = dyn list1(pdf_Swd1);
    check L256() else D9();
  L257():
    goto L6(r25);
  L261():
    __ = ldf `::`;
    check L263() else D12();
  L262():
    r28 = dyn base5(<lang `::`(grDevices, dev.off)>);
    goto L9(r28);
  L274():
    devs2 = ld devs;
    check L276() else D17();
  L275():
    r35 = dyn base6(<sym devs>, <lang list(eps.Swd)>);
    goto L12(r35);
  L292():
    options22 = force? options21;
    checkMissing(options22);
    c24 = `is.object`(options22);
    if c24 then L294() else L295(options22);
  L419(dx21):
    c45 = `as.logical`(dx21);
    if c45 then L423() else L48();
  L420():
    dr20 = tryDispatchBuiltin.1("$", options38);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L422() else L421(dr20);
  L421(options40):
    r150 = `$`(options40, <sym echo>);
    goto L419(r150);
  L553(dx57):
    c77 = `as.logical`(dx57);
    if c77 then L557() else L79();
  L554():
    dr56 = tryDispatchBuiltin.1("$", options100);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L556() else L555(dr56);
  L555(options102):
    r225 = `$`(options102, <sym split>);
    goto L553(r225);
  D9():
    deopt 48 [r24];
  D12():
    deopt 59 [];
  D15():
    deopt 66 [r32];
  D17():
    deopt 75 [devs2];
  L14(r42):
    st devoffs = r42;
    goto L16();
  L48():
    goto L49();
  L49():
    options41 = ld options;
    check L427() else D87();
  L79():
    object11 = ld object;
    check L606() else D144();
  L91():
    srcfilecopy = ldf srcfilecopy;
    check L611() else D145();
  L256():
    goto L7(r24);
  L263():
    r30 = dyn __("grDevices", "dev.off");
    check L264() else D13();
  L266():
    goto L8(r32);
  L276():
    devs3 = force? devs2;
    checkMissing(devs3);
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L277() else L278();
  L282():
    devoffs2 = ld devoffs;
    check L284() else D21();
  L283():
    r41 = dyn base8(<sym devoffs>, <lang list(`::`(grDevices, dev.off))>);
    goto L14(r41);
  L293(dx11):
    c25 = `as.logical`(dx11);
    if c25 then L297() else L17();
  L294():
    dr10 = tryDispatchBuiltin.1("$", options22);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L296() else L295(dr10);
  L295(options24):
    r49 = `$`(options24, <sym png>);
    goto L293(r49);
  L422():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L419(dx20);
  L423():
    cat1 = ldf cat;
    check L424() else D85();
  L556():
    dx56 = getTryDispatchBuiltinValue(dr56);
    goto L553(dx56);
  L557():
    object7 = ld object;
    check L558() else D132();
  D13():
    deopt 62 [r30];
  D21():
    deopt 88 [devoffs2];
  D85():
    deopt 306 [];
  D87():
    deopt 311 [options41];
  D132():
    deopt 467 [object7];
  D144():
    deopt 526 [object11];
  D145():
    deopt 531 [];
  L13(r38):
    c22 = ldf c in base;
    r40 = dyn c22(devs3, r38);
    check L281() else D20();
  L17():
    goto L22();
  L22():
    options25 = ld options;
    check L316() else D36();
  L264():
    list2 = ldf list in base;
    r31 = dyn list2(r30);
    check L265() else D14();
  L277():
    eps_Swd = ld `eps.Swd`;
    check L279() else D18();
  L278():
    r37 = dyn base7(<sym eps.Swd>);
    goto L13(r37);
  L284():
    devoffs3 = force? devoffs2;
    checkMissing(devoffs3);
    sym9 = ldf list;
    base9 = ldf list in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L285() else L286();
  L296():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L293(dx10);
  L297():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L298() else L299();
  L424():
    r151 = dyn cat1(" echo");
    check L425() else D86();
  L427():
    options42 = force? options41;
    checkMissing(options42);
    c46 = `is.object`(options42);
    if c46 then L429() else L430(options42);
  L558():
    object8 = force? object7;
    checkMissing(object8);
    c78 = `is.object`(object8);
    if c78 then L560() else L561(object8);
  L606():
    object12 = force? object11;
    checkMissing(object12);
    c90 = `is.object`(object12);
    if c90 then L608() else L609(object12);
  L611():
    p31 = prom<V +>{
      object15 = ld object;
      object16 = force? object15;
      checkMissing(object16);
      c91 = `is.object`(object16);
      if c91 then L1() else L2(object16);
    L0(dx81):
      return dx81;
    L1():
      dr74 = tryDispatchBuiltin.1("$", object16);
      dc37 = getTryDispatchBuiltinDispatched(dr74);
      if dc37 then L3() else L2(dr74);
    L2(object18):
      r254 = `$`(object18, <sym filename>);
      goto L0(r254);
    L3():
      dx80 = getTryDispatchBuiltinValue(dr74);
      goto L0(dx80);
    };
    p32 = prom<V +>{
      chunk7 = ld chunk;
      chunk8 = force? chunk7;
      checkMissing(chunk8);
      return chunk8;
    };
    r257 = dyn srcfilecopy[, , isFile](p31, p32, TRUE);
    check L612() else D146();
  D14():
    deopt 64 [r31];
  D18():
    deopt 79 [eps_Swd];
  D20():
    deopt 84 [r40];
  D36():
    deopt 138 [options25];
  D86():
    deopt 308 [r151];
  D146():
    deopt 536 [r257];
  L15(r44):
    c23 = ldf c in base;
    r47 = dyn c23(devoffs3, r44);
    check L290() else D25();
  L18(r51):
    st devs = r51;
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L306() else L307();
  L265():
    goto L9(r31);
  L279():
    eps_Swd1 = force? eps_Swd;
    checkMissing(eps_Swd1);
    list3 = ldf list in base;
    r39 = dyn list3(eps_Swd1);
    check L280() else D19();
  L281():
    goto L12(r40);
  L285():
    __1 = ldf `::`;
    check L287() else D22();
  L286():
    r43 = dyn base9(<lang `::`(grDevices, dev.off)>);
    goto L15(r43);
  L298():
    devs4 = ld devs;
    check L300() else D27();
  L299():
    r50 = dyn base10(<sym devs>, <lang list(png.Swd)>);
    goto L18(r50);
  L316():
    options26 = force? options25;
    checkMissing(options26);
    c28 = `is.object`(options26);
    if c28 then L318() else L319(options26);
  L425():
    goto L49();
  L428(dx23):
    c47 = `as.logical`(dx23);
    if c47 then L432() else L50();
  L429():
    dr22 = tryDispatchBuiltin.1("$", options42);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L431() else L430(dr22);
  L430(options44):
    r153 = `$`(options44, <sym keep.source>);
    goto L428(r153);
  L559(dx59):
    c79 = `is.object`(dx59);
    if c79 then L563() else L564(dx59);
  L560():
    dr58 = tryDispatchBuiltin.1("$", object8);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L562() else L561(dr58);
  L561(object10):
    r226 = `$`(object10, <sym chunkout>);
    goto L559(r226);
  L607(dx79):
    st chunkout = dx79;
    goto L91();
  L608():
    dr72 = tryDispatchBuiltin.1("$", object12);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L610() else L609(dr72);
  L609(object14):
    r253 = `$`(object14, <sym output>);
    goto L607(r253);
  L612():
    st srcfile = r257;
    try = ldf try;
    check L613() else D147();
  D19():
    deopt 82 [r39];
  D22():
    deopt 93 [];
  D25():
    deopt 100 [r47];
  D27():
    deopt 109 [devs4];
  D147():
    deopt 539 [];
  L20(r57):
    st devoffs = r57;
    goto L22();
  L50():
    goto L51();
  L51():
    options45 = ld options;
    check L436() else D90();
  L80(dx63):
    c80 = `is.object`(dx63);
    if c80 then L567() else L568(dx63);
  L280():
    goto L13(r39);
  L287():
    r45 = dyn __1("grDevices", "dev.off");
    check L288() else D23();
  L290():
    goto L14(r47);
  L300():
    devs5 = force? devs4;
    checkMissing(devs5);
    sym11 = ldf list;
    base11 = ldf list in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L301() else L302();
  L306():
    devoffs4 = ld devoffs;
    check L308() else D31();
  L307():
    r56 = dyn base12(<sym devoffs>, <lang list(`::`(grDevices, dev.off))>);
    goto L20(r56);
  L317(dx13):
    c29 = `as.logical`(dx13);
    if c29 then L321() else L23();
  L318():
    dr12 = tryDispatchBuiltin.1("$", options26);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L320() else L319(dr12);
  L319(options28):
    r64 = `$`(options28, <sym jpeg>);
    goto L317(r64);
  L431():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L428(dx22);
  L432():
    cat2 = ldf cat;
    check L433() else D88();
  L562():
    dx58 = getTryDispatchBuiltinValue(dr58);
    goto L559(dx58);
  L563():
    dr60 = tryDispatchBuiltin.1("[", dx59);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L565() else L564(dr60);
  L564(dx61):
    chunkprefix = ld chunkprefix;
    check L566() else D133();
  L610():
    dx78 = getTryDispatchBuiltinValue(dr72);
    goto L607(dx78);
  L613():
    p35 = prom<V +>{
      parse = ldf parse;
      p33 = prom<V +>{
        chunk9 = ld chunk;
        chunk10 = force? chunk9;
        checkMissing(chunk10);
        return chunk10;
      };
      p34 = prom<V +>{
        srcfile = ld srcfile;
        srcfile1 = force? srcfile;
        checkMissing(srcfile1);
        return srcfile1;
      };
      r260 = dyn parse[text, srcfile](p33, p34);
      return r260;
    };
    r262 = dyn try[, silent](p35, TRUE);
    check L614() else D148();
  D23():
    deopt 96 [r45];
  D31():
    deopt 122 [devoffs4];
  D88():
    deopt 315 [];
  D90():
    deopt 320 [options45];
  D133():
    deopt 470 [dx61, chunkprefix];
  D148():
    deopt 543 [r262];
  L19(r53):
    c26 = ldf c in base;
    r55 = dyn c26(devs5, r53);
    check L305() else D30();
  L23():
    goto L28();
  L28():
    sym18 = ldf nzchar;
    base18 = ldf nzchar in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L340() else L341();
  L81(dx67):
    st chunkout = dx67;
    sym34 = ldf `is.null`;
    base34 = ldf `is.null` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L570() else L571();
  L288():
    list4 = ldf list in base;
    r46 = dyn list4(r45);
    check L289() else D24();
  L301():
    png_Swd = ld `png.Swd`;
    check L303() else D28();
  L302():
    r52 = dyn base11(<sym png.Swd>);
    goto L19(r52);
  L308():
    devoffs5 = force? devoffs4;
    checkMissing(devoffs5);
    sym13 = ldf list;
    base13 = ldf list in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L309() else L310();
  L320():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L317(dx12);
  L321():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L322() else L323();
  L433():
    r154 = dyn cat2(" keep.source");
    check L434() else D89();
  L436():
    options46 = force? options45;
    checkMissing(options46);
    c48 = `is.object`(options46);
    if c48 then L438() else L439(options46);
  L565():
    dx62 = getTryDispatchBuiltinValue(dr60);
    goto L80(dx62);
  L566():
    chunkprefix1 = force? chunkprefix;
    __9 = ldf `[` in base;
    r227 = dyn __9(dx61, chunkprefix1);
    goto L80(r227);
  L567():
    dr62 = tryDispatchBuiltin.1("[[", dx63);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L569() else L568(dr62);
  L568(dx65):
    __10 = ldf `[[` in base;
    r228 = dyn __10(dx65, 1);
    goto L81(r228);
  L614():
    st chunkexps = r262;
    sym36 = ldf inherits;
    base36 = ldf inherits in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L615() else L616();
  D24():
    deopt 98 [r46];
  D28():
    deopt 113 [png_Swd];
  D30():
    deopt 118 [r55];
  D89():
    deopt 317 [r154];
  L21(r59):
    c27 = ldf c in base;
    r62 = dyn c27(devoffs5, r59);
    check L314() else D35();
  L24(r66):
    st devs = r66;
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L330() else L331();
  L29(r80):
    c33 = `as.logical`(r80);
    if c33 then L348() else L30();
  L82(r230):
    c82 = `as.logical`(r230);
    if c82 then L573() else L83();
  L92(r264):
    c92 = `as.logical`(r264);
    if c92 then L619() else L93();
  L289():
    goto L15(r46);
  L303():
    png_Swd1 = force? png_Swd;
    checkMissing(png_Swd1);
    list5 = ldf list in base;
    r54 = dyn list5(png_Swd1);
    check L304() else D29();
  L305():
    goto L18(r55);
  L309():
    __2 = ldf `::`;
    check L311() else D32();
  L310():
    r58 = dyn base13(<lang `::`(grDevices, dev.off)>);
    goto L21(r58);
  L322():
    devs6 = ld devs;
    check L324() else D37();
  L323():
    r65 = dyn base14(<sym devs>, <lang list(jpeg.Swd)>);
    goto L24(r65);
  L340():
    options29 = ld options;
    check L342() else D46();
  L341():
    r79 = dyn base18(<lang `<-`(grd, `$`(options, grdevice))>);
    goto L29(r79);
  L434():
    goto L51();
  L437(dx25):
    c49 = `as.logical`(dx25);
    if c49 then L441() else L52();
  L438():
    dr24 = tryDispatchBuiltin.1("$", options46);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L440() else L439(dr24);
  L439(options48):
    r156 = `$`(options48, <sym eval>);
    goto L437(r156);
  L569():
    dx66 = getTryDispatchBuiltinValue(dr62);
    goto L81(dx66);
  L570():
    chunkout = ld chunkout;
    check L572() else D134();
  L571():
    r229 = dyn base34(<sym chunkout>);
    goto L82(r229);
  L615():
    chunkexps = ld chunkexps;
    check L617() else D149();
  L616():
    r263 = dyn base36(<sym chunkexps>, "try-error");
    goto L92(r263);
  D29():
    deopt 116 [r54];
  D32():
    deopt 127 [];
  D35():
    deopt 134 [r62];
  D37():
    deopt 143 [devs6];
  D46():
    deopt 174 [options29];
  D134():
    deopt 478 [chunkout];
  D149():
    deopt 547 [chunkexps];
  L26(r72):
    st devoffs = r72;
    goto L28();
  L30():
    goto L45(NULL);
  L45(r141):
    goto L46();
  L52():
    goto L70();
  L70():
    cat11 = ldf cat;
    check L517() else D115();
  L83():
    goto L90(NULL);
  L90(r251):
    goto L91();
  L93():
    goto L95();
  L95():
    RweaveTryStop = ldf RweaveTryStop;
    check L626() else D153();
  L304():
    goto L19(r54);
  L311():
    r60 = dyn __2("grDevices", "dev.off");
    check L312() else D33();
  L314():
    goto L20(r62);
  L324():
    devs7 = force? devs6;
    checkMissing(devs7);
    sym15 = ldf list;
    base15 = ldf list in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L325() else L326();
  L330():
    devoffs6 = ld devoffs;
    check L332() else D41();
  L331():
    r71 = dyn base16(<sym devoffs>, <lang list(`::`(grDevices, dev.off))>);
    goto L26(r71);
  L342():
    options30 = force? options29;
    checkMissing(options30);
    c32 = `is.object`(options30);
    if c32 then L344() else L345(options30);
  L348():
    paste0 = ldf paste0;
    check L349() else D48();
  L440():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L437(dx24);
  L441():
    options49 = ld options;
    check L442() else D91();
  L572():
    chunkout1 = force? chunkout;
    checkMissing(chunkout1);
    c81 = `==`(chunkout1, NULL);
    goto L82(c81);
  L573():
    file = ldf file;
    check L574() else D135();
  L617():
    chunkexps1 = force? chunkexps;
    checkMissing(chunkexps1);
    inherits1 = ldf inherits in base;
    r265 = dyn inherits1(chunkexps1, "try-error", FALSE);
    check L618() else D150();
  L619():
    sub = ldf sub;
    check L620() else D151();
  D33():
    deopt 130 [r60];
  D41():
    deopt 156 [devoffs6];
  D48():
    deopt 181 [];
  D91():
    deopt 323 [options49];
  D115():
    deopt 403 [];
  D135():
    deopt 482 [];
  D150():
    deopt 552 [r265];
  D151():
    deopt 554 [];
  D153():
    deopt 569 [];
  L25(r68):
    c30 = ldf c in base;
    r70 = dyn c30(devs7, r68);
    check L329() else D40();
  L312():
    list6 = ldf list in base;
    r61 = dyn list6(r60);
    check L313() else D34();
  L325():
    jpeg_Swd = ld `jpeg.Swd`;
    check L327() else D38();
  L326():
    r67 = dyn base15(<sym jpeg.Swd>);
    goto L25(r67);
  L332():
    devoffs7 = force? devoffs6;
    checkMissing(devoffs7);
    sym17 = ldf list;
    base17 = ldf list in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L333() else L334();
  L343(dx15):
    st grd = dx15;
    nzchar = ldf nzchar in base;
    r82 = dyn nzchar(dx15);
    check L347() else D47();
  L344():
    dr14 = tryDispatchBuiltin.1("$", options30);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L346() else L345(dr14);
  L345(options32):
    r81 = `$`(options32, <sym grdevice>);
    goto L343(r81);
  L349():
    p2 = prom<V +>{
      grd = ld grd;
      grd1 = force? grd;
      checkMissing(grd1);
      return grd1;
    };
    r84 = dyn paste0(p2, ".off");
    check L350() else D49();
  L442():
    options50 = force? options49;
    checkMissing(options50);
    c50 = `is.object`(options50);
    if c50 then L444() else L445(options50);
  L517():
    r189 = dyn cat11(" (");
    check L518() else D116();
  L574():
    p26 = prom<V +>{
      paste1 = ldf paste0;
      p25 = prom<V +>{
        chunkprefix2 = ld chunkprefix;
        chunkprefix3 = force? chunkprefix2;
        checkMissing(chunkprefix3);
        return chunkprefix3;
      };
      r232 = dyn paste1(p25, ".tex");
      return r232;
    };
    r234 = dyn file(p26, "w");
    check L575() else D136();
  L618():
    goto L92(r265);
  L620():
    p36 = prom<V +>{
      chunkexps2 = ld chunkexps;
      chunkexps3 = force? chunkexps2;
      checkMissing(chunkexps3);
      c93 = `is.object`(chunkexps3);
      if c93 then L1() else L2(chunkexps3);
    L0(dx83):
      return dx83;
    L1():
      dr76 = tryDispatchBuiltin.1("[", chunkexps3);
      dc38 = getTryDispatchBuiltinDispatched(dr76);
      if dc38 then L3() else L2(dr76);
    L2(chunkexps5):
      __11 = ldf `[` in base;
      r266 = dyn __11(chunkexps5, 1);
      goto L0(r266);
    L3():
      dx82 = getTryDispatchBuiltinValue(dr76);
      goto L0(dx82);
    };
    r268 = dyn sub[, , , fixed](" parse(text = chunk, srcfile = srcfile) : \n ", "", p36, TRUE);
    check L621() else D152();
  L626():
    p37 = prom<V +>{
      chunkexps6 = ld chunkexps;
      chunkexps7 = force? chunkexps6;
      checkMissing(chunkexps7);
      return chunkexps7;
    };
    p38 = prom<V +>{
      options107 = ld options;
      options108 = force? options107;
      checkMissing(options108);
      return options108;
    };
    r277 = dyn RweaveTryStop(p37, p38);
    check L627() else D154();
  D34():
    deopt 132 [r61];
  D38():
    deopt 147 [jpeg_Swd];
  D40():
    deopt 152 [r70];
  D47():
    deopt 179 [r82];
  D49():
    deopt 184 [r84];
  D116():
    deopt 405 [r189];
  D136():
    deopt 485 [r234];
  D152():
    deopt 560 [r268];
  D154():
    deopt 572 [r277];
  L27(r74):
    c31 = ldf c in base;
    r77 = dyn c31(devoffs7, r74);
    check L338() else D45();
  L313():
    goto L21(r61);
  L327():
    jpeg_Swd1 = force? jpeg_Swd;
    checkMissing(jpeg_Swd1);
    list7 = ldf list in base;
    r69 = dyn list7(jpeg_Swd1);
    check L328() else D39();
  L329():
    goto L24(r70);
  L333():
    __3 = ldf `::`;
    check L335() else D42();
  L334():
    r73 = dyn base17(<lang `::`(grDevices, dev.off)>);
    goto L27(r73);
  L346():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L343(dx14);
  L347():
    goto L29(r82);
  L350():
    st grdo = r84;
    grepl = ldf grepl;
    check L351() else D50();
  L443(dx27):
    c51 = `as.logical`(dx27);
    if c51 then L447() else L53();
  L444():
    dr26 = tryDispatchBuiltin.1("$", options50);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L446() else L445(dr26);
  L445(options52):
    r157 = `$`(options52, <sym print>);
    goto L443(r157);
  L518():
    sym30 = ldf `is.null`;
    base30 = ldf `is.null` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L519() else L520();
  L575():
    st chunkout = r234;
    sym35 = ldf `is.null`;
    base35 = ldf `is.null` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L576() else L577();
  L621():
    l13 = ld chunkexps;
    c94 = `is.object`(l13);
    if c94 then L622() else L623(r268, l13);
  L627():
    r278 = clos inner4257291052;
    st putSinput = r278;
    r279 = clos inner1552342713;
    st trySrcLines = r279;
    r280 = clos inner2084475864;
    st echoComments = r280;
    st openSinput = FALSE;
    st openSchunk = FALSE;
    sym37 = ldf attr;
    base37 = ldf attr in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L628() else L629();
  D39():
    deopt 150 [r69];
  D42():
    deopt 161 [];
  D45():
    deopt 168 [r77];
  D50():
    deopt 187 [];
  L53():
    goto L54();
  L54():
    options53 = ld options;
    check L451() else D94();
  L71(r191):
    r193 = `!`(r191);
    c71 = `as.logical`(r193);
    if c71 then L526() else L72();
  L84(r236):
    r238 = `!`(r236);
    c85 = `as.logical`(r238);
    if c85 then L583() else L85();
  L94(r272, dx85):
    st chunkexps = dx85;
    goto L95();
  L96(r282):
    st srclines = r282;
    sym38 = ldf attr;
    base38 = ldf attr in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L632() else L633();
  L328():
    goto L25(r69);
  L335():
    r75 = dyn __3("grDevices", "dev.off");
    check L336() else D43();
  L338():
    goto L26(r77);
  L351():
    p3 = prom<V +>{
      grd2 = ld grd;
      grd3 = force? grd2;
      checkMissing(grd3);
      return grd3;
    };
    r86 = dyn grepl[, , fixed]("::", p3, TRUE);
    check L352() else D51();
  L446():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L443(dx26);
  L447():
    cat3 = ldf cat;
    check L448() else D92();
  L519():
    options89 = ld options;
    check L521() else D117();
  L520():
    r190 = dyn base30(<lang `$`(options, label)>);
    goto L71(r190);
  L576():
    options103 = ld options;
    check L578() else D137();
  L577():
    r235 = dyn base35(<lang `$`(options, label)>);
    goto L84(r235);
  L622():
    dr78 = tryDispatchBuiltin.0("[<-", l13, r268);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L624() else L623(r268, dr78);
  L623(r270, l15):
    ___ = ldf `[<-` in base;
    r273 = dyn ___(l15, r268, 1);
    goto L94(r270, r273);
  L628():
    chunk11 = ld chunk;
    check L630() else D155();
  L629():
    r281 = dyn base37(<sym chunk>, "srclines");
    goto L96(r281);
  D43():
    deopt 164 [r75];
  D51():
    deopt 192 [r86];
  D92():
    deopt 327 [];
  D94():
    deopt 332 [options53];
  D117():
    deopt 407 [options89];
  D137():
    deopt 488 [options103];
  D155():
    deopt 590 [chunk11];
  L72():
    goto L73();
  L73():
    sym31 = ldf attr;
    base31 = ldf attr in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L530() else L531();
  L85():
    goto L87();
  L87():
    grepl1 = ldf grepl;
    check L598() else D140();
  L97(r285):
    st srcfilenums = r285;
    integer = ldf integer;
    check L636() else D159();
  L336():
    list8 = ldf list in base;
    r76 = dyn list8(r75);
    check L337() else D44();
  L352():
    c34 = `as.logical`(r86);
    if c34 then L353() else L31();
  L448():
    r158 = dyn cat3(" print");
    check L449() else D93();
  L451():
    options54 = force? options53;
    checkMissing(options54);
    c52 = `is.object`(options54);
    if c52 then L453() else L454(options54);
  L521():
    options90 = force? options89;
    checkMissing(options90);
    c69 = `is.object`(options90);
    if c69 then L523() else L524(options90);
  L526():
    cat12 = ldf cat;
    check L527() else D118();
  L578():
    options104 = force? options103;
    checkMissing(options104);
    c83 = `is.object`(options104);
    if c83 then L580() else L581(options104);
  L583():
    chunkout2 = ld chunkout;
    check L584() else D138();
  L624():
    dx84 = getTryDispatchBuiltinValue(dr78);
    goto L94(r268, dx84);
  L630():
    chunk12 = force? chunk11;
    checkMissing(chunk12);
    attr3 = ldf attr in base;
    r283 = dyn attr3(chunk12, "srclines");
    check L631() else D156();
  L632():
    chunk13 = ld chunk;
    check L634() else D157();
  L633():
    r284 = dyn base38(<sym chunk>, "srcFilenum");
    goto L97(r284);
  D44():
    deopt 166 [r76];
  D93():
    deopt 329 [r158];
  D118():
    deopt 413 [];
  D138():
    deopt 493 [chunkout2];
  D140():
    deopt 507 [];
  D156():
    deopt 594 [r283];
  D157():
    deopt 598 [chunk13];
  D159():
    deopt 605 [];
  L31():
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L381() else L382();
  L38(r115):
    goto L45(r115);
  L74(r199):
    c73 = `is.object`(r199);
    if c73 then L534() else L535(r199);
  L337():
    goto L27(r76);
  L353():
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L354() else L355();
  L449():
    goto L54();
  L452(dx29):
    c53 = `as.logical`(dx29);
    if c53 then L456() else L55();
  L453():
    dr28 = tryDispatchBuiltin.1("$", options54);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L455() else L454(dr28);
  L454(options56):
    r160 = `$`(options56, <sym term>);
    goto L452(r160);
  L522(dx47):
    c70 = `==`(dx47, NULL);
    goto L71(c70);
  L523():
    dr46 = tryDispatchBuiltin.1("$", options90);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L525() else L524(dr46);
  L524(options92):
    r192 = `$`(options92, <sym label>);
    goto L522(r192);
  L527():
    p20 = prom<V +>{
      options93 = ld options;
      options94 = force? options93;
      checkMissing(options94);
      c72 = `is.object`(options94);
      if c72 then L1() else L2(options94);
    L0(dx49):
      return dx49;
    L1():
      dr48 = tryDispatchBuiltin.1("$", options94);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2(dr48);
    L2(options96):
      r194 = `$`(options96, <sym label>);
      goto L0(r194);
    L3():
      dx48 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx48);
    };
    r196 = dyn cat12[, , , sep]("label = ", p20, ", ", "");
    check L528() else D119();
  L530():
    chunk1 = ld chunk;
    check L532() else D120();
  L531():
    r198 = dyn base31(<sym chunk>, "srcFilenum");
    goto L74(r198);
  L579(dx69):
    c84 = `==`(dx69, NULL);
    goto L84(c84);
  L580():
    dr64 = tryDispatchBuiltin.1("$", options104);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L582() else L581(dr64);
  L581(options106):
    r237 = `$`(options106, <sym label>);
    goto L579(r237);
  L584():
    chunkout3 = force? chunkout2;
    checkMissing(chunkout3);
    l = ld object;
    c86 = `is.object`(l);
    if c86 then L586() else L587(chunkout3, l, chunkout3, l);
  L598():
    p27 = prom<V +>{
      _SweaveValidFilenameRegexp = ld `.SweaveValidFilenameRegexp`;
      _SweaveValidFilenameRegexp1 = force? _SweaveValidFilenameRegexp;
      checkMissing(_SweaveValidFilenameRegexp1);
      return _SweaveValidFilenameRegexp1;
    };
    p28 = prom<V +>{
      chunkout21 = ld chunkout;
      chunkout22 = force? chunkout21;
      checkMissing(chunkout22);
      return chunkout22;
    };
    r244 = dyn grepl1(p27, p28);
    check L599() else D141();
  L631():
    goto L96(r283);
  L634():
    chunk14 = force? chunk13;
    checkMissing(chunk14);
    attr4 = ldf attr in base;
    r286 = dyn attr4(chunk14, "srcFilenum");
    check L635() else D158();
  L636():
    r287 = dyn integer();
    check L637() else D160();
  D119():
    deopt 419 [r196];
  D120():
    deopt 424 [chunk1];
  D141():
    deopt 510 [r244];
  D158():
    deopt 602 [r286];
  D160():
    deopt 606 [r287];
  L32(r88):
    st devs = r88;
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L360() else L361();
  L39(r117):
    st devs = r117;
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L390() else L391();
  L55():
    goto L56();
  L56():
    cat5 = ldf cat;
    check L460() else D97();
  L75(dx51):
    st filenum = dx51;
    sym32 = ldf attr;
    base32 = ldf attr in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L537() else L538();
  L354():
    devs8 = ld devs;
    check L356() else D52();
  L355():
    r87 = dyn base19(<sym devs>, <lang eval(str2expression(grd))>);
    goto L32(r87);
  L381():
    devs10 = ld devs;
    check L383() else D66();
  L382():
    r116 = dyn base24(<sym devs>, <lang list(get(grd, envir=.GlobalEnv))>);
    goto L39(r116);
  L455():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L452(dx28);
  L456():
    cat4 = ldf cat;
    check L457() else D95();
  L525():
    dx46 = getTryDispatchBuiltinValue(dr46);
    goto L522(dx46);
  L528():
    goto L73();
  L532():
    chunk2 = force? chunk1;
    checkMissing(chunk2);
    attr = ldf attr in base;
    r200 = dyn attr(chunk2, "srcFilenum");
    check L533() else D121();
  L534():
    dr50 = tryDispatchBuiltin.1("[", r199);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L536() else L535(dr50);
  L535(r202):
    __6 = ldf `[` in base;
    r203 = dyn __6(r202, 1.0);
    goto L75(r203);
  L582():
    dx68 = getTryDispatchBuiltinValue(dr64);
    goto L579(dx68);
  L585(chunkout10, l6, chunkout11, dx71):
    c87 = `is.object`(dx71);
    if c87 then L589() else L590(chunkout10, l6, dx71);
  L586():
    dr66 = tryDispatchBuiltin.1("$", l);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L588() else L587(chunkout3, l, chunkout3, dr66);
  L587(chunkout6, l3, chunkout7, l4):
    r239 = `$`(l4, <sym chunkout>);
    goto L585(chunkout6, l3, chunkout7, r239);
  L599():
    r245 = `!`(r244);
    c89 = `as.logical`(r245);
    if c89 then L600() else L88();
  L635():
    goto L97(r286);
  L637():
    st linesout = r287;
    integer1 = ldf integer;
    check L638() else D161();
  D52():
    deopt 195 [devs8];
  D66():
    deopt 242 [devs10];
  D95():
    deopt 336 [];
  D97():
    deopt 342 [];
  D121():
    deopt 428 [r200];
  D161():
    deopt 609 [];
  L33(r95):
    st devoffs = r95;
    goto L38(r95);
  L41(r126):
    st devoffs = r126;
    goto L38(r126);
  L76(r205):
    c74 = `is.object`(r205);
    if c74 then L541() else L542(r205);
  L86(chunkout15, l10, dx75):
    c88 = `is.object`(l10);
    if c88 then L594() else L595(chunkout15, l10);
  L88():
    goto L89(NULL);
  L89(r250):
    goto L90(r250);
  L356():
    devs9 = force? devs8;
    checkMissing(devs9);
    eval = ldf eval;
    check L357() else D53();
  L360():
    devoffs8 = ld devoffs;
    check L362() else D56();
  L361():
    r94 = dyn base20(<sym devoffs>, <lang if(`!`(inherits(`<-`(grdo, tryCatch(eval(str2expression(grdo)), error=identity)), "error")), list(grdo), list(`::`(grDevices, dev.off)))>);
    goto L33(r94);
  L383():
    devs11 = force? devs10;
    checkMissing(devs11);
    sym25 = ldf list;
    base25 = ldf list in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L384() else L385();
  L390():
    devoffs10 = ld devoffs;
    check L392() else D71();
  L391():
    r125 = dyn base26(<sym devoffs>, <lang if(exists(grdo, envir=.GlobalEnv), list(get(grdo, envir=.GlobalEnv)), list(`::`(grDevices, dev.off)))>);
    goto L41(r125);
  L457():
    r161 = dyn cat4(" term");
    check L458() else D96();
  L460():
    p18 = prom<V +>{
      options57 = ld options;
      options58 = force? options57;
      checkMissing(options58);
      c54 = `is.object`(options58);
      if c54 then L1() else L2(options58);
    L0(dx31):
      return dx31;
    L1():
      dr30 = tryDispatchBuiltin.1("$", options58);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(options60):
      r163 = `$`(options60, <sym results>);
      goto L0(r163);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx30);
    };
    r165 = dyn cat5("", p18);
    check L461() else D98();
  L533():
    goto L74(r200);
  L536():
    dx50 = getTryDispatchBuiltinValue(dr50);
    goto L75(dx50);
  L537():
    chunk3 = ld chunk;
    check L539() else D122();
  L538():
    r204 = dyn base32(<sym chunk>, "srcFilenames");
    goto L76(r204);
  L588():
    dx70 = getTryDispatchBuiltinValue(dr66);
    goto L585(chunkout3, l, chunkout3, dx70);
  L589():
    dr68 = tryDispatchBuiltin.0("[[<-", dx71, chunkout11);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L591() else L590(chunkout10, l6, dr68);
  L590(chunkout13, l8, dx73):
    chunkprefix4 = ld chunkprefix;
    check L592() else D139();
  L600():
    warning = ldf warning;
    check L601() else D142();
  L638():
    r288 = dyn integer1();
    check L639() else D162();
  D53():
    deopt 198 [];
  D56():
    deopt 206 [devoffs8];
  D71():
    deopt 259 [devoffs10];
  D96():
    deopt 338 [r161];
  D98():
    deopt 345 [r165];
  D122():
    deopt 435 [chunk3];
  D139():
    deopt 499 [chunkout13, l8, dx73, chunkout11, chunkprefix4];
  D142():
    deopt 513 [];
  D162():
    deopt 610 [r288];
  L40(r119):
    c38 = ldf c in base;
    r124 = dyn c38(devs11, r119);
    check L389() else D70();
  L77(dx53):
    st filename = dx53;
    cat13 = ldf cat;
    check L545() else D125();
  L357():
    p5 = prom<V +>{
      str2expression = ldf str2expression;
      p4 = prom<V +>{
        grd4 = ld grd;
        grd5 = force? grd4;
        checkMissing(grd5);
        return grd5;
      };
      r90 = dyn str2expression(p4);
      return r90;
    };
    r92 = dyn eval(p5);
    check L358() else D54();
  L362():
    devoffs9 = force? devoffs8;
    checkMissing(devoffs9);
    sym21 = ldf inherits;
    base21 = ldf inherits in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L363() else L364();
  L384():
    get = ldf get;
    check L386() else D67();
  L385():
    r118 = dyn base25(<lang get(grd, envir=.GlobalEnv)>);
    goto L40(r118);
  L392():
    devoffs11 = force? devoffs10;
    checkMissing(devoffs11);
    exists = ldf exists;
    check L393() else D72();
  L458():
    goto L56();
  L461():
    options61 = ld options;
    check L462() else D99();
  L539():
    chunk4 = force? chunk3;
    checkMissing(chunk4);
    attr1 = ldf attr in base;
    r206 = dyn attr1(chunk4, "srcFilenames");
    check L540() else D123();
  L541():
    dr52 = tryDispatchBuiltin.1("[", r205);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L543() else L542(dr52);
  L542(r208):
    filenum = ld filenum;
    check L544() else D124();
  L591():
    dx74 = getTryDispatchBuiltinValue(dr68);
    goto L86(chunkout10, l6, dx74);
  L592():
    chunkprefix5 = force? chunkprefix4;
    ____ = ldf `[[<-` in base;
    r240 = dyn ____(dx73, chunkout11, chunkprefix5);
    goto L86(chunkout13, l8, r240);
  L593(chunkout19, dx77):
    st object = dx77;
    goto L87();
  L594():
    dr70 = tryDispatchBuiltin.0("$<-", l10, dx75);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L596() else L595(chunkout15, dr70);
  L595(chunkout17, l12):
    r241 = `$<-`(l12, <sym chunkout>, dx75);
    goto L593(chunkout17, r241);
  L601():
    p30 = prom<V +>{
      sQuote = ldf sQuote;
      p29 = prom<V +>{
        chunkout23 = ld chunkout;
        chunkout24 = force? chunkout23;
        checkMissing(chunkout24);
        return chunkout24;
      };
      r247 = dyn sQuote(p29);
      return r247;
    };
    r249 = dyn warning[, , , `call.`, domain]("file stem ", p30, " is not portable", FALSE, NA_LGL);
    check L602() else D143();
  L639():
    st filenumout = r288;
    srclines = ld srclines;
    check L640() else D163();
  D54():
    deopt 200 [r92];
  D67():
    deopt 247 [];
  D70():
    deopt 255 [r124];
  D72():
    deopt 262 [];
  D99():
    deopt 346 [options61];
  D123():
    deopt 439 [r206];
  D124():
    deopt 440 [r208, filenum];
  D125():
    deopt 445 [];
  D143():
    deopt 521 [r249];
  D163():
    deopt 612 [srclines];
  L34(r97):
    r106 = `!`(r97);
    c36 = `as.logical`(r106);
    if c36 then L368() else L35();
  L358():
    c35 = ldf c in base;
    r93 = dyn c35(devs9, r92);
    check L359() else D55();
  L363():
    tryCatch = ldf tryCatch;
    check L365() else D57();
  L364():
    r96 = dyn base21(<lang `<-`(grdo, tryCatch(eval(str2expression(grdo)), error=identity))>, "error");
    goto L34(r96);
  L386():
    p10 = prom<V +>{
      grd6 = ld grd;
      grd7 = force? grd6;
      checkMissing(grd7);
      return grd7;
    };
    p11 = prom<V +>{
      _GlobalEnv = ld `.GlobalEnv`;
      _GlobalEnv1 = force? _GlobalEnv;
      checkMissing(_GlobalEnv1);
      return _GlobalEnv1;
    };
    r122 = dyn get[, envir](p10, p11);
    check L387() else D68();
  L389():
    goto L39(r124);
  L393():
    p12 = prom<V +>{
      grdo4 = ld grdo;
      grdo5 = force? grdo4;
      checkMissing(grdo5);
      return grdo5;
    };
    p13 = prom<V +>{
      _GlobalEnv2 = ld `.GlobalEnv`;
      _GlobalEnv3 = force? _GlobalEnv2;
      checkMissing(_GlobalEnv3);
      return _GlobalEnv3;
    };
    r129 = dyn exists[, envir](p12, p13);
    check L394() else D73();
  L462():
    options62 = force? options61;
    checkMissing(options62);
    c55 = `is.object`(options62);
    if c55 then L464() else L465(options62);
  L540():
    goto L76(r206);
  L543():
    dx52 = getTryDispatchBuiltinValue(dr52);
    goto L77(dx52);
  L544():
    filenum1 = force? filenum;
    __7 = ldf `[` in base;
    r209 = dyn __7(r208, filenum1);
    goto L77(r209);
  L545():
    p22 = prom<V +>{
      basename = ldf basename;
      p21 = prom<V +>{
        filename = ld filename;
        filename1 = force? filename;
        checkMissing(filename1);
        return filename1;
      };
      r211 = dyn basename(p21);
      return r211;
    };
    p23 = prom<V +>{
      sym33 = ldf attr;
      base33 = ldf attr in base;
      guard33 = `==`.4(sym33, base33);
      if guard33 then L2() else L3();
    L0(r214):
      c75 = `is.object`(r214);
      if c75 then L4() else L5(r214);
    L2():
      chunk5 = ld chunk;
      chunk6 = force? chunk5;
      checkMissing(chunk6);
      attr2 = ldf attr in base;
      r215 = dyn attr2(chunk6, "srclines");
      goto L0(r215);
    L3():
      r213 = dyn base33(<sym chunk>, "srclines");
      goto L0(r213);
    L1(dx55):
      return dx55;
    L4():
      dr54 = tryDispatchBuiltin.1("[", r214);
      dc27 = getTryDispatchBuiltinDispatched(dr54);
      if dc27 then L6() else L5(dr54);
    L5(r217):
      __8 = ldf `[` in base;
      r218 = dyn __8(r217, 1.0);
      goto L1(r218);
    L6():
      dx54 = getTryDispatchBuiltinValue(dr54);
      goto L1(dx54);
    };
    r220 = dyn cat13[, , , , sep](p22, ":", p23, ")", "");
    check L546() else D126();
  L596():
    dx76 = getTryDispatchBuiltinValue(dr70);
    goto L593(chunkout15, dx76);
  L602():
    goto L89(r249);
  L640():
    srclines1 = force? srclines;
    checkMissing(srclines1);
    c95 = `is.object`(srclines1);
    if c95 then L641() else L642(srclines1);
  D55():
    deopt 202 [r93];
  D57():
    deopt 211 [];
  D68():
    deopt 251 [r122];
  D73():
    deopt 266 [r129];
  D126():
    deopt 452 [r220];
  L35():
    sym23 = ldf list;
    base23 = ldf list in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L374() else L375();
  L37(r110):
    c37 = ldf c in base;
    r114 = dyn c37(devoffs9, r110);
    check L379() else D65();
  L98(dx87):
    st srcline = dx87;
    srcfilenums = ld srcfilenums;
    check L644() else D164();
  L359():
    goto L32(r93);
  L365():
    p8 = prom<V +>{
      eval1 = ldf eval;
      p7 = prom<V +>{
        str2expression1 = ldf str2expression;
        p6 = prom<V +>{
          grdo = ld grdo;
          grdo1 = force? grdo;
          checkMissing(grdo1);
          return grdo1;
        };
        r99 = dyn str2expression1(p6);
        return r99;
      };
      r101 = dyn eval1(p7);
      return r101;
    };
    p9 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r104 = dyn tryCatch[, error](p8, p9);
    check L366() else D58();
  L368():
    sym22 = ldf list;
    base22 = ldf list in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L369() else L370();
  L387():
    list11 = ldf list in base;
    r123 = dyn list11(r122);
    check L388() else D69();
  L394():
    c39 = `as.logical`(r129);
    if c39 then L395() else L42();
  L463(dx33):
    c56 = `as.logical`(dx33);
    if c56 then L467() else L57();
  L464():
    dr32 = tryDispatchBuiltin.1("$", options62);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L466() else L465(dr32);
  L465(options64):
    r166 = `$`(options64, <sym fig>);
    goto L463(r166);
  L546():
    cat14 = ldf cat;
    check L547() else D127();
  L641():
    dr80 = tryDispatchBuiltin.1("[", srclines1);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L643() else L642(dr80);
  L642(srclines3):
    __12 = ldf `[` in base;
    r289 = dyn __12(srclines3, 1);
    goto L98(r289);
  D58():
    deopt 215 [r104];
  D65():
    deopt 238 [r114];
  D69():
    deopt 253 [r123];
  D127():
    deopt 454 [];
  D164():
    deopt 618 [srcfilenums];
  L36(r108):
    goto L37(r108);
  L42():
    sym28 = ldf list;
    base28 = ldf list in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L402() else L403();
  L44(r136):
    c40 = ldf c in base;
    r140 = dyn c40(devoffs11, r136);
    check L407() else D80();
  L57():
    goto L69(NULL);
  L69(r187):
    goto L70();
  L366():
    st grdo = r104;
    inherits = ldf inherits in base;
    r105 = dyn inherits(r104, "error", FALSE);
    check L367() else D59();
  L369():
    grdo2 = ld grdo;
    check L371() else D60();
  L370():
    r107 = dyn base22(<sym grdo>);
    goto L36(r107);
  L374():
    __4 = ldf `::`;
    check L376() else D62();
  L375():
    r111 = dyn base23(<lang `::`(grDevices, dev.off)>);
    goto L37(r111);
  L379():
    goto L33(r114);
  L388():
    goto L40(r123);
  L395():
    sym27 = ldf list;
    base27 = ldf list in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L396() else L397();
  L466():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L463(dx32);
  L467():
    options65 = ld options;
    check L468() else D100();
  L547():
    r221 = dyn cat14("\n");
    check L548() else D128();
  L643():
    dx86 = getTryDispatchBuiltinValue(dr80);
    goto L98(dx86);
  L644():
    srcfilenums1 = force? srcfilenums;
    checkMissing(srcfilenums1);
    c96 = `is.object`(srcfilenums1);
    if c96 then L645() else L646(srcfilenums1);
  D59():
    deopt 220 [r105];
  D60():
    deopt 224 [grdo2];
  D62():
    deopt 231 [];
  D80():
    deopt 287 [r140];
  D100():
    deopt 349 [options65];
  D128():
    deopt 456 [r221];
  L43(r131):
    goto L44(r131);
  L99(dx89):
    st srcfilenum = dx89;
    st thisline = 0;
    st lastshown = 0;
    st leading = 1;
    sym39 = ldf attr;
    base39 = ldf attr in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L648() else L649();
  L367():
    goto L34(r105);
  L371():
    grdo3 = force? grdo2;
    checkMissing(grdo3);
    list9 = ldf list in base;
    r109 = dyn list9(grdo3);
    check L372() else D61();
  L376():
    r112 = dyn __4("grDevices", "dev.off");
    check L377() else D63();
  L396():
    get1 = ldf get;
    check L398() else D74();
  L397():
    r130 = dyn base27(<lang get(grdo, envir=.GlobalEnv)>);
    goto L43(r130);
  L402():
    __5 = ldf `::`;
    check L404() else D77();
  L403():
    r137 = dyn base28(<lang `::`(grDevices, dev.off)>);
    goto L44(r137);
  L407():
    goto L41(r140);
  L468():
    options66 = force? options65;
    checkMissing(options66);
    c57 = `is.object`(options66);
    if c57 then L470() else L471(options66);
  L548():
    goto L78();
  L645():
    dr82 = tryDispatchBuiltin.1("[", srcfilenums1);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L647() else L646(dr82);
  L646(srcfilenums3):
    __13 = ldf `[` in base;
    r290 = dyn __13(srcfilenums3, 1);
    goto L99(r290);
  D61():
    deopt 227 [r109];
  D63():
    deopt 234 [r112];
  D74():
    deopt 270 [];
  D77():
    deopt 280 [];
  L100(r292):
    st srcrefs = r292;
    sym40 = ldf length;
    base40 = ldf length in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L652() else L653();
  L372():
    goto L36(r109);
  L377():
    list10 = ldf list in base;
    r113 = dyn list10(r112);
    check L378() else D64();
  L398():
    p14 = prom<V +>{
      grdo6 = ld grdo;
      grdo7 = force? grdo6;
      checkMissing(grdo7);
      return grdo7;
    };
    p15 = prom<V +>{
      _GlobalEnv4 = ld `.GlobalEnv`;
      _GlobalEnv5 = force? _GlobalEnv4;
      checkMissing(_GlobalEnv5);
      return _GlobalEnv5;
    };
    r134 = dyn get1[, envir](p14, p15);
    check L399() else D75();
  L404():
    r138 = dyn __5("grDevices", "dev.off");
    check L405() else D78();
  L469(dx35):
    c58 = `as.logical`(dx35);
    if c58 then L473() else L58();
  L470():
    dr34 = tryDispatchBuiltin.1("$", options66);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L472() else L471(dr34);
  L471(options68):
    r167 = `$`(options68, <sym eps>);
    goto L469(r167);
  L647():
    dx88 = getTryDispatchBuiltinValue(dr82);
    goto L99(dx88);
  L648():
    chunkexps8 = ld chunkexps;
    check L650() else D165();
  L649():
    r291 = dyn base39(<sym chunkexps>, "srcref");
    goto L100(r291);
  D64():
    deopt 236 [r113];
  D75():
    deopt 274 [r134];
  D78():
    deopt 283 [r138];
  D165():
    deopt 635 [chunkexps8];
  L58():
    goto L59();
  L59():
    options69 = ld options;
    check L477() else D103();
  L101(r295):
    c97 = `as.logical`(r295);
    if c97 then L656() else L102();
  L378():
    goto L37(r113);
  L399():
    list12 = ldf list in base;
    r135 = dyn list12(r134);
    check L400() else D76();
  L405():
    list13 = ldf list in base;
    r139 = dyn list13(r138);
    check L406() else D79();
  L472():
    dx34 = getTryDispatchBuiltinValue(dr34);
    goto L469(dx34);
  L473():
    cat6 = ldf cat;
    check L474() else D101();
  L650():
    chunkexps9 = force? chunkexps8;
    checkMissing(chunkexps9);
    attr5 = ldf attr in base;
    r293 = dyn attr5(chunkexps9, "srcref");
    check L651() else D166();
  L652():
    devs12 = ld devs;
    check L654() else D167();
  L653():
    r294 = dyn base40(<sym devs>);
    goto L101(r294);
  D76():
    deopt 276 [r135];
  D79():
    deopt 285 [r139];
  D101():
    deopt 353 [];
  D103():
    deopt 358 [options69];
  D166():
    deopt 639 [r293];
  D167():
    deopt 643 [devs12];
  L102():
    goto L108();
  L108():
    SweaveHooks = ldf SweaveHooks;
    check L676() else D176();
  L400():
    goto L43(r135);
  L406():
    goto L44(r139);
  L474():
    r168 = dyn cat6(" eps");
    check L475() else D102();
  L477():
    options70 = force? options69;
    checkMissing(options70);
    c59 = `is.object`(options70);
    if c59 then L479() else L480(options70);
  L651():
    goto L100(r293);
  L654():
    devs13 = force? devs12;
    checkMissing(devs13);
    length = ldf length in base;
    r296 = dyn length(devs13);
    check L655() else D168();
  L656():
    grepl2 = ldf grepl;
    check L657() else D169();
  D102():
    deopt 355 [r168];
  D168():
    deopt 646 [r296];
  D169():
    deopt 648 [];
  D176():
    deopt 687 [];
  L475():
    goto L59();
  L478(dx37):
    c60 = `as.logical`(dx37);
    if c60 then L482() else L60();
  L479():
    dr36 = tryDispatchBuiltin.1("$", options70);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L481() else L480(dr36);
  L480(options72):
    r170 = `$`(options72, <sym pdf>);
    goto L478(r170);
  L655():
    goto L101(r296);
  L657():
    p39 = prom<V +>{
      _SweaveValidFilenameRegexp2 = ld `.SweaveValidFilenameRegexp`;
      _SweaveValidFilenameRegexp3 = force? _SweaveValidFilenameRegexp2;
      checkMissing(_SweaveValidFilenameRegexp3);
      return _SweaveValidFilenameRegexp3;
    };
    p40 = prom<V +>{
      chunkprefix6 = ld chunkprefix;
      chunkprefix7 = force? chunkprefix6;
      checkMissing(chunkprefix7);
      return chunkprefix7;
    };
    r299 = dyn grepl2(p39, p40);
    check L658() else D170();
  L676():
    p47 = prom<V +>{
      options123 = ld options;
      options124 = force? options123;
      checkMissing(options124);
      return options124;
    };
    r318 = dyn SweaveHooks[, run](p47, TRUE);
    check L677() else D177();
  D170():
    deopt 651 [r299];
  D177():
    deopt 691 [r318];
  L60():
    goto L61();
  L61():
    options73 = ld options;
    check L486() else D106();
  L481():
    dx36 = getTryDispatchBuiltinValue(dr36);
    goto L478(dx36);
  L482():
    cat7 = ldf cat;
    check L483() else D104();
  L658():
    r300 = `!`(r299);
    c98 = `as.logical`(r300);
    if c98 then L659() else L103();
  L677():
    sym41 = ldf seq_along;
    base41 = ldf seq_along in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L678() else L679();
  D104():
    deopt 362 [];
  D106():
    deopt 367 [options73];
  L103():
    goto L104();
  L104():
    options109 = ld options;
    check L663() else D173();
  L109(r320):
    s = toForSeq(r320);
    l16 = length(s);
    i = 0;
    goto L110(i);
  L483():
    r171 = dyn cat7(" pdf");
    check L484() else D105();
  L486():
    options74 = force? options73;
    checkMissing(options74);
    c61 = `is.object`(options74);
    if c61 then L488() else L489(options74);
  L659():
    warning1 = ldf warning;
    check L660() else D171();
  L678():
    chunkexps10 = ld chunkexps;
    check L680() else D178();
  L679():
    r319 = dyn base41(<sym chunkexps>);
    goto L109(r319);
  D105():
    deopt 364 [r171];
  D171():
    deopt 654 [];
  D173():
    deopt 665 [options109];
  D178():
    deopt 693 [chunkexps10];
  L110(i1):
    i2 = `+`.1(i1, 1);
    c104 = `<`.1(l16, i2);
    if c104 then L681() else L180();
  L484():
    goto L61();
  L487(dx39):
    c62 = `as.logical`(dx39);
    if c62 then L491() else L62();
  L488():
    dr38 = tryDispatchBuiltin.1("$", options74);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L490() else L489(dr38);
  L489(options76):
    r173 = `$`(options76, <sym png>);
    goto L487(r173);
  L660():
    p42 = prom<V +>{
      sQuote1 = ldf sQuote;
      p41 = prom<V +>{
        chunkprefix8 = ld chunkprefix;
        chunkprefix9 = force? chunkprefix8;
        checkMissing(chunkprefix9);
        return chunkprefix9;
      };
      r302 = dyn sQuote1(p41);
      return r302;
    };
    r304 = dyn warning1[, , , `call.`, domain]("file stem ", p42, " is not portable", FALSE, NA_LGL);
    check L661() else D172();
  L663():
    options110 = force? options109;
    checkMissing(options110);
    c99 = `is.object`(options110);
    if c99 then L665() else L666(options110);
  L680():
    chunkexps11 = force? chunkexps10;
    checkMissing(chunkexps11);
    r321 = seq_along(chunkexps11);
    goto L109(r321);
  D172():
    deopt 662 [r304];
  L62():
    goto L63();
  L63():
    options77 = ld options;
    check L495() else D109();
  L180():
    x = `[[`(s, i2, NULL, TRUE);
    st nce = x;
    chunkexps12 = ld chunkexps;
    check L682() else D179();
  L490():
    dx38 = getTryDispatchBuiltinValue(dr38);
    goto L487(dx38);
  L491():
    cat8 = ldf cat;
    check L492() else D107();
  L661():
    goto L104();
  L664(dx91):
    c100 = `as.logical`(dx91);
    if c100 then L668() else L105();
  L665():
    dr84 = tryDispatchBuiltin.1("$", options110);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L667() else L666(dr84);
  L666(options112):
    r306 = `$`(options112, <sym figs.only>);
    goto L664(r306);
  L681():
    options161 = ld options;
    check L971() else D304();
  D107():
    deopt 371 [];
  D109():
    deopt 376 [options77];
  D179():
    deopt 696 [i2, chunkexps12];
  D304():
    deopt 1191 [options161];
  L105():
    goto L107(NULL);
  L107(r315):
    goto L108();
  L492():
    r174 = dyn cat8(" png");
    check L493() else D108();
  L495():
    options78 = force? options77;
    checkMissing(options78);
    c63 = `is.object`(options78);
    if c63 then L497() else L498(options78);
  L667():
    dx90 = getTryDispatchBuiltinValue(dr84);
    goto L664(dx90);
  L668():
    devs14 = ld devs;
    check L669() else D174();
  L682():
    chunkexps13 = force? chunkexps12;
    checkMissing(chunkexps13);
    c105 = `is.object`(chunkexps13);
    if c105 then L683() else L684(i2, chunkexps13);
  L971():
    options162 = force? options161;
    checkMissing(options162);
    c226 = `is.object`(options162);
    if c226 then L973() else L974(options162);
  D108():
    deopt 373 [r174];
  D174():
    deopt 668 [devs14];
  L111(i8, dx100):
    st ce = dx100;
    options125 = ld options;
    check L687() else D181();
  L493():
    goto L63();
  L496(dx41):
    c64 = `as.logical`(dx41);
    if c64 then L500() else L64();
  L497():
    dr40 = tryDispatchBuiltin.1("$", options78);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L499() else L498(dr40);
  L498(options80):
    r176 = `$`(options80, <sym jpeg>);
    goto L496(r176);
  L669():
    devs15 = force? devs14;
    checkMissing(devs15);
    c101 = `is.object`(devs15);
    if c101 then L670() else L671(devs15);
  L683():
    dr92 = tryDispatchBuiltin.1("[[", chunkexps13);
    dc46 = getTryDispatchBuiltinDispatched(dr92);
    if dc46 then L685() else L684(i2, dr92);
  L684(i6, chunkexps15):
    nce = ld nce;
    check L686() else D180();
  L972(dx162):
    c227 = `as.logical`(dx162);
    if c227 then L976() else L181();
  L973():
    dr154 = tryDispatchBuiltin.1("$", options162);
    dc77 = getTryDispatchBuiltinDispatched(dr154);
    if dc77 then L975() else L974(dr154);
  L974(options164):
    r509 = `$`(options164, <sym keep.source>);
    goto L972(r509);
  D180():
    deopt 698 [i6, chunkexps15, nce];
  D181():
    deopt 702 [i8, options125];
  L64():
    goto L65();
  L65():
    sym29 = ldf `is.null`;
    base29 = ldf `is.null` in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L504() else L505();
  L106(dx93):
    checkFun.0(dx93);
    dx94 = dx93 as cls;
    p43 = prom<V +>{
      chunkprefix10 = ld chunkprefix;
      chunkprefix11 = force? chunkprefix10;
      checkMissing(chunkprefix11);
      return chunkprefix11;
    };
    p44 = prom<V +>{
      options113 = ld options;
      options114 = force? options113;
      checkMissing(options114);
      c102 = `is.object`(options114);
      if c102 then L1() else L2(options114);
    L0(dx96):
      return dx96;
    L1():
      dr88 = tryDispatchBuiltin.1("$", options114);
      dc44 = getTryDispatchBuiltinDispatched(dr88);
      if dc44 then L3() else L2(dr88);
    L2(options116):
      r309 = `$`(options116, <sym width>);
      goto L0(r309);
    L3():
      dx95 = getTryDispatchBuiltinValue(dr88);
      goto L0(dx95);
    };
    p45 = prom<V +>{
      options117 = ld options;
      options118 = force? options117;
      checkMissing(options118);
      c103 = `is.object`(options118);
      if c103 then L1() else L2(options118);
    L0(dx98):
      return dx98;
    L1():
      dr90 = tryDispatchBuiltin.1("$", options118);
      dc45 = getTryDispatchBuiltinDispatched(dr90);
      if dc45 then L3() else L2(dr90);
    L2(options120):
      r311 = `$`(options120, <sym height>);
      goto L0(r311);
    L3():
      dx97 = getTryDispatchBuiltinValue(dr90);
      goto L0(dx97);
    };
    p46 = prom<V +>{
      options121 = ld options;
      options122 = force? options121;
      checkMissing(options122);
      return options122;
    };
    r314 = dyn dx94[name, width, height, ](p43, p44, p45, p46);
    check L673() else D175();
  L181():
    goto L182();
  L182():
    openSinput2 = ld openSinput;
    check L980() else D307();
  L499():
    dx40 = getTryDispatchBuiltinValue(dr40);
    goto L496(dx40);
  L500():
    cat9 = ldf cat;
    check L501() else D110();
  L670():
    dr86 = tryDispatchBuiltin.1("[[", devs15);
    dc43 = getTryDispatchBuiltinDispatched(dr86);
    if dc43 then L672() else L671(dr86);
  L671(devs17):
    __14 = ldf `[[` in base;
    r307 = dyn __14(devs17, 1);
    goto L106(r307);
  L685():
    dx99 = getTryDispatchBuiltinValue(dr92);
    goto L111(i2, dx99);
  L686():
    nce1 = force? nce;
    __15 = ldf `[[` in base;
    r322 = dyn __15(chunkexps15, nce1);
    goto L111(i6, r322);
  L687():
    options126 = force? options125;
    checkMissing(options126);
    c106 = `is.object`(options126);
    if c106 then L689() else L690(i8, options126);
  L975():
    dx161 = getTryDispatchBuiltinValue(dr154);
    goto L972(dx161);
  L976():
    echoComments = ldf echoComments;
    check L977() else D305();
  D110():
    deopt 380 [];
  D175():
    deopt 681 [r314];
  D305():
    deopt 1195 [];
  D307():
    deopt 1200 [openSinput2];
  L66(r180):
    r182 = `!`(r180);
    c67 = `as.logical`(r182);
    if c67 then L511() else L67();
  L501():
    r177 = dyn cat9(" jpeg");
    check L502() else D111();
  L504():
    options81 = ld options;
    check L506() else D112();
  L505():
    r179 = dyn base29(<lang `$`(options, grdevice)>);
    goto L66(r179);
  L672():
    dx92 = getTryDispatchBuiltinValue(dr86);
    goto L106(dx92);
  L673():
    goto L107(r314);
  L688(i12, dx102):
    c107 = `as.logical`(dx102);
    if c107 then L692() else L112(i12, c107);
  L689():
    dr94 = tryDispatchBuiltin.1("$", options126);
    dc47 = getTryDispatchBuiltinDispatched(dr94);
    if dc47 then L691() else L690(i8, dr94);
  L690(i10, options128):
    r323 = `$`(options128, <sym keep.source>);
    goto L688(i10, r323);
  L977():
    p85 = prom<V +>{
      sym55 = ldf length;
      base55 = ldf length in base;
      guard55 = `==`.4(sym55, base55);
      if guard55 then L1() else L2();
    L0(r511):
      return r511;
    L1():
      srcfile4 = ld srcfile;
      srcfile5 = force? srcfile4;
      checkMissing(srcfile5);
      c228 = `is.object`(srcfile5);
      if c228 then L4() else L5(srcfile5);
    L2():
      r510 = dyn base55(<lang `$`(srcfile, lines)>);
      goto L0(r510);
    L3(dx164):
      length8 = ldf length in base;
      r513 = dyn length8(dx164);
      goto L0(r513);
    L4():
      dr156 = tryDispatchBuiltin.1("$", srcfile5);
      dc78 = getTryDispatchBuiltinDispatched(dr156);
      if dc78 then L6() else L5(dr156);
    L5(srcfile7):
      r512 = `$`(srcfile7, <sym lines>);
      goto L3(r512);
    L6():
      dx163 = getTryDispatchBuiltinValue(dr156);
      goto L3(dx163);
    };
    r515 = dyn echoComments(p85);
    check L978() else D306();
  L980():
    openSinput3 = force? openSinput2;
    checkMissing(openSinput3);
    c229 = `as.logical`(openSinput3);
    if c229 then L981() else L183();
  D111():
    deopt 382 [r177];
  D112():
    deopt 386 [options81];
  D306():
    deopt 1197 [r515];
  L67():
    goto L68(NULL);
  L68(r186):
    goto L69(r186);
  L112(i14, c109):
    c116 = `as.logical`(c109);
    if c116 then L699() else L114(i14, c116);
  L183():
    goto L186();
  L186():
    openSchunk2 = ld openSchunk;
    check L996() else D315();
  L502():
    goto L65();
  L506():
    options82 = force? options81;
    checkMissing(options82);
    c65 = `is.object`(options82);
    if c65 then L508() else L509(options82);
  L511():
    cat10 = ldf cat;
    check L512() else D113();
  L691():
    dx101 = getTryDispatchBuiltinValue(dr94);
    goto L688(i8, dx101);
  L692():
    nce2 = ld nce;
    check L693() else D182();
  L978():
    goto L182();
  L981():
    cat23 = ldf cat;
    check L982() else D308();
  D113():
    deopt 392 [];
  D182():
    deopt 705 [i12, c107, nce2];
  D308():
    deopt 1203 [];
  D315():
    deopt 1233 [openSchunk2];
  L114(i20, c118):
    c131 = `as.logical`(c118);
    if c131 then L708() else L117();
  L507(dx43):
    c66 = `==`(dx43, NULL);
    goto L66(c66);
  L508():
    dr42 = tryDispatchBuiltin.1("$", options82);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L510() else L509(dr42);
  L509(options84):
    r181 = `$`(options84, <sym grdevice>);
    goto L507(r181);
  L512():
    p19 = prom<V +>{
      options85 = ld options;
      options86 = force? options85;
      checkMissing(options86);
      c68 = `is.object`(options86);
      if c68 then L1() else L2(options86);
    L0(dx45):
      return dx45;
    L1():
      dr44 = tryDispatchBuiltin.1("$", options86);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(options88):
      r183 = `$`(options88, <sym grdevice>);
      goto L0(r183);
    L3():
      dx44 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx44);
    };
    r185 = dyn cat10("", p19);
    check L513() else D114();
  L693():
    nce3 = force? nce2;
    checkMissing(nce3);
    sym42 = ldf length;
    base42 = ldf length in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L694() else L695();
  L699():
    sym43 = ldf `is.null`;
    base43 = ldf `is.null` in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L700() else L701();
  L982():
    p86 = prom<V +>{
      chunkout35 = ld chunkout;
      chunkout36 = force? chunkout35;
      checkMissing(chunkout36);
      return chunkout36;
    };
    r518 = dyn cat23[, file]("\n\\end{Sinput}\n", p86);
    check L983() else D309();
  L996():
    openSchunk3 = force? openSchunk2;
    checkMissing(openSchunk3);
    c232 = `as.logical`(openSchunk3);
    if c232 then L997() else L187();
  D114():
    deopt 395 [r185];
  D309():
    deopt 1207 [r518];
  L113(i17, c112, nce6, r325):
    r327 = `<=`(nce6, r325);
    c113 = `as.logical`(r327);
    c114 = `&&`(c112, c113);
    goto L112(i17, c114);
  L115(i23, c121, r329):
    r331 = `!`(r329);
    c128 = `as.logical`(r331);
    c129 = `&&`(c121, c128);
    goto L114(i23, c129);
  L117():
    deparse = ldf deparse;
    check L763() else D210();
  L131(i73):
    object19 = ld object;
    check L765() else D212();
  L187():
    goto L190();
  L190():
    sym56 = ldf `is.null`;
    base56 = ldf `is.null` in base;
    guard56 = `==`.4(sym56, base56);
    if guard56 then L1012() else L1013();
  L510():
    dx42 = getTryDispatchBuiltinValue(dr42);
    goto L507(dx42);
  L513():
    goto L68(r185);
  L694():
    srcrefs = ld srcrefs;
    check L696() else D183();
  L695():
    r324 = dyn base42(<sym srcrefs>);
    goto L113(i12, c107, nce3, r324);
  L700():
    srcrefs2 = ld srcrefs;
    check L702() else D185();
  L701():
    r328 = dyn base43(<lang `<-`(srcref, `[[`(srcrefs, nce))>);
    goto L115(i14, c116, r328);
  L708():
    srcref = ld srcref;
    check L709() else D187();
  L983():
    srcline30 = ld srcline;
    check L984() else D310();
  L997():
    cat24 = ldf cat;
    check L998() else D316();
  D183():
    deopt 708 [i12, c107, nce3, srcrefs];
  D185():
    deopt 715 [i14, c116, srcrefs2];
  D187():
    deopt 724 [i20, srcref];
  D210():
    deopt 816 [i20];
  D212():
    deopt 825 [i73, object19];
  D310():
    deopt 1208 [srcline30];
  D316():
    deopt 1236 [];
  L191(r534):
    c237 = `as.logical`(r534);
    if c237 then L1019() else L192(c237);
  L696():
    srcrefs1 = force? srcrefs;
    checkMissing(srcrefs1);
    length1 = ldf length in base;
    r326 = dyn length1(srcrefs1);
    check L697() else D184();
  L702():
    srcrefs3 = force? srcrefs2;
    checkMissing(srcrefs3);
    c122 = `is.object`(srcrefs3);
    if c122 then L703() else L704(i14, c116, srcrefs3);
  L709():
    srcref1 = force? srcref;
    checkMissing(srcref1);
    c132 = `is.object`(srcref1);
    if c132 then L710() else L711(i20, srcref1);
  L763():
    p54 = prom<V +>{
      ce2 = ld ce;
      ce3 = force? ce2;
      checkMissing(ce3);
      return ce3;
    };
    p55 = prom<V +>{
      getOption = ldf getOption;
      r367 = dyn getOption("width");
      r368 = `*`(0.75, r367);
      return r368;
    };
    r370 = dyn deparse[, `width.cutoff`](p54, p55);
    check L764() else D211();
  L765():
    object20 = force? object19;
    checkMissing(object20);
    c149 = `is.object`(object20);
    if c149 then L767() else L768(i73, object20);
  L984():
    srcline31 = force? srcline30;
    checkMissing(srcline31);
    l47 = ld linesout;
    c230 = `is.object`(l47);
    if c230 then L985() else L986(srcline31, l47);
  L998():
    p87 = prom<V +>{
      chunkout37 = ld chunkout;
      chunkout38 = force? chunkout37;
      checkMissing(chunkout38);
      return chunkout38;
    };
    r526 = dyn cat24[, file]("\\end{Schunk}\n", p87);
    check L999() else D317();
  L1012():
    options165 = ld options;
    check L1014() else D323();
  L1013():
    r533 = dyn base56(<lang `$`(options, label)>);
    goto L191(r533);
  D184():
    deopt 711 [i12, c107, nce3, r326];
  D211():
    deopt 820 [i20, r370];
  D317():
    deopt 1240 [r526];
  D323():
    deopt 1267 [options165];
  L116(i27, c126, dx104):
    st srcref = dx104;
    c127 = `==`(dx104, NULL);
    goto L115(i27, c126, c127);
  L118(i34, dx106):
    st showfrom = dx106;
    srcref4 = ld srcref;
    check L713() else D188();
  L184(dx166):
    st linesout = dx166;
    srcfilenum30 = ld srcfilenum;
    check L989() else D312();
  L192(c239):
    c248 = `as.logical`(c239);
    if c248 then L1026() else L193();
  L697():
    goto L113(i12, c107, nce3, r326);
  L703():
    dr96 = tryDispatchBuiltin.1("[[", srcrefs3);
    dc48 = getTryDispatchBuiltinDispatched(dr96);
    if dc48 then L705() else L704(i14, c116, dr96);
  L704(i25, c124, srcrefs5):
    nce7 = ld nce;
    check L706() else D186();
  L710():
    dr98 = tryDispatchBuiltin.1("[", srcref1);
    dc49 = getTryDispatchBuiltinDispatched(dr98);
    if dc49 then L712() else L711(i20, dr98);
  L711(i32, srcref3):
    __17 = ldf `[` in base;
    r332 = dyn __17(srcref3, 7);
    goto L118(i32, r332);
  L764():
    st dce = r370;
    st leading = 1;
    goto L131(i20);
  L766(i77, dx120):
    c150 = `as.logical`(dx120);
    if c150 then L770() else L132();
  L767():
    dr112 = tryDispatchBuiltin.1("$", object20);
    dc56 = getTryDispatchBuiltinDispatched(dr112);
    if dc56 then L769() else L768(i73, dr112);
  L768(i75, object22):
    r371 = `$`(object22, <sym debug>);
    goto L766(i75, r371);
  L985():
    dr158 = tryDispatchBuiltin.0("[<-", l47, srcline31);
    dc79 = getTryDispatchBuiltinDispatched(dr158);
    if dc79 then L987() else L986(srcline31, dr158);
  L986(srcline33, l49):
    thisline30 = ld thisline;
    check L988() else D311();
  L999():
    srcline36 = ld srcline;
    check L1000() else D318();
  L1014():
    options166 = force? options165;
    checkMissing(options166);
    c235 = `is.object`(options166);
    if c235 then L1016() else L1017(options166);
  L1019():
    options169 = ld options;
    check L1020() else D324();
  D186():
    deopt 717 [i25, c124, srcrefs5, nce7];
  D188():
    deopt 730 [i34, srcref4];
  D311():
    deopt 1211 [srcline33, l49, srcline31, thisline30];
  D312():
    deopt 1217 [srcfilenum30];
  D318():
    deopt 1241 [srcline36];
  D324():
    deopt 1271 [c237, options169];
  L132():
    goto L133(i77);
  L133(i80):
    options129 = ld options;
    check L774() else D215();
  L193():
    goto L194();
  L194():
    options173 = ld options;
    check L1030() else D327();
  L705():
    dx103 = getTryDispatchBuiltinValue(dr96);
    goto L116(i14, c116, dx103);
  L706():
    nce8 = force? nce7;
    __16 = ldf `[[` in base;
    r330 = dyn __16(srcrefs5, nce8);
    goto L116(i25, c124, r330);
  L712():
    dx105 = getTryDispatchBuiltinValue(dr98);
    goto L118(i20, dx105);
  L713():
    srcref5 = force? srcref4;
    checkMissing(srcref5);
    c133 = `is.object`(srcref5);
    if c133 then L714() else L715(i34, srcref5);
  L769():
    dx119 = getTryDispatchBuiltinValue(dr112);
    goto L766(i73, dx119);
  L770():
    cat15 = ldf cat;
    check L771() else D213();
  L987():
    dx165 = getTryDispatchBuiltinValue(dr158);
    goto L184(dx165);
  L988():
    thisline31 = force? thisline30;
    checkMissing(thisline31);
    r519 = `+`(thisline31, <int 1, 2>);
    ___11 = ldf `[<-` in base;
    r520 = dyn ___11(l49, srcline31, r519);
    goto L184(r520);
  L989():
    srcfilenum31 = force? srcfilenum30;
    checkMissing(srcfilenum31);
    l50 = ld filenumout;
    c231 = `is.object`(l50);
    if c231 then L990() else L991(srcfilenum31, l50);
  L1000():
    srcline37 = force? srcline36;
    checkMissing(srcline37);
    l53 = ld linesout;
    c233 = `is.object`(l53);
    if c233 then L1001() else L1002(srcline37, l53);
  L1015(dx174):
    c236 = `==`(dx174, NULL);
    goto L191(c236);
  L1016():
    dr166 = tryDispatchBuiltin.1("$", options166);
    dc83 = getTryDispatchBuiltinDispatched(dr166);
    if dc83 then L1018() else L1017(dr166);
  L1017(options168):
    r535 = `$`(options168, <sym label>);
    goto L1015(r535);
  L1020():
    options170 = force? options169;
    checkMissing(options170);
    c240 = `is.object`(options170);
    if c240 then L1022() else L1023(c237, options170);
  L1026():
    close1 = ldf close;
    check L1027() else D325();
  D213():
    deopt 829 [i77];
  D215():
    deopt 836 [i80, options129];
  D325():
    deopt 1276 [];
  D327():
    deopt 1281 [options173];
  L119(i38, dx108):
    st showto = dx108;
    trySrcLines = ldf trySrcLines;
    check L717() else D189();
  L185(dx168):
    st filenumout = dx168;
    thisline34 = ld thisline;
    check L994() else D314();
  L188(dx170):
    st linesout = dx170;
    srcfilenum36 = ld srcfilenum;
    check L1005() else D320();
  L714():
    dr100 = tryDispatchBuiltin.1("[", srcref5);
    dc50 = getTryDispatchBuiltinDispatched(dr100);
    if dc50 then L716() else L715(i34, dr100);
  L715(i36, srcref7):
    __18 = ldf `[` in base;
    r333 = dyn __18(srcref7, 8);
    goto L119(i36, r333);
  L771():
    p57 = prom<V +>{
      paste2 = ldf paste;
      p56 = prom<V +>{
        dce16 = ld dce;
        dce17 = force? dce16;
        checkMissing(dce17);
        return dce17;
      };
      r373 = dyn paste2[, collapse](p56, "\n+  ");
      return r373;
    };
    r375 = dyn cat15("\nRnw> ", p57, "\n");
    check L772() else D214();
  L774():
    options130 = force? options129;
    checkMissing(options130);
    c151 = `is.object`(options130);
    if c151 then L776() else L777(i80, options130);
  L990():
    dr160 = tryDispatchBuiltin.0("[<-", l50, srcfilenum31);
    dc80 = getTryDispatchBuiltinDispatched(dr160);
    if dc80 then L992() else L991(srcfilenum31, dr160);
  L991(srcfilenum33, l52):
    thisline32 = ld thisline;
    check L993() else D313();
  L1001():
    dr162 = tryDispatchBuiltin.0("[<-", l53, srcline37);
    dc81 = getTryDispatchBuiltinDispatched(dr162);
    if dc81 then L1003() else L1002(srcline37, dr162);
  L1002(srcline39, l55):
    thisline36 = ld thisline;
    check L1004() else D319();
  L1018():
    dx173 = getTryDispatchBuiltinValue(dr166);
    goto L1015(dx173);
  L1021(c244, dx176):
    c245 = `as.logical`(dx176);
    c246 = `&&`(c244, c245);
    goto L192(c246);
  L1022():
    dr168 = tryDispatchBuiltin.1("$", options170);
    dc84 = getTryDispatchBuiltinDispatched(dr168);
    if dc84 then L1024() else L1023(c237, dr168);
  L1023(c242, options172):
    r536 = `$`(options172, <sym split>);
    goto L1021(c242, r536);
  L1027():
    p88 = prom<V +>{
      chunkout39 = ld chunkout;
      chunkout40 = force? chunkout39;
      checkMissing(chunkout40);
      return chunkout40;
    };
    r538 = dyn close1(p88);
    check L1028() else D326();
  L1030():
    options174 = force? options173;
    checkMissing(options174);
    c249 = `is.object`(options174);
    if c249 then L1032() else L1033(options174);
  D189():
    deopt 737 [i38];
  D214():
    deopt 833 [i77, r375];
  D313():
    deopt 1220 [srcfilenum33, l52, srcfilenum31, thisline32];
  D314():
    deopt 1226 [thisline34];
  D319():
    deopt 1244 [srcline39, l55, srcline37, thisline36];
  D320():
    deopt 1250 [srcfilenum36];
  D326():
    deopt 1278 [r538];
  L716():
    dx107 = getTryDispatchBuiltinValue(dr100);
    goto L119(i34, dx107);
  L717():
    p48 = prom<V +>{
      srcfile2 = ld srcfile;
      srcfile3 = force? srcfile2;
      checkMissing(srcfile3);
      return srcfile3;
    };
    p49 = prom<V +>{
      lastshown = ld lastshown;
      lastshown1 = force? lastshown;
      checkMissing(lastshown1);
      r335 = `+`(lastshown1, 1);
      return r335;
    };
    p50 = prom<V +>{
      showto = ld showto;
      showto1 = force? showto;
      checkMissing(showto1);
      return showto1;
    };
    p51 = prom<V +>{
      ce = ld ce;
      ce1 = force? ce;
      checkMissing(ce1);
      return ce1;
    };
    r339 = dyn trySrcLines(p48, p49, p50, p51);
    check L718() else D190();
  L772():
    goto L133(i77);
  L775(i84, dx122):
    c152 = `as.logical`(dx122);
    if c152 then L779() else L134(i84, c152);
  L776():
    dr114 = tryDispatchBuiltin.1("$", options130);
    dc57 = getTryDispatchBuiltinDispatched(dr114);
    if dc57 then L778() else L777(i80, dr114);
  L777(i82, options132):
    r377 = `$`(options132, <sym echo>);
    goto L775(i82, r377);
  L992():
    dx167 = getTryDispatchBuiltinValue(dr160);
    goto L185(dx167);
  L993():
    thisline33 = force? thisline32;
    checkMissing(thisline33);
    r521 = `+`(thisline33, <int 1, 2>);
    ___12 = ldf `[<-` in base;
    r522 = dyn ___12(l52, srcfilenum31, r521);
    goto L185(r522);
  L994():
    thisline35 = force? thisline34;
    checkMissing(thisline35);
    r523 = `+`(thisline35, 2);
    st thisline = r523;
    goto L186();
  L1003():
    dx169 = getTryDispatchBuiltinValue(dr162);
    goto L188(dx169);
  L1004():
    thisline37 = force? thisline36;
    checkMissing(thisline37);
    r527 = `+`(thisline37, 1);
    ___13 = ldf `[<-` in base;
    r528 = dyn ___13(l55, srcline37, r527);
    goto L188(r528);
  L1005():
    srcfilenum37 = force? srcfilenum36;
    checkMissing(srcfilenum37);
    l56 = ld filenumout;
    c234 = `is.object`(l56);
    if c234 then L1006() else L1007(srcfilenum37, l56);
  L1024():
    dx175 = getTryDispatchBuiltinValue(dr168);
    goto L1021(c237, dx175);
  L1028():
    goto L194();
  L1031(dx178):
    c250 = `as.logical`(dx178);
    if c250 then L1035() else L195(c250);
  L1032():
    dr170 = tryDispatchBuiltin.1("$", options174);
    dc85 = getTryDispatchBuiltinDispatched(dr170);
    if dc85 then L1034() else L1033(dr170);
  L1033(options176):
    r540 = `$`(options176, <sym split>);
    goto L1031(r540);
  D190():
    deopt 742 [i38, r339];
  L134(i86, c154):
    c161 = `as.logical`(c154);
    if c161 then L785() else L136();
  L189(dx172):
    st filenumout = dx172;
    thisline40 = ld thisline;
    check L1010() else D322();
  L195(c252):
    c261 = `as.logical`(c252);
    if c261 then L1042() else L196();
  L718():
    st dce = r339;
    showfrom = ld showfrom;
    check L719() else D191();
  L778():
    dx121 = getTryDispatchBuiltinValue(dr114);
    goto L775(i80, dx121);
  L779():
    sym48 = ldf length;
    base48 = ldf length in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L780() else L781();
  L1006():
    dr164 = tryDispatchBuiltin.0("[<-", l56, srcfilenum37);
    dc82 = getTryDispatchBuiltinDispatched(dr164);
    if dc82 then L1008() else L1007(srcfilenum37, dr164);
  L1007(srcfilenum39, l58):
    thisline38 = ld thisline;
    check L1009() else D321();
  L1034():
    dx177 = getTryDispatchBuiltinValue(dr170);
    goto L1031(dx177);
  L1035():
    options177 = ld options;
    check L1036() else D328();
  D191():
    deopt 744 [i38, showfrom];
  D321():
    deopt 1253 [srcfilenum39, l58, srcfilenum37, thisline38];
  D322():
    deopt 1259 [thisline40];
  D328():
    deopt 1284 [c250, options177];
  L135(i89, c157, r379):
    c158 = `as.logical`(r379);
    c159 = `&&`(c157, c158);
    goto L134(i89, c159);
  L136():
    goto L137(i86);
  L137(i93):
    options133 = ld options;
    check L789() else D220();
  L196():
    goto L199();
  L199():
    sym57 = ldf length;
    base57 = ldf length in base;
    guard57 = `==`.4(sym57, base57);
    if guard57 then L1057() else L1058();
  L719():
    showfrom1 = force? showfrom;
    checkMissing(showfrom1);
    lastshown2 = ld lastshown;
    check L720() else D192();
  L780():
    dce18 = ld dce;
    check L782() else D216();
  L781():
    r378 = dyn base48(<sym dce>);
    goto L135(i84, c152, r378);
  L785():
    putSinput = ldf putSinput;
    check L786() else D218();
  L1008():
    dx171 = getTryDispatchBuiltinValue(dr164);
    goto L189(dx171);
  L1009():
    thisline39 = force? thisline38;
    checkMissing(thisline39);
    r529 = `+`(thisline39, 1);
    ___14 = ldf `[<-` in base;
    r530 = dyn ___14(l58, srcfilenum37, r529);
    goto L189(r530);
  L1010():
    thisline41 = force? thisline40;
    checkMissing(thisline41);
    r531 = `+`(thisline41, 1);
    st thisline = r531;
    goto L190();
  L1036():
    options178 = force? options177;
    checkMissing(options178);
    c253 = `is.object`(options178);
    if c253 then L1038() else L1039(c250, options178);
  L1042():
    cat25 = ldf cat;
    check L1043() else D329();
  D192():
    deopt 745 [i38, showfrom1, lastshown2];
  D216():
    deopt 841 [i84, c152, dce18];
  D218():
    deopt 847 [i86];
  D220():
    deopt 853 [i93, options133];
  D329():
    deopt 1289 [];
  L200(r553):
    c265 = `as.logical`(r553);
    if c265 then L1061() else L201();
  L720():
    lastshown3 = force? lastshown2;
    checkMissing(lastshown3);
    r340 = `-`(showfrom1, lastshown3);
    st leading = r340;
    showto2 = ld showto;
    check L721() else D193();
  L782():
    dce19 = force? dce18;
    checkMissing(dce19);
    length4 = ldf length in base;
    r380 = dyn length4(dce19);
    check L783() else D217();
  L786():
    p58 = prom<V +>{
      dce20 = ld dce;
      dce21 = force? dce20;
      checkMissing(dce21);
      return dce21;
    };
    p59 = prom<V +>{
      leading16 = ld leading;
      leading17 = force? leading16;
      checkMissing(leading17);
      return leading17;
    };
    r383 = dyn putSinput(p58, p59);
    check L787() else D219();
  L789():
    options134 = force? options133;
    checkMissing(options134);
    c162 = `is.object`(options134);
    if c162 then L791() else L792(i93, options134);
  L1037(c257, dx180):
    c258 = `as.logical`(dx180);
    c259 = `&&`(c257, c258);
    goto L195(c259);
  L1038():
    dr172 = tryDispatchBuiltin.1("$", options178);
    dc86 = getTryDispatchBuiltinDispatched(dr172);
    if dc86 then L1040() else L1039(c250, dr172);
  L1039(c255, options180):
    r541 = `$`(options180, <sym include>);
    goto L1037(c255, r541);
  L1043():
    p89 = prom<V +>{
      chunkprefix12 = ld chunkprefix;
      chunkprefix13 = force? chunkprefix12;
      checkMissing(chunkprefix13);
      return chunkprefix13;
    };
    p90 = prom<V +>{
      object27 = ld object;
      object28 = force? object27;
      checkMissing(object28);
      c262 = `is.object`(object28);
      if c262 then L1() else L2(object28);
    L0(dx182):
      return dx182;
    L1():
      dr174 = tryDispatchBuiltin.1("$", object28);
      dc87 = getTryDispatchBuiltinDispatched(dr174);
      if dc87 then L3() else L2(dr174);
    L2(object30):
      r543 = `$`(object30, <sym output>);
      goto L0(r543);
    L3():
      dx181 = getTryDispatchBuiltinValue(dr174);
      goto L0(dx181);
    };
    r545 = dyn cat25[, , , sep, file]("\\input{", p89, "}\n", "", p90);
    check L1044() else D330();
  L1057():
    devs18 = ld devs;
    check L1059() else D336();
  L1058():
    r552 = dyn base57(<sym devs>);
    goto L200(r552);
  D193():
    deopt 749 [i38, showto2];
  D217():
    deopt 844 [i84, c152, r380];
  D219():
    deopt 850 [i86, r383];
  D330():
    deopt 1297 [r545];
  D336():
    deopt 1325 [devs18];
  L201():
    goto L219();
  L219():
    sym59 = ldf c;
    base59 = ldf c in base;
    guard59 = `==`.4(sym59, base59);
    if guard59 then L1123() else L1124();
  L721():
    showto3 = force? showto2;
    checkMissing(showto3);
    st lastshown = showto3;
    srcref8 = ld srcref;
    check L722() else D194();
  L783():
    goto L135(i84, c152, r380);
  L787():
    goto L137(i86);
  L790(i97, dx124):
    c163 = `as.logical`(dx124);
    if c163 then L794() else L138();
  L791():
    dr116 = tryDispatchBuiltin.1("$", options134);
    dc58 = getTryDispatchBuiltinDispatched(dr116);
    if dc58 then L793() else L792(i93, dr116);
  L792(i95, options136):
    r385 = `$`(options136, <sym eval>);
    goto L790(i95, r385);
  L1040():
    dx179 = getTryDispatchBuiltinValue(dr172);
    goto L1037(c250, dx179);
  L1044():
    srcline42 = ld srcline;
    check L1045() else D331();
  L1059():
    devs19 = force? devs18;
    checkMissing(devs19);
    length9 = ldf length in base;
    r554 = dyn length9(devs19);
    check L1060() else D337();
  L1061():
    options181 = ld options;
    check L1062() else D338();
  D194():
    deopt 752 [i38, srcref8];
  D331():
    deopt 1298 [srcline42];
  D337():
    deopt 1328 [r554];
  D338():
    deopt 1329 [options181];
  L138():
    st output = NULL;
    goto L145(i97);
  L145(i116):
    sym51 = ldf length;
    base51 = ldf length in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L823() else L824();
  L220(r597):
    l72 = ld object;
    c289 = `is.object`(l72);
    if c289 then L1133() else L1134(r597, l72);
  L722():
    srcref9 = force? srcref8;
    checkMissing(srcref9);
    c134 = `is.object`(srcref9);
    if c134 then L723() else L724(i38, srcref9);
  L793():
    dx123 = getTryDispatchBuiltinValue(dr116);
    goto L790(i93, dx123);
  L794():
    file1 = ldf file;
    check L795() else D221();
  L1045():
    srcline43 = force? srcline42;
    checkMissing(srcline43);
    l59 = ld linesout;
    c263 = `is.object`(l59);
    if c263 then L1046() else L1047(srcline43, l59);
  L1060():
    goto L200(r554);
  L1062():
    options182 = force? options181;
    checkMissing(options182);
    c266 = `is.object`(options182);
    if c266 then L1064() else L1065(options182);
  L1123():
    object35 = ld object;
    check L1125() else D360();
  L1124():
    r596 = dyn base59(<lang `$`(object, linesout)>, <sym linesout>);
    goto L220(r596);
  D221():
    deopt 857 [i97];
  D360():
    deopt 1433 [object35];
  L120(i42, dx110):
    st srcline = dx110;
    startsWith = ldf startsWith;
    check L726() else D195();
  L146(i119, r416):
    c179 = `as.logical`(r416);
    if c179 then L827() else L147(i119, c179);
  L197(dx184):
    st linesout = dx184;
    srcfilenum42 = ld srcfilenum;
    check L1050() else D333();
  L723():
    dr102 = tryDispatchBuiltin.1("[", srcref9);
    dc51 = getTryDispatchBuiltinDispatched(dr102);
    if dc51 then L725() else L724(i38, dr102);
  L724(i40, srcref11):
    __19 = ldf `[` in base;
    r341 = dyn __19(srcref11, 3);
    goto L120(i40, r341);
  L795():
    r386 = dyn file1();
    check L796() else D222();
  L823():
    output6 = ld output;
    check L825() else D237();
  L824():
    r415 = dyn base51(<sym output>);
    goto L146(i116, r415);
  L1046():
    dr176 = tryDispatchBuiltin.0("[<-", l59, srcline43);
    dc88 = getTryDispatchBuiltinDispatched(dr176);
    if dc88 then L1048() else L1047(srcline43, dr176);
  L1047(srcline45, l61):
    thisline42 = ld thisline;
    check L1049() else D332();
  L1063(dx188):
    c267 = `as.logical`(dx188);
    if c267 then L1067() else L202();
  L1064():
    dr180 = tryDispatchBuiltin.1("$", options182);
    dc90 = getTryDispatchBuiltinDispatched(dr180);
    if dc90 then L1066() else L1065(dr180);
  L1065(options184):
    r555 = `$`(options184, <sym figs.only>);
    goto L1063(r555);
  L1125():
    object36 = force? object35;
    checkMissing(object36);
    c287 = `is.object`(object36);
    if c287 then L1127() else L1128(object36);
  L1132(dx215):
    st object = dx215;
    sym60 = ldf c;
    base60 = ldf c in base;
    guard60 = `==`.4(sym60, base60);
    if guard60 then L1136() else L1137();
  L1133():
    dr204 = tryDispatchBuiltin.0("$<-", l72, r597);
    dc102 = getTryDispatchBuiltinDispatched(dr204);
    if dc102 then L1135() else L1134(r597, dr204);
  L1134(r601, l74):
    r604 = `$<-`(l74, <sym linesout>, r597);
    goto L1132(r604);
  D195():
    deopt 759 [i42];
  D222():
    deopt 858 [i97, r386];
  D237():
    deopt 915 [i116, output6];
  D332():
    deopt 1301 [srcline45, l61, srcline43, thisline42];
  D333():
    deopt 1307 [srcfilenum42];
  L147(i121, c181):
    c190 = `as.logical`(c181);
    if c190 then L834() else L148();
  L202():
    goto L204();
  L204():
    sym58 = ldf seq_along;
    base58 = ldf seq_along in base;
    guard58 = `==`.4(sym58, base58);
    if guard58 then L1074() else L1075();
  L221(r606):
    l75 = ld object;
    c292 = `is.object`(l75);
    if c292 then L1146() else L1147(r606, l75);
  L725():
    dx109 = getTryDispatchBuiltinValue(dr102);
    goto L120(i38, dx109);
  L726():
    p52 = prom<V +>{
      dce = ld dce;
      dce1 = force? dce;
      checkMissing(dce1);
      return dce1;
    };
    r343 = dyn startsWith(p52, "#line ");
    check L727() else D196();
  L796():
    st tmpcon = r386;
    sink = ldf sink;
    check L797() else D223();
  L825():
    output7 = force? output6;
    checkMissing(output7);
    length6 = ldf length in base;
    r417 = dyn length6(output7);
    check L826() else D238();
  L827():
    object23 = ld object;
    check L828() else D239();
  L1048():
    dx183 = getTryDispatchBuiltinValue(dr176);
    goto L197(dx183);
  L1049():
    thisline43 = force? thisline42;
    checkMissing(thisline43);
    r546 = `+`(thisline43, 1);
    ___15 = ldf `[<-` in base;
    r547 = dyn ___15(l61, srcline43, r546);
    goto L197(r547);
  L1050():
    srcfilenum43 = force? srcfilenum42;
    checkMissing(srcfilenum43);
    l62 = ld filenumout;
    c264 = `is.object`(l62);
    if c264 then L1051() else L1052(srcfilenum43, l62);
  L1066():
    dx187 = getTryDispatchBuiltinValue(dr180);
    goto L1063(dx187);
  L1067():
    devoffs12 = ld devoffs;
    check L1068() else D339();
  L1126(dx213):
    linesout = ld linesout;
    check L1130() else D361();
  L1127():
    dr202 = tryDispatchBuiltin.1("$", object36);
    dc101 = getTryDispatchBuiltinDispatched(dr202);
    if dc101 then L1129() else L1128(dr202);
  L1128(object38):
    r598 = `$`(object38, <sym linesout>);
    goto L1126(r598);
  L1135():
    dx214 = getTryDispatchBuiltinValue(dr204);
    goto L1132(dx214);
  L1136():
    object39 = ld object;
    check L1138() else D363();
  L1137():
    r605 = dyn base60(<lang `$`(object, filenumout)>, <sym filenumout>);
    goto L221(r605);
  D196():
    deopt 762 [i42, r343];
  D223():
    deopt 861 [i97];
  D238():
    deopt 918 [i116, r417];
  D239():
    deopt 919 [i119, c179, object23];
  D339():
    deopt 1332 [devoffs12];
  D361():
    deopt 1436 [linesout];
  D363():
    deopt 1445 [object39];
  L148():
    goto L149(i121);
  L149(i129):
    sym52 = ldf length;
    base52 = ldf length in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L838() else L839();
  L198(dx186):
    st filenumout = dx186;
    thisline46 = ld thisline;
    check L1055() else D335();
  L205(r560):
    s1 = toForSeq(r560);
    l65 = length(s1);
    i223 = 0;
    goto L208(i223);
  L727():
    st linedirs = r343;
    dce2 = ld dce;
    check L728() else D197();
  L797():
    p60 = prom<V +>{
      tmpcon = ld tmpcon;
      tmpcon1 = force? tmpcon;
      checkMissing(tmpcon1);
      return tmpcon1;
    };
    r388 = dyn sink[file](p60);
    check L798() else D224();
  L826():
    goto L146(i116, r417);
  L828():
    object24 = force? object23;
    checkMissing(object24);
    c182 = `is.object`(object24);
    if c182 then L830() else L831(i119, c179, object24);
  L834():
    cat17 = ldf cat;
    check L835() else D240();
  L1051():
    dr178 = tryDispatchBuiltin.0("[<-", l62, srcfilenum43);
    dc89 = getTryDispatchBuiltinDispatched(dr178);
    if dc89 then L1053() else L1052(srcfilenum43, dr178);
  L1052(srcfilenum45, l64):
    thisline44 = ld thisline;
    check L1054() else D334();
  L1068():
    devoffs13 = force? devoffs12;
    checkMissing(devoffs13);
    c268 = `is.object`(devoffs13);
    if c268 then L1069() else L1070(devoffs13);
  L1074():
    devs20 = ld devs;
    check L1076() else D341();
  L1075():
    r559 = dyn base58(<sym devs>);
    goto L205(r559);
  L1129():
    dx212 = getTryDispatchBuiltinValue(dr202);
    goto L1126(dx212);
  L1130():
    linesout1 = force? linesout;
    checkMissing(linesout1);
    c288 = ldf c in base;
    r599 = dyn c288(dx213, linesout1);
    check L1131() else D362();
  L1138():
    object40 = force? object39;
    checkMissing(object40);
    c290 = `is.object`(object40);
    if c290 then L1140() else L1141(object40);
  L1145(dx219):
    st object = dx219;
    object43 = ld object;
    check L1149() else D366();
  L1146():
    dr208 = tryDispatchBuiltin.0("$<-", l75, r606);
    dc104 = getTryDispatchBuiltinDispatched(dr208);
    if dc104 then L1148() else L1147(r606, dr208);
  L1147(r610, l77):
    r613 = `$<-`(l77, <sym filenumout>, r606);
    goto L1145(r613);
  D197():
    deopt 764 [i42, dce2];
  D224():
    deopt 864 [i97, r388];
  D240():
    deopt 924 [i121];
  D334():
    deopt 1310 [srcfilenum45, l64, srcfilenum43, thisline44];
  D335():
    deopt 1316 [thisline46];
  D341():
    deopt 1342 [devs20];
  D362():
    deopt 1439 [r599];
  D366():
    deopt 1455 [object43];
  L150(i132, r425):
    c191 = `as.logical`(r425);
    if c191 then L842() else L151(i132, c191);
  L203(dx190):
    checkFun.0(dx190);
    dx191 = dx190 as cls;
    r557 = dyn dx191();
    check L1072() else D340();
  L208(i224):
    i225 = `+`.1(i224, 1);
    c269 = `<`.1(l65, i225);
    if c269 then L207() else L214();
  L728():
    dce3 = force? dce2;
    checkMissing(dce3);
    c135 = `is.object`(dce3);
    if c135 then L729() else L730(i42, dce3);
  L798():
    tryCatch1 = ldf tryCatch;
    check L799() else D225();
  L829(i125, c186, dx128):
    c187 = `as.logical`(dx128);
    c188 = `&&`(c186, c187);
    goto L147(i125, c188);
  L830():
    dr120 = tryDispatchBuiltin.1("$", object24);
    dc60 = getTryDispatchBuiltinDispatched(dr120);
    if dc60 then L832() else L831(i119, c179, dr120);
  L831(i123, c184, object26):
    r418 = `$`(object26, <sym debug>);
    goto L829(i123, c184, r418);
  L835():
    p70 = prom<V +>{
      paste3 = ldf paste;
      p69 = prom<V +>{
        output8 = ld output;
        output9 = force? output8;
        checkMissing(output9);
        return output9;
      };
      r420 = dyn paste3[, collapse](p69, "\n");
      return r420;
    };
    r422 = dyn cat17(p70);
    check L836() else D241();
  L838():
    output10 = ld output;
    check L840() else D242();
  L839():
    r424 = dyn base52(<sym output>);
    goto L150(i129, r424);
  L1053():
    dx185 = getTryDispatchBuiltinValue(dr178);
    goto L198(dx185);
  L1054():
    thisline45 = force? thisline44;
    checkMissing(thisline45);
    r548 = `+`(thisline45, 1);
    ___16 = ldf `[<-` in base;
    r549 = dyn ___16(l64, srcfilenum43, r548);
    goto L198(r549);
  L1055():
    thisline47 = force? thisline46;
    checkMissing(thisline47);
    r550 = `+`(thisline47, 1);
    st thisline = r550;
    goto L199();
  L1069():
    dr182 = tryDispatchBuiltin.1("[[", devoffs13);
    dc91 = getTryDispatchBuiltinDispatched(dr182);
    if dc91 then L1071() else L1070(dr182);
  L1070(devoffs15):
    __26 = ldf `[[` in base;
    r556 = dyn __26(devoffs15, 1);
    goto L203(r556);
  L1076():
    devs21 = force? devs20;
    checkMissing(devs21);
    r561 = seq_along(devs21);
    goto L205(r561);
  L1131():
    goto L220(r599);
  L1139(dx217):
    filenumout = ld filenumout;
    check L1143() else D364();
  L1140():
    dr206 = tryDispatchBuiltin.1("$", object40);
    dc103 = getTryDispatchBuiltinDispatched(dr206);
    if dc103 then L1142() else L1141(dr206);
  L1141(object42):
    r607 = `$`(object42, <sym filenumout>);
    goto L1139(r607);
  L1148():
    dx218 = getTryDispatchBuiltinValue(dr208);
    goto L1145(dx218);
  L1149():
    object44 = force? object43;
    checkMissing(object44);
    popenv;
    return object44;
  D225():
    deopt 866 [i97];
  D241():
    deopt 926 [i121, r422];
  D242():
    deopt 931 [i129, output10];
  D340():
    deopt 1338 [r557];
  D364():
    deopt 1448 [filenumout];
  L121(i46, dx112):
    st dce = dx112;
    leading = ld leading;
    check L733() else D199();
  L151(i134, c193):
    c202 = `as.logical`(c193);
    if c202 then L849() else L152();
  L207():
    options201 = ld options;
    check L1102() else D352();
  L214():
    x1 = `[[`(s1, i225, NULL, TRUE);
    st i = x1;
    options185 = ld options;
    check L1077() else D342();
  L729():
    dr104 = tryDispatchBuiltin.1("[", dce3);
    dc52 = getTryDispatchBuiltinDispatched(dr104);
    if dc52 then L731() else L730(i42, dr104);
  L730(i44, dce5):
    linedirs = ld linedirs;
    check L732() else D198();
  L799():
    p63 = prom<V +>{
      evalFunc = ldf evalFunc;
      p61 = prom<V +>{
        ce4 = ld ce;
        ce5 = force? ce4;
        checkMissing(ce5);
        return ce5;
      };
      p62 = prom<V +>{
        options137 = ld options;
        options138 = force? options137;
        checkMissing(options138);
        return options138;
      };
      r391 = dyn evalFunc(p61, p62);
      return r391;
    };
    p64 = prom<V +>{
      cat16 = ldf cat;
      dyn cat16("\n");
      sink1 = ldf sink;
      r394 = dyn sink1();
      return r394;
    };
    r396 = dyn tryCatch1[, finally](p63, p64);
    check L800() else D226();
  L832():
    dx127 = getTryDispatchBuiltinValue(dr120);
    goto L829(i119, c179, dx127);
  L836():
    goto L149(i121);
  L840():
    output11 = force? output10;
    checkMissing(output11);
    length7 = ldf length in base;
    r426 = dyn length7(output11);
    check L841() else D243();
  L842():
    options141 = ld options;
    check L843() else D244();
  L1071():
    dx189 = getTryDispatchBuiltinValue(dr182);
    goto L203(dx189);
  L1072():
    goto L204();
  L1142():
    dx216 = getTryDispatchBuiltinValue(dr206);
    goto L1139(dx216);
  L1143():
    filenumout1 = force? filenumout;
    checkMissing(filenumout1);
    c291 = ldf c in base;
    r608 = dyn c291(dx217, filenumout1);
    check L1144() else D365();
  D198():
    deopt 766 [i44, dce5, linedirs];
  D199():
    deopt 771 [i46, leading];
  D226():
    deopt 870 [i97, r396];
  D243():
    deopt 934 [i129, r426];
  D244():
    deopt 935 [i132, c191, options141];
  D342():
    deopt 1347 [i225, options185];
  D352():
    deopt 1391 [options201];
  D365():
    deopt 1451 [r608];
  L152():
    goto L179(i134);
  L179(i222):
    goto L110(i222);
  L731():
    dx111 = getTryDispatchBuiltinValue(dr104);
    goto L121(i42, dx111);
  L732():
    linedirs1 = force? linedirs;
    checkMissing(linedirs1);
    r344 = `!`(linedirs1);
    __20 = ldf `[` in base;
    r345 = dyn __20(dce5, r344);
    goto L121(i44, r345);
  L733():
    leading1 = force? leading;
    checkMissing(leading1);
    sym44 = ldf sum;
    base44 = ldf sum in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L734() else L735();
  L800():
    st err = r396;
    readLines = ldf readLines;
    check L801() else D227();
  L841():
    goto L150(i129, r426);
  L843():
    options142 = force? options141;
    checkMissing(options142);
    c194 = `is.object`(options142);
    if c194 then L845() else L846(i132, c191, options142);
  L849():
    openSinput = ld openSinput;
    check L850() else D245();
  L1077():
    options186 = force? options185;
    checkMissing(options186);
    c270 = `is.object`(options186);
    if c270 then L1079() else L1080(i225, options186);
  L1102():
    options202 = force? options201;
    checkMissing(options202);
    c282 = `is.object`(options202);
    if c282 then L1104() else L1105(options202);
  L1144():
    goto L221(r608);
  D227():
    deopt 873 [i97];
  D245():
    deopt 941 [i134, openSinput];
  L122(i49, leading4, r347):
    r353 = `-`(leading4, r347);
    st leading = r353;
    goto L130(i49);
  L734():
    linedirs2 = ld linedirs;
    check L736() else D200();
  L735():
    r346 = dyn base44(<lang `[`(linedirs, seq_len(leading))>);
    goto L122(i46, leading1, r346);
  L801():
    p65 = prom<V +>{
      tmpcon2 = ld tmpcon;
      tmpcon3 = force? tmpcon2;
      checkMissing(tmpcon3);
      return tmpcon3;
    };
    r398 = dyn readLines(p65);
    check L802() else D228();
  L844(i138, c198, dx130):
    r428 = `!=`(dx130, "hide");
    c199 = `as.logical`(r428);
    c200 = `&&`(c198, c199);
    goto L151(i138, c200);
  L845():
    dr122 = tryDispatchBuiltin.1("$", options142);
    dc61 = getTryDispatchBuiltinDispatched(dr122);
    if dc61 then L847() else L846(i132, c191, dr122);
  L846(i136, c196, options144):
    r427 = `$`(options144, <sym results>);
    goto L844(i136, c196, r427);
  L850():
    openSinput1 = force? openSinput;
    checkMissing(openSinput1);
    c203 = `as.logical`(openSinput1);
    if c203 then L851() else L153();
  L1078(i231, dx193):
    c271 = `as.logical`(dx193);
    if c271 then L1082() else L209(i231, c271);
  L1079():
    dr184 = tryDispatchBuiltin.1("$", options186);
    dc92 = getTryDispatchBuiltinDispatched(dr184);
    if dc92 then L1081() else L1080(i225, dr184);
  L1080(i229, options188):
    r562 = `$`(options188, <sym figs.only>);
    goto L1078(i229, r562);
  L1103(dx205):
    c283 = `as.logical`(dx205);
    if c283 then L1107() else L215();
  L1104():
    dr194 = tryDispatchBuiltin.1("$", options202);
    dc97 = getTryDispatchBuiltinDispatched(dr194);
    if dc97 then L1106() else L1105(dr194);
  L1105(options204):
    r584 = `$`(options204, <sym include>);
    goto L1103(r584);
  D200():
    deopt 774 [i46, leading1, linedirs2];
  D228():
    deopt 875 [i97, r398];
  L130(i57):
    sym46 = ldf length;
    base46 = ldf length in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L744() else L745();
  L153():
    goto L156(i134);
  L156(i152):
    options145 = ld options;
    check L866() else D253();
  L209(i233, c273):
    c277 = `as.logical`(c273);
    if c277 then L1085() else L210();
  L215():
    goto L218(NULL);
  L218(r594):
    goto L219();
  L736():
    linedirs3 = force? linedirs2;
    checkMissing(linedirs3);
    c136 = `is.object`(linedirs3);
    if c136 then L737() else L738(i46, leading1, linedirs3);
  L802():
    st output = r398;
    close = ldf close;
    check L803() else D229();
  L847():
    dx129 = getTryDispatchBuiltinValue(dr122);
    goto L844(i132, c191, dx129);
  L851():
    cat18 = ldf cat;
    check L852() else D246();
  L1081():
    dx192 = getTryDispatchBuiltinValue(dr184);
    goto L1078(i225, dx192);
  L1082():
    i234 = ld i;
    check L1083() else D343();
  L1106():
    dx204 = getTryDispatchBuiltinValue(dr194);
    goto L1103(dx204);
  L1107():
    cat26 = ldf cat;
    check L1108() else D353();
  D229():
    deopt 878 [i97];
  D246():
    deopt 944 [i134];
  D253():
    deopt 977 [i152, options145];
  D343():
    deopt 1350 [i231, c271, i234];
  D353():
    deopt 1395 [];
  L123(i53, leading8, dx114):
    sum = ldf sum in base;
    r352 = dyn sum(dx114);
    check L743() else D202();
  L125(i60, r355):
    c137 = `as.logical`(r355);
    if c137 then L748() else L126(i60, c137);
  L210():
    devs22 = ld devs;
    check L1088() else D344();
  L737():
    dr106 = tryDispatchBuiltin.1("[", linedirs3);
    dc53 = getTryDispatchBuiltinDispatched(dr106);
    if dc53 then L739() else L738(i46, leading1, dr106);
  L738(i51, leading6, linedirs5):
    sym45 = ldf seq_len;
    base45 = ldf seq_len in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L740() else L741();
  L744():
    dce6 = ld dce;
    check L746() else D203();
  L745():
    r354 = dyn base46(<sym dce>);
    goto L125(i57, r354);
  L803():
    p66 = prom<V +>{
      tmpcon4 = ld tmpcon;
      tmpcon5 = force? tmpcon4;
      checkMissing(tmpcon5);
      return tmpcon5;
    };
    r400 = dyn close(p66);
    check L804() else D230();
  L852():
    p71 = prom<V +>{
      chunkout25 = ld chunkout;
      chunkout26 = force? chunkout25;
      checkMissing(chunkout26);
      return chunkout26;
    };
    r430 = dyn cat18[, file]("\n\\end{Sinput}\n", p71);
    check L853() else D247();
  L866():
    options146 = force? options145;
    checkMissing(options146);
    c206 = `is.object`(options146);
    if c206 then L868() else L869(i152, options146);
  L1083():
    i235 = force? i234;
    checkMissing(i235);
    r563 = `==`(i235, 1.0);
    c274 = `as.logical`(r563);
    c275 = `&&`(c271, c274);
    goto L209(i231, c275);
  L1085():
    goto L208(i233);
  L1108():
    p100 = prom<V +>{
      chunkprefix16 = ld chunkprefix;
      chunkprefix17 = force? chunkprefix16;
      checkMissing(chunkprefix17);
      return chunkprefix17;
    };
    p101 = prom<V +>{
      object31 = ld object;
      object32 = force? object31;
      checkMissing(object32);
      c284 = `is.object`(object32);
      if c284 then L1() else L2(object32);
    L0(dx207):
      return dx207;
    L1():
      dr196 = tryDispatchBuiltin.1("$", object32);
      dc98 = getTryDispatchBuiltinDispatched(dr196);
      if dc98 then L3() else L2(dr196);
    L2(object34):
      r586 = `$`(object34, <sym output>);
      goto L0(r586);
    L3():
      dx206 = getTryDispatchBuiltinValue(dr196);
      goto L0(dx206);
    };
    r588 = dyn cat26[, , , sep, file]("\\includegraphics{", p100, "}\n", "", p101);
    check L1109() else D354();
  D202():
    deopt 782 [i53, leading8, r352];
  D203():
    deopt 787 [i57, dce6];
  D230():
    deopt 880 [i97, r400];
  D247():
    deopt 948 [i134, r430];
  D344():
    deopt 1359 [i233, devs22];
  D354():
    deopt 1403 [r588];
  L124(i56, leading11, linedirs8, r349):
    __21 = ldf `[` in base;
    r351 = dyn __21(linedirs8, r349);
    goto L123(i56, leading11, r351);
  L126(i62, c139):
    c147 = `as.logical`(c139);
    if c147 then L755() else L128();
  L739():
    dx113 = getTryDispatchBuiltinValue(dr106);
    goto L123(i46, leading1, dx113);
  L740():
    leading12 = ld leading;
    check L742() else D201();
  L741():
    r348 = dyn base45(<sym leading>);
    goto L124(i51, leading6, linedirs5, r348);
  L743():
    goto L122(i53, leading8, r352);
  L746():
    dce7 = force? dce6;
    checkMissing(dce7);
    length2 = ldf length in base;
    r356 = dyn length2(dce7);
    check L747() else D204();
  L748():
    sym47 = ldf length;
    base47 = ldf length in base;
    guard47 = `==`.4(sym47, base47);
    if guard47 then L749() else L750();
  L804():
    sym49 = ldf length;
    base49 = ldf length in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L805() else L806();
  L853():
    srcline = ld srcline;
    check L854() else D248();
  L867(i156, dx136):
    r438 = `==`(dx136, "verbatim");
    c207 = `as.logical`(r438);
    if c207 then L871() else L157();
  L868():
    dr128 = tryDispatchBuiltin.1("$", options146);
    dc64 = getTryDispatchBuiltinDispatched(dr128);
    if dc64 then L870() else L869(i152, dr128);
  L869(i154, options148):
    r437 = `$`(options148, <sym results>);
    goto L867(i154, r437);
  L1088():
    devs23 = force? devs22;
    checkMissing(devs23);
    c278 = `is.object`(devs23);
    if c278 then L1089() else L1090(i233, devs23);
  L1109():
    srcline48 = ld srcline;
    check L1110() else D355();
  D201():
    deopt 777 [i51, leading6, linedirs5, leading12];
  D204():
    deopt 790 [i57, r356];
  D248():
    deopt 949 [i134, srcline];
  D355():
    deopt 1404 [srcline48];
  L127(i65, c142, r358):
    c144 = `as.logical`(r358);
    c145 = `&&`(c142, c144);
    goto L126(i65, c145);
  L128():
    goto L131(i62);
  L139(i102, r402):
    r404 = `==`(r402, 1);
    c164 = `as.logical`(r404);
    if c164 then L809() else L140(i102, c164);
  L157():
    goto L164(i156);
  L164(i178):
    paste4 = ldf paste;
    check L902() else D269();
  L212(i244, dx195):
    checkFun.0(dx195);
    dx196 = dx195 as cls;
    p91 = prom<V +>{
      chunkprefix14 = ld chunkprefix;
      chunkprefix15 = force? chunkprefix14;
      checkMissing(chunkprefix15);
      return chunkprefix15;
    };
    p92 = prom<V +>{
      options189 = ld options;
      options190 = force? options189;
      checkMissing(options190);
      c279 = `is.object`(options190);
      if c279 then L1() else L2(options190);
    L0(dx198):
      return dx198;
    L1():
      dr188 = tryDispatchBuiltin.1("$", options190);
      dc94 = getTryDispatchBuiltinDispatched(dr188);
      if dc94 then L3() else L2(dr188);
    L2(options192):
      r567 = `$`(options192, <sym width>);
      goto L0(r567);
    L3():
      dx197 = getTryDispatchBuiltinValue(dr188);
      goto L0(dx197);
    };
    p93 = prom<V +>{
      options193 = ld options;
      options194 = force? options193;
      checkMissing(options194);
      c280 = `is.object`(options194);
      if c280 then L1() else L2(options194);
    L0(dx200):
      return dx200;
    L1():
      dr190 = tryDispatchBuiltin.1("$", options194);
      dc95 = getTryDispatchBuiltinDispatched(dr190);
      if dc95 then L3() else L2(dr190);
    L2(options196):
      r569 = `$`(options196, <sym height>);
      goto L0(r569);
    L3():
      dx199 = getTryDispatchBuiltinValue(dr190);
      goto L0(dx199);
    };
    p94 = prom<V +>{
      options197 = ld options;
      options198 = force? options197;
      checkMissing(options198);
      return options198;
    };
    r572 = dyn dx196[name, width, height, ](p91, p92, p93, p94);
    check L1093() else D346();
  L742():
    leading13 = force? leading12;
    checkMissing(leading13);
    r350 = seq_len(leading13);
    goto L124(i51, leading6, linedirs5, r350);
  L747():
    goto L125(i57, r356);
  L749():
    grep = ldf grep;
    check L751() else D205();
  L750():
    r357 = dyn base47(<lang grep("^[[:blank:]]*$", `[`(dce, 1))>);
    goto L127(i60, c137, r357);
  L755():
    dce12 = ld dce;
    check L756() else D208();
  L805():
    output = ld output;
    check L807() else D231();
  L806():
    r401 = dyn base49(<sym output>);
    goto L139(i97, r401);
  L854():
    srcline1 = force? srcline;
    checkMissing(srcline1);
    l17 = ld linesout;
    c204 = `is.object`(l17);
    if c204 then L855() else L856(i134, srcline1, l17);
  L870():
    dx135 = getTryDispatchBuiltinValue(dr128);
    goto L867(i152, dx135);
  L871():
    openSchunk = ld openSchunk;
    check L872() else D254();
  L1089():
    dr186 = tryDispatchBuiltin.1("[[", devs23);
    dc93 = getTryDispatchBuiltinDispatched(dr186);
    if dc93 then L1091() else L1090(i233, dr186);
  L1090(i242, devs25):
    i245 = ld i;
    check L1092() else D345();
  L1110():
    srcline49 = force? srcline48;
    checkMissing(srcline49);
    l66 = ld linesout;
    c285 = `is.object`(l66);
    if c285 then L1111() else L1112(srcline49, l66);
  D205():
    deopt 794 [i60, c137];
  D208():
    deopt 801 [i62, dce12];
  D231():
    deopt 883 [i97, output];
  D254():
    deopt 982 [i156, openSchunk];
  D269():
    deopt 1051 [i178];
  D345():
    deopt 1361 [i242, devs25, i245];
  D346():
    deopt 1372 [i244, r572];
  L140(i104, c166):
    c178 = `as.logical`(c166);
    if c178 then L818() else L143();
  L154(i147, dx132):
    st linesout = dx132;
    srcfilenum = ld srcfilenum;
    check L859() else D250();
  L216(dx209):
    st linesout = dx209;
    srcfilenum48 = ld srcfilenum;
    check L1115() else D357();
  L751():
    p53 = prom<V +>{
      dce8 = ld dce;
      dce9 = force? dce8;
      checkMissing(dce9);
      c143 = `is.object`(dce9);
      if c143 then L1() else L2(dce9);
    L0(dx116):
      return dx116;
    L1():
      dr108 = tryDispatchBuiltin.1("[", dce9);
      dc54 = getTryDispatchBuiltinDispatched(dr108);
      if dc54 then L3() else L2(dr108);
    L2(dce11):
      __22 = ldf `[` in base;
      r359 = dyn __22(dce11, 1);
      goto L0(r359);
    L3():
      dx115 = getTryDispatchBuiltinValue(dr108);
      goto L0(dx115);
    };
    r361 = dyn grep("^[[:blank:]]*$", p53);
    check L752() else D206();
  L756():
    dce13 = force? dce12;
    checkMissing(dce13);
    c148 = `is.object`(dce13);
    if c148 then L757() else L758(i62, dce13);
  L807():
    output1 = force? output;
    checkMissing(output1);
    length5 = ldf length in base;
    r403 = dyn length5(output1);
    check L808() else D232();
  L809():
    sym50 = ldf nzchar;
    base50 = ldf nzchar in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L810() else L811();
  L855():
    dr124 = tryDispatchBuiltin.0("[<-", l17, srcline1);
    dc62 = getTryDispatchBuiltinDispatched(dr124);
    if dc62 then L857() else L856(i134, srcline1, dr124);
  L856(i145, srcline3, l19):
    thisline = ld thisline;
    check L858() else D249();
  L872():
    openSchunk1 = force? openSchunk;
    checkMissing(openSchunk1);
    r439 = `!`(openSchunk1);
    c208 = `as.logical`(r439);
    if c208 then L873() else L158();
  L902():
    p74 = prom<V +>{
      output12 = ld output;
      output13 = force? output12;
      checkMissing(output13);
      return output13;
    };
    r457 = dyn paste4[, collapse](p74, "\n");
    check L903() else D270();
  L1091():
    dx194 = getTryDispatchBuiltinValue(dr186);
    goto L212(i233, dx194);
  L1092():
    i246 = force? i245;
    __27 = ldf `[[` in base;
    r565 = dyn __27(devs25, i246);
    goto L212(i242, r565);
  L1093():
    tryCatch2 = ldf tryCatch;
    check L1094() else D347();
  L1111():
    dr198 = tryDispatchBuiltin.0("[<-", l66, srcline49);
    dc99 = getTryDispatchBuiltinDispatched(dr198);
    if dc99 then L1113() else L1112(srcline49, dr198);
  L1112(srcline51, l68):
    thisline48 = ld thisline;
    check L1114() else D356();
  D206():
    deopt 797 [i60, c137, r361];
  D232():
    deopt 886 [i97, r403];
  D249():
    deopt 952 [i145, srcline3, l19, srcline1, thisline];
  D250():
    deopt 958 [i147, srcfilenum];
  D270():
    deopt 1055 [i178, r457];
  D347():
    deopt 1374 [i244];
  D356():
    deopt 1407 [srcline51, l68, srcline49, thisline48];
  D357():
    deopt 1413 [srcfilenum48];
  L129(i72, dx118):
    st dce = dx118;
    leading14 = ld leading;
    check L760() else D209();
  L141(i107, c169, r406):
    r409 = `!`(r406);
    c175 = `as.logical`(r409);
    c176 = `&&`(c169, c175);
    goto L140(i107, c176);
  L143():
    goto L144(i104);
  L144(i115):
    RweaveTryStop1 = ldf RweaveTryStop;
    check L820() else D235();
  L158():
    goto L161(i156);
  L161(i169):
    cat20 = ldf cat;
    check L888() else D262();
  L752():
    length3 = ldf length in base;
    r362 = dyn length3(r361);
    check L753() else D207();
  L757():
    dr110 = tryDispatchBuiltin.1("[", dce13);
    dc55 = getTryDispatchBuiltinDispatched(dr110);
    if dc55 then L759() else L758(i62, dr110);
  L758(i70, dce15):
    __23 = ldf `[` in base;
    r363 = dyn __23(dce15, -1);
    goto L129(i70, r363);
  L808():
    goto L139(i97, r403);
  L810():
    output2 = ld output;
    check L812() else D233();
  L811():
    r405 = dyn base50(<lang `[`(output, 1)>);
    goto L141(i102, c164, r405);
  L818():
    st output = NULL;
    goto L144(i104);
  L857():
    dx131 = getTryDispatchBuiltinValue(dr124);
    goto L154(i134, dx131);
  L858():
    thisline1 = force? thisline;
    checkMissing(thisline1);
    r431 = `+`(thisline1, <int 1, 2>);
    ___1 = ldf `[<-` in base;
    r432 = dyn ___1(l19, srcline1, r431);
    goto L154(i145, r432);
  L859():
    srcfilenum1 = force? srcfilenum;
    checkMissing(srcfilenum1);
    l20 = ld filenumout;
    c205 = `is.object`(l20);
    if c205 then L860() else L861(i147, srcfilenum1, l20);
  L873():
    cat19 = ldf cat;
    check L874() else D255();
  L903():
    st output = r457;
    _in_1 = ldf `%in%`;
    check L904() else D271();
  L1094():
    p98 = prom<V +>{
      SweaveHooks1 = ldf SweaveHooks;
      p95 = prom<V +>{
        options199 = ld options;
        options200 = force? options199;
        checkMissing(options200);
        return options200;
      };
      dyn SweaveHooks1[, run](p95, TRUE);
      eval2 = ldf eval;
      p96 = prom<V +>{
        chunkexps16 = ld chunkexps;
        chunkexps17 = force? chunkexps16;
        checkMissing(chunkexps17);
        return chunkexps17;
      };
      p97 = prom<V +>{
        _GlobalEnv6 = ld `.GlobalEnv`;
        _GlobalEnv7 = force? _GlobalEnv6;
        checkMissing(_GlobalEnv7);
        return _GlobalEnv7;
      };
      r577 = dyn eval2[, envir](p96, p97);
      return r577;
    };
    p99 = prom<V +>{
      r579 = clos inner3708401697;
      return r579;
    };
    r581 = dyn tryCatch2[, error](p98, p99);
    check L1095() else D348();
  L1113():
    dx208 = getTryDispatchBuiltinValue(dr198);
    goto L216(dx208);
  L1114():
    thisline49 = force? thisline48;
    checkMissing(thisline49);
    r589 = `+`(thisline49, 1);
    ___17 = ldf `[<-` in base;
    r590 = dyn ___17(l68, srcline49, r589);
    goto L216(r590);
  L1115():
    srcfilenum49 = force? srcfilenum48;
    checkMissing(srcfilenum49);
    l69 = ld filenumout;
    c286 = `is.object`(l69);
    if c286 then L1116() else L1117(srcfilenum49, l69);
  D207():
    deopt 799 [i60, c137, r362];
  D209():
    deopt 807 [i72, leading14];
  D233():
    deopt 891 [i102, c164, output2];
  D235():
    deopt 906 [i115];
  D255():
    deopt 986 [i156];
  D262():
    deopt 1020 [i169];
  D271():
    deopt 1058 [i178];
  D348():
    deopt 1378 [i244, r581];
  L155(i151, dx134):
    st filenumout = dx134;
    thisline4 = ld thisline;
    check L864() else D252();
  L217(dx211):
    st filenumout = dx211;
    thisline52 = ld thisline;
    check L1120() else D359();
  L753():
    goto L127(i60, c137, r362);
  L759():
    dx117 = getTryDispatchBuiltinValue(dr110);
    goto L129(i62, dx117);
  L760():
    leading15 = force? leading14;
    checkMissing(leading15);
    r364 = `-`(leading15, 1);
    st leading = r364;
    goto L130(i72);
  L812():
    output3 = force? output2;
    checkMissing(output3);
    c170 = `is.object`(output3);
    if c170 then L813() else L814(i102, c164, output3);
  L820():
    p67 = prom<V +>{
      err = ld err;
      err1 = force? err;
      checkMissing(err1);
      return err1;
    };
    p68 = prom<V +>{
      options139 = ld options;
      options140 = force? options139;
      checkMissing(options140);
      return options140;
    };
    r413 = dyn RweaveTryStop1(p67, p68);
    check L821() else D236();
  L860():
    dr126 = tryDispatchBuiltin.0("[<-", l20, srcfilenum1);
    dc63 = getTryDispatchBuiltinDispatched(dr126);
    if dc63 then L862() else L861(i147, srcfilenum1, dr126);
  L861(i149, srcfilenum3, l22):
    thisline2 = ld thisline;
    check L863() else D251();
  L874():
    p72 = prom<V +>{
      chunkout27 = ld chunkout;
      chunkout28 = force? chunkout27;
      checkMissing(chunkout28);
      return chunkout28;
    };
    r441 = dyn cat19[, file]("\\begin{Schunk}\n", p72);
    check L875() else D256();
  L888():
    p73 = prom<V +>{
      chunkout29 = ld chunkout;
      chunkout30 = force? chunkout29;
      checkMissing(chunkout30);
      return chunkout30;
    };
    r449 = dyn cat20[, file]("\\begin{Soutput}\n", p73);
    check L889() else D263();
  L904():
    p75 = prom<V +>{
      options149 = ld options;
      options150 = force? options149;
      checkMissing(options150);
      c213 = `is.object`(options150);
      if c213 then L1() else L2(options150);
    L0(dx146):
      return dx146;
    L1():
      dr138 = tryDispatchBuiltin.1("$", options150);
      dc69 = getTryDispatchBuiltinDispatched(dr138);
      if dc69 then L3() else L2(dr138);
    L2(options152):
      r458 = `$`(options152, <sym strip.white>);
      goto L0(r458);
    L3():
      dx145 = getTryDispatchBuiltinValue(dr138);
      goto L0(dx145);
    };
    p76 = prom<V +>{
      sym53 = ldf c;
      base53 = ldf c in base;
      guard53 = `==`.4(sym53, base53);
      if guard53 then L1() else L2();
    L0(r461):
      return r461;
    L1():
      c214 = ldf c in base;
      r462 = dyn c214("all", "true");
      goto L0(r462);
    L2():
      r460 = dyn base53("all", "true");
      goto L0(r460);
    };
    r464 = dyn _in_1(p75, p76);
    check L905() else D272();
  L1095():
    st err = r581;
    devoffs16 = ld devoffs;
    check L1096() else D349();
  L1116():
    dr200 = tryDispatchBuiltin.0("[<-", l69, srcfilenum49);
    dc100 = getTryDispatchBuiltinDispatched(dr200);
    if dc100 then L1118() else L1117(srcfilenum49, dr200);
  L1117(srcfilenum51, l71):
    thisline50 = ld thisline;
    check L1119() else D358();
  D236():
    deopt 909 [i115, r413];
  D251():
    deopt 961 [i149, srcfilenum3, l22, srcfilenum1, thisline2];
  D252():
    deopt 967 [i151, thisline4];
  D256():
    deopt 990 [i156, r441];
  D263():
    deopt 1024 [i169, r449];
  D272():
    deopt 1061 [i178, r464];
  D349():
    deopt 1380 [i244, devoffs16];
  D358():
    deopt 1416 [srcfilenum51, l71, srcfilenum49, thisline50];
  D359():
    deopt 1422 [thisline52];
  L142(i111, c174, dx126):
    nzchar1 = ldf nzchar in base;
    r408 = dyn nzchar1(dx126);
    check L816() else D234();
  L813():
    dr118 = tryDispatchBuiltin.1("[", output3);
    dc59 = getTryDispatchBuiltinDispatched(dr118);
    if dc59 then L815() else L814(i102, c164, dr118);
  L814(i109, c172, output5):
    __24 = ldf `[` in base;
    r407 = dyn __24(output5, 1);
    goto L142(i109, c172, r407);
  L821():
    goto L145(i115);
  L862():
    dx133 = getTryDispatchBuiltinValue(dr126);
    goto L155(i147, dx133);
  L863():
    thisline3 = force? thisline2;
    checkMissing(thisline3);
    r433 = `+`(thisline3, <int 1, 2>);
    ___2 = ldf `[<-` in base;
    r434 = dyn ___2(l22, srcfilenum1, r433);
    goto L155(i149, r434);
  L864():
    thisline5 = force? thisline4;
    checkMissing(thisline5);
    r435 = `+`(thisline5, 2);
    st thisline = r435;
    st openSinput = FALSE;
    goto L156(i151);
  L875():
    srcline6 = ld srcline;
    check L876() else D257();
  L889():
    srcline12 = ld srcline;
    check L890() else D264();
  L905():
    c215 = `as.logical`(r464);
    if c215 then L906() else L165();
  L1096():
    devoffs17 = force? devoffs16;
    checkMissing(devoffs17);
    c281 = `is.object`(devoffs17);
    if c281 then L1097() else L1098(i244, devoffs17);
  L1118():
    dx210 = getTryDispatchBuiltinValue(dr200);
    goto L217(dx210);
  L1119():
    thisline51 = force? thisline50;
    checkMissing(thisline51);
    r591 = `+`(thisline51, 1);
    ___18 = ldf `[<-` in base;
    r592 = dyn ___18(l71, srcfilenum49, r591);
    goto L217(r592);
  L1120():
    thisline53 = force? thisline52;
    checkMissing(thisline53);
    r593 = `+`(thisline53, 1);
    st thisline = r593;
    goto L218(r593);
  D234():
    deopt 897 [i111, c174, r408];
  D257():
    deopt 991 [i156, srcline6];
  D264():
    deopt 1025 [i169, srcline12];
  L165():
    goto L168(i178);
  L168(i188):
    cat21 = ldf cat;
    check L921() else D280();
  L213(i250, dx202):
    checkFun.0(dx202);
    dx203 = dx202 as cls;
    r583 = dyn dx203();
    check L1101() else D351();
  L815():
    dx125 = getTryDispatchBuiltinValue(dr118);
    goto L142(i102, c164, dx125);
  L816():
    goto L141(i111, c174, r408);
  L876():
    srcline7 = force? srcline6;
    checkMissing(srcline7);
    l23 = ld linesout;
    c209 = `is.object`(l23);
    if c209 then L877() else L878(i156, srcline7, l23);
  L890():
    srcline13 = force? srcline12;
    checkMissing(srcline13);
    l29 = ld linesout;
    c211 = `is.object`(l29);
    if c211 then L891() else L892(i169, srcline13, l29);
  L906():
    sub1 = ldf sub;
    check L907() else D273();
  L1097():
    dr192 = tryDispatchBuiltin.1("[[", devoffs17);
    dc96 = getTryDispatchBuiltinDispatched(dr192);
    if dc96 then L1099() else L1098(i244, dr192);
  L1098(i248, devoffs19):
    i251 = ld i;
    check L1100() else D350();
  D273():
    deopt 1063 [i178];
  D280():
    deopt 1093 [i188];
  D350():
    deopt 1382 [i248, devoffs19, i251];
  D351():
    deopt 1386 [i250, r583];
  L159(i164, dx138):
    st linesout = dx138;
    srcfilenum6 = ld srcfilenum;
    check L881() else D259();
  L162(i173, dx142):
    st linesout = dx142;
    srcfilenum12 = ld srcfilenum;
    check L895() else D266();
  L877():
    dr130 = tryDispatchBuiltin.0("[<-", l23, srcline7);
    dc65 = getTryDispatchBuiltinDispatched(dr130);
    if dc65 then L879() else L878(i156, srcline7, dr130);
  L878(i162, srcline9, l25):
    thisline6 = ld thisline;
    check L880() else D258();
  L891():
    dr134 = tryDispatchBuiltin.0("[<-", l29, srcline13);
    dc67 = getTryDispatchBuiltinDispatched(dr134);
    if dc67 then L893() else L892(i169, srcline13, dr134);
  L892(i171, srcline15, l31):
    thisline12 = ld thisline;
    check L894() else D265();
  L907():
    p77 = prom<V +>{
      output14 = ld output;
      output15 = force? output14;
      checkMissing(output15);
      return output15;
    };
    r466 = dyn sub1("^[[:space:]]*\n", "", p77);
    check L908() else D274();
  L921():
    p80 = prom<V +>{
      output20 = ld output;
      output21 = force? output20;
      checkMissing(output21);
      return output21;
    };
    p81 = prom<V +>{
      chunkout31 = ld chunkout;
      chunkout32 = force? chunkout31;
      checkMissing(chunkout32);
      return chunkout32;
    };
    r477 = dyn cat21[, file](p80, p81);
    check L922() else D281();
  L1099():
    dx201 = getTryDispatchBuiltinValue(dr192);
    goto L213(i244, dx201);
  L1100():
    i252 = force? i251;
    __28 = ldf `[[` in base;
    r582 = dyn __28(devoffs19, i252);
    goto L213(i248, r582);
  L1101():
    goto L208(i250);
  D258():
    deopt 994 [i162, srcline9, l25, srcline7, thisline6];
  D259():
    deopt 1000 [i164, srcfilenum6];
  D265():
    deopt 1028 [i171, srcline15, l31, srcline13, thisline12];
  D266():
    deopt 1034 [i173, srcfilenum12];
  D274():
    deopt 1067 [i178, r466];
  D281():
    deopt 1097 [i188, r477];
  L879():
    dx137 = getTryDispatchBuiltinValue(dr130);
    goto L159(i156, dx137);
  L880():
    thisline7 = force? thisline6;
    checkMissing(thisline7);
    r442 = `+`(thisline7, 1);
    ___3 = ldf `[<-` in base;
    r443 = dyn ___3(l25, srcline7, r442);
    goto L159(i162, r443);
  L881():
    srcfilenum7 = force? srcfilenum6;
    checkMissing(srcfilenum7);
    l26 = ld filenumout;
    c210 = `is.object`(l26);
    if c210 then L882() else L883(i164, srcfilenum7, l26);
  L893():
    dx141 = getTryDispatchBuiltinValue(dr134);
    goto L162(i169, dx141);
  L894():
    thisline13 = force? thisline12;
    checkMissing(thisline13);
    r450 = `+`(thisline13, 1);
    ___5 = ldf `[<-` in base;
    r451 = dyn ___5(l31, srcline13, r450);
    goto L162(i171, r451);
  L895():
    srcfilenum13 = force? srcfilenum12;
    checkMissing(srcfilenum13);
    l32 = ld filenumout;
    c212 = `is.object`(l32);
    if c212 then L896() else L897(i173, srcfilenum13, l32);
  L908():
    st output = r466;
    sub2 = ldf sub;
    check L909() else D275();
  L922():
    sym54 = ldf sum;
    base54 = ldf sum in base;
    guard54 = `==`.4(sym54, base54);
    if guard54 then L923() else L924();
  D275():
    deopt 1070 [i178];
  L160(i168, dx140):
    st filenumout = dx140;
    thisline10 = ld thisline;
    check L886() else D261();
  L163(i177, dx144):
    st filenumout = dx144;
    thisline16 = ld thisline;
    check L900() else D268();
  L169(i191, r479):
    st count = r479;
    count = ld count;
    check L931() else D285();
  L882():
    dr132 = tryDispatchBuiltin.0("[<-", l26, srcfilenum7);
    dc66 = getTryDispatchBuiltinDispatched(dr132);
    if dc66 then L884() else L883(i164, srcfilenum7, dr132);
  L883(i166, srcfilenum9, l28):
    thisline8 = ld thisline;
    check L885() else D260();
  L896():
    dr136 = tryDispatchBuiltin.0("[<-", l32, srcfilenum13);
    dc68 = getTryDispatchBuiltinDispatched(dr136);
    if dc68 then L898() else L897(i173, srcfilenum13, dr136);
  L897(i175, srcfilenum15, l34):
    thisline14 = ld thisline;
    check L899() else D267();
  L909():
    p78 = prom<V +>{
      output16 = ld output;
      output17 = force? output16;
      checkMissing(output17);
      return output17;
    };
    r468 = dyn sub2("\n[[:space:]]*$", "", p78);
    check L910() else D276();
  L923():
    strsplit = ldf strsplit;
    check L925() else D282();
  L924():
    r478 = dyn base54(<lang `==`(`[[`(strsplit(output, NULL), 1), "\n")>);
    goto L169(i188, r478);
  D260():
    deopt 1003 [i166, srcfilenum9, l28, srcfilenum7, thisline8];
  D261():
    deopt 1009 [i168, thisline10];
  D267():
    deopt 1037 [i175, srcfilenum15, l34, srcfilenum13, thisline14];
  D268():
    deopt 1043 [i177, thisline16];
  D276():
    deopt 1074 [i178, r468];
  D282():
    deopt 1101 [i188];
  D285():
    deopt 1113 [i191, count];
  L884():
    dx139 = getTryDispatchBuiltinValue(dr132);
    goto L160(i164, dx139);
  L885():
    thisline9 = force? thisline8;
    checkMissing(thisline9);
    r444 = `+`(thisline9, 1);
    ___4 = ldf `[<-` in base;
    r445 = dyn ___4(l28, srcfilenum7, r444);
    goto L160(i166, r445);
  L886():
    thisline11 = force? thisline10;
    checkMissing(thisline11);
    r446 = `+`(thisline11, 1);
    st thisline = r446;
    st openSchunk = TRUE;
    goto L161(i168);
  L898():
    dx143 = getTryDispatchBuiltinValue(dr136);
    goto L163(i173, dx143);
  L899():
    thisline15 = force? thisline14;
    checkMissing(thisline15);
    r452 = `+`(thisline15, 1);
    ___6 = ldf `[<-` in base;
    r453 = dyn ___6(l34, srcfilenum13, r452);
    goto L163(i175, r453);
  L900():
    thisline17 = force? thisline16;
    checkMissing(thisline17);
    r454 = `+`(thisline17, 1);
    st thisline = r454;
    goto L164(i177);
  L910():
    st output = r468;
    options153 = ld options;
    check L911() else D277();
  L925():
    p82 = prom<V +>{
      output22 = ld output;
      output23 = force? output22;
      checkMissing(output23);
      return output23;
    };
    r481 = dyn strsplit(p82, NULL);
    check L926() else D283();
  L931():
    count1 = force? count;
    checkMissing(count1);
    r487 = `>`(count1, 0);
    c219 = `as.logical`(r487);
    if c219 then L932() else L171();
  D277():
    deopt 1076 [i178, options153];
  D283():
    deopt 1104 [i188, r481];
  L171():
    goto L174(i191);
  L174(i206):
    remove = ldf remove;
    check L948() else D294();
  L911():
    options154 = force? options153;
    checkMissing(options154);
    c216 = `is.object`(options154);
    if c216 then L913() else L914(i178, options154);
  L926():
    c218 = `is.object`(r481);
    if c218 then L927() else L928(i188, r481);
  L932():
    srcline18 = ld srcline;
    check L933() else D286();
  D286():
    deopt 1117 [i191, srcline18];
  D294():
    deopt 1147 [i206];
  L170(i195, dx150):
    r485 = `==`(dx150, "\n");
    sum1 = ldf sum in base;
    r486 = dyn sum1(r485);
    check L930() else D284();
  L912(i184, dx148):
    r470 = `==`(dx148, "all");
    c217 = `as.logical`(r470);
    if c217 then L916() else L166();
  L913():
    dr140 = tryDispatchBuiltin.1("$", options154);
    dc70 = getTryDispatchBuiltinDispatched(dr140);
    if dc70 then L915() else L914(i178, dr140);
  L914(i182, options156):
    r469 = `$`(options156, <sym strip.white>);
    goto L912(i182, r469);
  L927():
    dr142 = tryDispatchBuiltin.1("[[", r481);
    dc71 = getTryDispatchBuiltinDispatched(dr142);
    if dc71 then L929() else L928(i188, dr142);
  L928(i193, r483):
    __25 = ldf `[[` in base;
    r484 = dyn __25(r483, 1);
    goto L170(i193, r484);
  L933():
    srcline19 = force? srcline18;
    checkMissing(srcline19);
    l35 = ld linesout;
    c220 = `is.object`(l35);
    if c220 then L934() else L935(i191, srcline19, l35);
  L948():
    p83 = prom<V +>{
      output24 = ld output;
      output25 = force? output24;
      checkMissing(output25);
      return output25;
    };
    r497 = dyn remove(p83);
    check L949() else D295();
  D284():
    deopt 1111 [i195, r486];
  D295():
    deopt 1149 [i206, r497];
  L166():
    goto L167(i184, NULL);
  L167(i187, r473):
    goto L168(i187);
  L172(i201, dx152):
    st linesout = dx152;
    srcfilenum18 = ld srcfilenum;
    check L939() else D289();
  L915():
    dx147 = getTryDispatchBuiltinValue(dr140);
    goto L912(i178, dx147);
  L916():
    sub3 = ldf sub;
    check L917() else D278();
  L929():
    dx149 = getTryDispatchBuiltinValue(dr142);
    goto L170(i188, dx149);
  L930():
    goto L169(i195, r486);
  L934():
    dr144 = tryDispatchBuiltin.0("[<-", l35, srcline19);
    dc72 = getTryDispatchBuiltinDispatched(dr144);
    if dc72 then L936() else L935(i191, srcline19, dr144);
  L935(i199, srcline21, l37):
    thisline18 = ld thisline;
    check L937() else D287();
  L949():
    options157 = ld options;
    check L950() else D296();
  D278():
    deopt 1082 [i184];
  D287():
    deopt 1120 [i199, srcline21, l37, srcline19, thisline18];
  D289():
    deopt 1128 [i201, srcfilenum18];
  D296():
    deopt 1150 [i206, options157];
  L917():
    p79 = prom<V +>{
      output18 = ld output;
      output19 = force? output18;
      checkMissing(output19);
      return output19;
    };
    r472 = dyn sub3("\n[[:space:]]*\n", "\n", p79);
    check L918() else D279();
  L936():
    dx151 = getTryDispatchBuiltinValue(dr144);
    goto L172(i191, dx151);
  L937():
    thisline19 = force? thisline18;
    checkMissing(thisline19);
    count2 = ld count;
    check L938() else D288();
  L939():
    srcfilenum19 = force? srcfilenum18;
    checkMissing(srcfilenum19);
    l38 = ld filenumout;
    c221 = `is.object`(l38);
    if c221 then L940() else L941(i201, srcfilenum19, l38);
  L950():
    options158 = force? options157;
    checkMissing(options158);
    c222 = `is.object`(options158);
    if c222 then L952() else L953(i206, options158);
  D279():
    deopt 1086 [i184, r472];
  D288():
    deopt 1122 [i199, srcline21, l37, srcline19, thisline19, 1, count2];
  L173(i205, dx154):
    st filenumout = dx154;
    thisline22 = ld thisline;
    check L945() else D292();
  L918():
    st output = r472;
    goto L167(i184, r472);
  L938():
    count3 = force? count2;
    checkMissing(count3);
    r488 = `:`(1, count3);
    r489 = `+`(thisline19, r488);
    ___7 = ldf `[<-` in base;
    r490 = dyn ___7(l37, srcline19, r489);
    goto L172(i199, r490);
  L940():
    dr146 = tryDispatchBuiltin.0("[<-", l38, srcfilenum19);
    dc73 = getTryDispatchBuiltinDispatched(dr146);
    if dc73 then L942() else L941(i201, srcfilenum19, dr146);
  L941(i203, srcfilenum21, l40):
    thisline20 = ld thisline;
    check L943() else D290();
  L951(i210, dx156):
    r499 = `==`(dx156, "verbatim");
    c223 = `as.logical`(r499);
    if c223 then L955() else L175();
  L952():
    dr148 = tryDispatchBuiltin.1("$", options158);
    dc74 = getTryDispatchBuiltinDispatched(dr148);
    if dc74 then L954() else L953(i206, dr148);
  L953(i208, options160):
    r498 = `$`(options160, <sym results>);
    goto L951(i208, r498);
  D290():
    deopt 1131 [i203, srcfilenum21, l40, srcfilenum19, thisline20];
  D292():
    deopt 1139 [i205, thisline22];
  L175():
    goto L178(i210, NULL);
  L178(i221, r507):
    goto L179(i221);
  L942():
    dx153 = getTryDispatchBuiltinValue(dr146);
    goto L173(i201, dx153);
  L943():
    thisline21 = force? thisline20;
    checkMissing(thisline21);
    count4 = ld count;
    check L944() else D291();
  L945():
    thisline23 = force? thisline22;
    checkMissing(thisline23);
    count6 = ld count;
    check L946() else D293();
  L954():
    dx155 = getTryDispatchBuiltinValue(dr148);
    goto L951(i206, dx155);
  L955():
    cat22 = ldf cat;
    check L956() else D297();
  D291():
    deopt 1133 [i203, srcfilenum21, l40, srcfilenum19, thisline21, 1, count4];
  D293():
    deopt 1140 [i205, thisline23, count6];
  D297():
    deopt 1156 [i210];
  L944():
    count5 = force? count4;
    checkMissing(count5);
    r491 = `:`(1, count5);
    r492 = `+`(thisline21, r491);
    ___8 = ldf `[<-` in base;
    r493 = dyn ___8(l40, srcfilenum19, r492);
    goto L173(i203, r493);
  L946():
    count7 = force? count6;
    checkMissing(count7);
    r494 = `+`(thisline23, count7);
    st thisline = r494;
    goto L174(i205);
  L956():
    p84 = prom<V +>{
      chunkout33 = ld chunkout;
      chunkout34 = force? chunkout33;
      checkMissing(chunkout34);
      return chunkout34;
    };
    r501 = dyn cat22[, file]("\n\\end{Soutput}\n", p84);
    check L957() else D298();
  D298():
    deopt 1160 [i210, r501];
  L957():
    srcline24 = ld srcline;
    check L958() else D299();
  D299():
    deopt 1161 [i210, srcline24];
  L958():
    srcline25 = force? srcline24;
    checkMissing(srcline25);
    l41 = ld linesout;
    c224 = `is.object`(l41);
    if c224 then L959() else L960(i210, srcline25, l41);
  L176(i216, dx158):
    st linesout = dx158;
    srcfilenum24 = ld srcfilenum;
    check L963() else D301();
  L959():
    dr150 = tryDispatchBuiltin.0("[<-", l41, srcline25);
    dc75 = getTryDispatchBuiltinDispatched(dr150);
    if dc75 then L961() else L960(i210, srcline25, dr150);
  L960(i214, srcline27, l43):
    thisline24 = ld thisline;
    check L962() else D300();
  D300():
    deopt 1164 [i214, srcline27, l43, srcline25, thisline24];
  D301():
    deopt 1170 [i216, srcfilenum24];
  L961():
    dx157 = getTryDispatchBuiltinValue(dr150);
    goto L176(i210, dx157);
  L962():
    thisline25 = force? thisline24;
    checkMissing(thisline25);
    r502 = `+`(thisline25, <int 1, 2>);
    ___9 = ldf `[<-` in base;
    r503 = dyn ___9(l43, srcline25, r502);
    goto L176(i214, r503);
  L963():
    srcfilenum25 = force? srcfilenum24;
    checkMissing(srcfilenum25);
    l44 = ld filenumout;
    c225 = `is.object`(l44);
    if c225 then L964() else L965(i216, srcfilenum25, l44);
  L177(i220, dx160):
    st filenumout = dx160;
    thisline28 = ld thisline;
    check L968() else D303();
  L964():
    dr152 = tryDispatchBuiltin.0("[<-", l44, srcfilenum25);
    dc76 = getTryDispatchBuiltinDispatched(dr152);
    if dc76 then L966() else L965(i216, srcfilenum25, dr152);
  L965(i218, srcfilenum27, l46):
    thisline26 = ld thisline;
    check L967() else D302();
  D302():
    deopt 1173 [i218, srcfilenum27, l46, srcfilenum25, thisline26];
  D303():
    deopt 1179 [i220, thisline28];
  L966():
    dx159 = getTryDispatchBuiltinValue(dr152);
    goto L177(i216, dx159);
  L967():
    thisline27 = force? thisline26;
    checkMissing(thisline27);
    r504 = `+`(thisline27, <int 1, 2>);
    ___10 = ldf `[<-` in base;
    r505 = dyn ___10(l46, srcfilenum25, r504);
    goto L177(i218, r505);
  L968():
    thisline29 = force? thisline28;
    checkMissing(thisline29);
    r506 = `+`(thisline29, 2);
    st thisline = r506;
    goto L178(i220, r506);
  }
}
fun inner3658529368(name, width, height, `...`) {
  (reg name:*, reg width:*, reg height:*, reg ddd:dots) -+> V { var name:*, var width:*, var height:*, var `...`:dots?, reg __:cls, reg r:V, reg r1:cls, reg paste0:cls, reg chunkprefix:*, reg chunkprefix1:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg width1:*, reg width2:V, reg p2:p(V +), reg height1:*, reg height2:V, reg p3:p(V +), reg options:*, reg options1:V, reg c:L, reg options3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg p4:p(V +), reg options4:*, reg options5:V, reg c1:L, reg options7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r9:V, reg p5:p(V +), reg options8:*, reg options9:V, reg c2:L, reg options11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r11:V, reg p6:p(V +), reg r13:V |
    mkenv;
    st name = name;
    st width = width;
    st height = height;
    st `...` = ddd;
    __ = ldf `::`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn __("grDevices", "pdf");
    check L1() else D1();
  D1():
    deopt 4 [r];
  L1():
    checkFun.0(r);
    r1 = r as cls;
    p1 = prom<V +>{
      paste0 = ldf paste0;
      p = prom<V +>{
        chunkprefix = ld chunkprefix;
        chunkprefix1 = force? chunkprefix;
        checkMissing(chunkprefix1);
        return chunkprefix1;
      };
      r3 = dyn paste0(p, ".pdf");
      return r3;
    };
    p2 = prom<V +>{
      width1 = ld width;
      width2 = force? width1;
      checkMissing(width2);
      return width2;
    };
    p3 = prom<V +>{
      height1 = ld height;
      height2 = force? height1;
      checkMissing(height2);
      return height2;
    };
    p4 = prom<V +>{
      options = ld options;
      options1 = force? options;
      checkMissing(options1);
      c = `is.object`(options1);
      if c then L1() else L2(options1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", options1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(options3):
      r7 = `$`(options3, <sym pdf.version>);
      goto L0(r7);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p5 = prom<V +>{
      options4 = ld options;
      options5 = force? options4;
      checkMissing(options5);
      c1 = `is.object`(options5);
      if c1 then L1() else L2(options5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", options5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(options7):
      r9 = `$`(options7, <sym pdf.encoding>);
      goto L0(r9);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p6 = prom<V +>{
      options8 = ld options;
      options9 = force? options8;
      checkMissing(options9);
      c2 = `is.object`(options9);
      if c2 then L1() else L2(options9);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", options9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(options11):
      r11 = `$`(options11, <sym pdf.compress>);
      goto L0(r11);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r13 = dyn r1[file, width, height, version, encoding, compress](p1, p2, p3, p4, p5, p6);
    check L2() else D2();
  D2():
    deopt 18 [r13];
  L2():
    popenv;
    return r13;
  }
}
fun inner1726834190(name, width, height, options, `...`) {
  (reg name:*, reg width:*, reg height:*, reg options:*, reg ddd:dots) -+> V { var name:*, var width:*, var height:*, var options:*, var `...`:dots?, reg __:cls, reg r:V, reg r1:cls, reg paste0:cls, reg chunkprefix:*, reg chunkprefix1:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg width1:*, reg width2:V, reg p2:p(V +), reg height1:*, reg height2:V, reg p3:p(V +), reg options1:*, reg options2:V, reg c:L, reg options4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg p4:p(V +), reg r9:V |
    mkenv;
    st name = name;
    st width = width;
    st height = height;
    st options = options;
    st `...` = ddd;
    __ = ldf `::`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn __("grDevices", "png");
    check L1() else D1();
  D1():
    deopt 4 [r];
  L1():
    checkFun.0(r);
    r1 = r as cls;
    p1 = prom<V +>{
      paste0 = ldf paste0;
      p = prom<V +>{
        chunkprefix = ld chunkprefix;
        chunkprefix1 = force? chunkprefix;
        checkMissing(chunkprefix1);
        return chunkprefix1;
      };
      r3 = dyn paste0(p, ".png");
      return r3;
    };
    p2 = prom<V +>{
      width1 = ld width;
      width2 = force? width1;
      checkMissing(width2);
      return width2;
    };
    p3 = prom<V +>{
      height1 = ld height;
      height2 = force? height1;
      checkMissing(height2);
      return height2;
    };
    p4 = prom<V +>{
      options1 = ld options;
      options2 = force? options1;
      checkMissing(options2);
      c = `is.object`(options2);
      if c then L1() else L2(options2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", options2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(options4):
      r7 = `$`(options4, <sym resolution>);
      goto L0(r7);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r9 = dyn r1[filename, width, height, res, units](p1, p2, p3, p4, "in");
    check L2() else D2();
  D2():
    deopt 16 [r9];
  L2():
    popenv;
    return r9;
  }
}
fun inner4257291052(dce, leading) {
  (reg dce:*, reg leading:*) -+> V { var dce:*, var leading:*, reg openSinput:*, reg openSinput1:V, reg r:V, reg c:L, reg openSchunk:*, reg openSchunk1:V, reg r1:V, reg c1:L, reg cat:cls, reg chunkout:*, reg chunkout1:V, reg p:p(V +), reg r3:V, reg srcline:*, reg srcline1:V, reg l:*, reg c2:L, reg srcline3:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg thisline:*, reg thisline1:V, reg r4:V, reg ___:cls, reg r5:V, reg srcfilenum:*, reg srcfilenum1:V, reg l3:*, reg c3:L, reg srcfilenum3:V, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg thisline2:*, reg thisline3:V, reg r6:V, reg ___1:cls, reg r7:V, reg thisline4:*, reg thisline5:V, reg r8:V, reg cat1:cls, reg chunkout2:*, reg chunkout3:V, reg p1:p(V +), reg r11:V, reg sym:cls, reg base:cls, reg guard:L, reg r13:V, reg r14:V, reg leading1:*, reg leading2:V, reg max:cls, reg r15:V, reg cat2:cls, reg paste0:cls, reg getOption:cls, reg r16:V, reg p2:p(V +), reg dce1:*, reg dce2:V, reg c4:L, reg dce4:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg dce7:V, reg r19:V, reg leading3:*, reg leading4:V, reg r20:I, reg __:cls, reg r21:V, reg p3:p(V +), reg r23:V, reg p4:p(V +), reg chunkout4:*, reg chunkout5:V, reg p5:p(V +), reg r26:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg dce8:*, reg dce9:V, reg length:cls, reg r29:V, reg leading5:*, reg leading6:V, reg r30:V, reg c5:L, reg cat3:cls, reg paste1:cls, reg getOption1:cls, reg r31:V, reg p6:p(V +), reg dce10:*, reg dce11:V, reg c6:L, reg dce13:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg dce16:V, reg r34:V, reg leading7:*, reg leading8:V, reg r35:I, reg r36:V, reg __1:cls, reg r37:V, reg p7:p(V +), reg r39:V, reg p8:p(V +), reg chunkout6:*, reg chunkout7:V, reg p9:p(V +), reg r42:V, reg srcline6:*, reg srcline7:V, reg l6:*, reg c7:L, reg srcline9:V, reg l8:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg thisline6:*, reg thisline7:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r44:V, reg srcline16:V, reg l11:*, reg srcline17:V, reg thisline10:V, reg r45:V, reg dce17:*, reg dce18:V, reg r46:I, reg r47:V, reg ___2:cls, reg r48:V, reg srcfilenum6:*, reg srcfilenum7:V, reg l12:*, reg c8:L, reg srcfilenum9:V, reg l14:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg thisline11:*, reg thisline12:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r49:V, reg srcfilenum16:V, reg l17:*, reg srcfilenum17:V, reg thisline15:V, reg r50:V, reg dce19:*, reg dce20:V, reg r51:I, reg r52:V, reg ___3:cls, reg r53:V, reg thisline16:*, reg thisline17:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r54:V, reg thisline20:V, reg r55:V, reg dce21:*, reg dce22:V, reg length1:cls, reg r56:V, reg r57:V |
    mkenv;
    st dce = dce;
    st leading = leading;
    openSinput = ld openSinput;
    check L15() else D0();
  D0():
    deopt 0 [openSinput];
  L15():
    openSinput1 = force? openSinput;
    checkMissing(openSinput1);
    r = `!`(openSinput1);
    c = `as.logical`(r);
    if c then L16() else L0();
  L0():
    goto L5();
  L5():
    sym = ldf max;
    base = ldf max in base;
    guard = `==`.4(sym, base);
    if guard then L36() else L37();
  L16():
    openSchunk = ld openSchunk;
    check L17() else D1();
  D1():
    deopt 3 [openSchunk];
  L6(r14):
    st leading = r14;
    cat2 = ldf cat;
    check L40() else D13();
  L17():
    openSchunk1 = force? openSchunk;
    checkMissing(openSchunk1);
    r1 = `!`(openSchunk1);
    c1 = `as.logical`(r1);
    if c1 then L18() else L1();
  L36():
    leading1 = ld leading;
    check L38() else D11();
  L37():
    r13 = dyn base(<sym leading>, 1);
    goto L6(r13);
  D11():
    deopt 53 [leading1];
  D13():
    deopt 60 [];
  L1():
    goto L4();
  L4():
    cat1 = ldf cat;
    check L33() else D9();
  L18():
    cat = ldf cat;
    check L19() else D2();
  L38():
    leading2 = force? leading1;
    checkMissing(leading2);
    max = ldf max in base;
    r15 = dyn max(leading2, 1);
    check L39() else D12();
  L40():
    p4 = prom<V +>{
      paste0 = ldf paste0;
      p2 = prom<V +>{
        getOption = ldf getOption;
        r16 = dyn getOption("prompt");
        return r16;
      };
      p3 = prom<V +>{
        dce1 = ld dce;
        dce2 = force? dce1;
        checkMissing(dce2);
        c4 = `is.object`(dce2);
        if c4 then L2() else L3(dce2);
      L0(dx5):
        return dx5;
      L2():
        dr4 = tryDispatchBuiltin.1("[", dce2);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L4() else L3(dr4);
      L3(dce4):
        sym1 = ldf seq_len;
        base1 = ldf seq_len in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L5() else L6();
      L1(dce7, r19):
        __ = ldf `[` in base;
        r21 = dyn __(dce7, r19);
        goto L0(r21);
      L4():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      L5():
        leading3 = ld leading;
        leading4 = force? leading3;
        checkMissing(leading4);
        r20 = seq_len(leading4);
        goto L1(dce4, r20);
      L6():
        r18 = dyn base1(<sym leading>);
        goto L1(dce4, r18);
      };
      r23 = dyn paste0[, , collapse](p2, p3, "\n");
      return r23;
    };
    p5 = prom<V +>{
      chunkout4 = ld chunkout;
      chunkout5 = force? chunkout4;
      checkMissing(chunkout5);
      return chunkout5;
    };
    r26 = dyn cat2[, , file, sep]("\n", p4, p5, "");
    check L41() else D14();
  D2():
    deopt 7 [];
  D9():
    deopt 41 [];
  D12():
    deopt 57 [r15];
  D14():
    deopt 67 [r26];
  L19():
    p = prom<V +>{
      chunkout = ld chunkout;
      chunkout1 = force? chunkout;
      checkMissing(chunkout1);
      return chunkout1;
    };
    r3 = dyn cat[, file]("\\begin{Schunk}\n", p);
    check L20() else D3();
  L33():
    p1 = prom<V +>{
      chunkout2 = ld chunkout;
      chunkout3 = force? chunkout2;
      checkMissing(chunkout3);
      return chunkout3;
    };
    r11 = dyn cat1[, file]("\\begin{Sinput}", p1);
    check L34() else D10();
  L39():
    goto L6(r15);
  L41():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L42() else L43();
  D3():
    deopt 11 [r3];
  D10():
    deopt 45 [r11];
  L7(r28):
    leading5 = ld leading;
    check L46() else D17();
  L20():
    srcline = ld srcline;
    check L21() else D4();
  L34():
    sst openSinput = TRUE;
    goto L5();
  L42():
    dce8 = ld dce;
    check L44() else D15();
  L43():
    r27 = dyn base2(<sym dce>);
    goto L7(r27);
  D4():
    deopt 12 [srcline];
  D15():
    deopt 70 [dce8];
  D17():
    deopt 73 [r28, leading5];
  L21():
    srcline1 = force? srcline;
    checkMissing(srcline1);
    l = sld linesout;
    c2 = `is.object`(l);
    if c2 then L22() else L23(srcline1, l);
  L44():
    dce9 = force? dce8;
    checkMissing(dce9);
    length = ldf length in base;
    r29 = dyn length(dce9);
    check L45() else D16();
  L46():
    leading6 = force? leading5;
    checkMissing(leading6);
    r30 = `>`(r28, leading6);
    c5 = `as.logical`(r30);
    if c5 then L47() else L8();
  D16():
    deopt 73 [r29];
  L2(dx1):
    sst linesout = dx1;
    srcfilenum = ld srcfilenum;
    check L26() else D6();
  L8():
    goto L9();
  L9():
    srcline6 = ld srcline;
    check L51() else D20();
  L22():
    dr = tryDispatchBuiltin.0("[<-", l, srcline1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(srcline1, dr);
  L23(srcline3, l2):
    thisline = ld thisline;
    check L25() else D5();
  L45():
    goto L7(r29);
  L47():
    cat3 = ldf cat;
    check L48() else D18();
  D5():
    deopt 15 [srcline3, l2, srcline1, thisline];
  D6():
    deopt 21 [srcfilenum];
  D18():
    deopt 77 [];
  D20():
    deopt 87 [srcline6];
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L25():
    thisline1 = force? thisline;
    checkMissing(thisline1);
    r4 = `+`(thisline1, 1);
    ___ = ldf `[<-` in base;
    r5 = dyn ___(l2, srcline1, r4);
    goto L2(r5);
  L26():
    srcfilenum1 = force? srcfilenum;
    checkMissing(srcfilenum1);
    l3 = sld filenumout;
    c3 = `is.object`(l3);
    if c3 then L27() else L28(srcfilenum1, l3);
  L48():
    p8 = prom<V +>{
      paste1 = ldf paste0;
      p6 = prom<V +>{
        getOption1 = ldf getOption;
        r31 = dyn getOption1("continue");
        return r31;
      };
      p7 = prom<V +>{
        dce10 = ld dce;
        dce11 = force? dce10;
        checkMissing(dce11);
        c6 = `is.object`(dce11);
        if c6 then L2() else L3(dce11);
      L0(dx7):
        return dx7;
      L2():
        dr6 = tryDispatchBuiltin.1("[", dce11);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L4() else L3(dr6);
      L3(dce13):
        sym3 = ldf seq_len;
        base3 = ldf seq_len in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L5() else L6();
      L1(dce16, r34):
        r36 = `-`(<missing>, r34);
        __1 = ldf `[` in base;
        r37 = dyn __1(dce16, r36);
        goto L0(r37);
      L4():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      L5():
        leading7 = ld leading;
        leading8 = force? leading7;
        checkMissing(leading8);
        r35 = seq_len(leading8);
        goto L1(dce13, r35);
      L6():
        r33 = dyn base3(<sym leading>);
        goto L1(dce13, r33);
      };
      r39 = dyn paste1[, , collapse](p6, p7, "\n");
      return r39;
    };
    p9 = prom<V +>{
      chunkout6 = ld chunkout;
      chunkout7 = force? chunkout6;
      checkMissing(chunkout7);
      return chunkout7;
    };
    r42 = dyn cat3[, , file, sep]("\n", p8, p9, "");
    check L49() else D19();
  L51():
    srcline7 = force? srcline6;
    checkMissing(srcline7);
    l6 = sld linesout;
    c7 = `is.object`(l6);
    if c7 then L52() else L53(srcline7, l6);
  D19():
    deopt 84 [r42];
  L3(dx3):
    sst filenumout = dx3;
    thisline4 = ld thisline;
    check L31() else D8();
  L10(dx9):
    sst linesout = dx9;
    srcfilenum6 = ld srcfilenum;
    check L59() else D23();
  L27():
    dr2 = tryDispatchBuiltin.0("[<-", l3, srcfilenum1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L29() else L28(srcfilenum1, dr2);
  L28(srcfilenum3, l5):
    thisline2 = ld thisline;
    check L30() else D7();
  L49():
    goto L9();
  L52():
    dr8 = tryDispatchBuiltin.0("[<-", l6, srcline7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L54() else L53(srcline7, dr8);
  L53(srcline9, l8):
    thisline6 = ld thisline;
    check L55() else D21();
  D7():
    deopt 24 [srcfilenum3, l5, srcfilenum1, thisline2];
  D8():
    deopt 30 [thisline4];
  D21():
    deopt 90 [srcline9, l8, srcline7, thisline6];
  D23():
    deopt 98 [srcfilenum6];
  L29():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L30():
    thisline3 = force? thisline2;
    checkMissing(thisline3);
    r6 = `+`(thisline3, 1);
    ___1 = ldf `[<-` in base;
    r7 = dyn ___1(l5, srcfilenum1, r6);
    goto L3(r7);
  L31():
    thisline5 = force? thisline4;
    checkMissing(thisline5);
    r8 = `+`(thisline5, 1);
    sst thisline = r8;
    sst openSchunk = TRUE;
    goto L4();
  L54():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L10(dx8);
  L55():
    thisline7 = force? thisline6;
    checkMissing(thisline7);
    sym4 = ldf seq_along;
    base4 = ldf seq_along in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L59():
    srcfilenum7 = force? srcfilenum6;
    checkMissing(srcfilenum7);
    l12 = sld filenumout;
    c8 = `is.object`(l12);
    if c8 then L60() else L61(srcfilenum7, l12);
  L11(srcline16, l11, srcline17, thisline10, r45):
    r47 = `+`(thisline10, r45);
    ___2 = ldf `[<-` in base;
    r48 = dyn ___2(l11, srcline17, r47);
    goto L10(r48);
  L12(dx11):
    sst filenumout = dx11;
    thisline16 = ld thisline;
    check L67() else D26();
  L56():
    dce17 = ld dce;
    check L58() else D22();
  L57():
    r44 = dyn base4(<sym dce>);
    goto L11(srcline9, l8, srcline7, thisline7, r44);
  L60():
    dr10 = tryDispatchBuiltin.0("[<-", l12, srcfilenum7);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L62() else L61(srcfilenum7, dr10);
  L61(srcfilenum9, l14):
    thisline11 = ld thisline;
    check L63() else D24();
  D22():
    deopt 92 [srcline9, l8, srcline7, thisline7, dce17];
  D24():
    deopt 101 [srcfilenum9, l14, srcfilenum7, thisline11];
  D26():
    deopt 109 [thisline16];
  L58():
    dce18 = force? dce17;
    checkMissing(dce18);
    r46 = seq_along(dce18);
    goto L11(srcline9, l8, srcline7, thisline7, r46);
  L62():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L12(dx10);
  L63():
    thisline12 = force? thisline11;
    checkMissing(thisline12);
    sym5 = ldf seq_along;
    base5 = ldf seq_along in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L64() else L65();
  L67():
    thisline17 = force? thisline16;
    checkMissing(thisline17);
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L68() else L69();
  L13(srcfilenum16, l17, srcfilenum17, thisline15, r50):
    r52 = `+`(thisline15, r50);
    ___3 = ldf `[<-` in base;
    r53 = dyn ___3(l17, srcfilenum17, r52);
    goto L12(r53);
  L14(thisline20, r55):
    r57 = `+`(thisline20, r55);
    sst thisline = r57;
    invisible.0();
    popenv;
    return r57;
  L64():
    dce19 = ld dce;
    check L66() else D25();
  L65():
    r49 = dyn base5(<sym dce>);
    goto L13(srcfilenum9, l14, srcfilenum7, thisline12, r49);
  L68():
    dce21 = ld dce;
    check L70() else D27();
  L69():
    r54 = dyn base6(<sym dce>);
    goto L14(thisline17, r54);
  D25():
    deopt 103 [srcfilenum9, l14, srcfilenum7, thisline12, dce19];
  D27():
    deopt 112 [thisline17, dce21];
  L66():
    dce20 = force? dce19;
    checkMissing(dce20);
    r51 = seq_along(dce20);
    goto L13(srcfilenum9, l14, srcfilenum7, thisline12, r51);
  L70():
    dce22 = force? dce21;
    checkMissing(dce22);
    length1 = ldf length in base;
    r56 = dyn length1(dce22);
    check L71() else D28();
  D28():
    deopt 115 [thisline17, r56];
  L71():
    goto L14(thisline17, r56);
  }
}
fun inner1552342713(srcfile, showfrom, showto, ce) {
  (reg srcfile:*, reg showfrom:*, reg showto:*, reg ce:*) -+> V { var srcfile:*, var showfrom:*, var showto:*, var ce:*, reg tryCatch:cls, reg suppressWarnings:cls, reg getSrcLines:cls, reg srcfile1:*, reg srcfile2:V, reg p:p(V +), reg showfrom1:*, reg showfrom2:V, reg p1:p(V +), reg showto1:*, reg showto2:V, reg p2:p(V +), reg r3:V, reg p3:p(V +), reg r5:V, reg p4:p(V +), reg r7:cls, reg p5:p(V +), reg r9:V |
    mkenv;
    st srcfile = srcfile;
    st showfrom = showfrom;
    st showto = showto;
    st ce = ce;
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
      r7 = clos inner3708401697;
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
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ce:*, reg ce1:V, reg c:V, reg c1:L, reg character:cls, reg r2:V, reg deparse:cls, reg ce2:*, reg ce3:V, reg p:p(V +), reg getOption:cls, reg r4:V, reg r5:V, reg p1:p(V +), reg r7:V |
    mkenv;
    st e = e;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L5() else L1();
  L2():
    ce = ld ce;
    check L4() else D0();
  L3():
    r = dyn base(<sym ce>);
    goto L0(r);
  D0():
    deopt 1 [ce];
  L1():
    deparse = ldf deparse;
    check L9() else D3();
  L4():
    ce1 = force? ce;
    checkMissing(ce1);
    c = `==`(ce1, NULL);
    goto L0(c);
  L5():
    character = ldf character;
    check L6() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 8 [];
  L6():
    r2 = dyn character();
    check L7() else D2();
  L9():
    p = prom<V +>{
      ce2 = ld ce;
      ce3 = force? ce2;
      checkMissing(ce3);
      return ce3;
    };
    p1 = prom<V +>{
      getOption = ldf getOption;
      r4 = dyn getOption("width");
      r5 = `*`(0.75, r4);
      return r5;
    };
    r7 = dyn deparse[, `width.cutoff`](p, p1);
    check L10() else D4();
  D2():
    deopt 6 [r2];
  D4():
    deopt 12 [r7];
  L7():
    popenv;
    return r2;
  L10():
    popenv;
    return r7;
  }
}
fun inner2084475864(showto) {
  (reg showto:*) -+> V { var showto:*, reg options:*, reg options1:V, reg c:L, reg options3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg c1:L, reg c3:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg c6:L, reg r2:V, reg lastshown:*, reg lastshown1:V, reg is_na:cls, reg r3:V, reg r4:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg lastshown2:*, reg lastshown3:V, reg showto1:*, reg showto2:V, reg r5:V, reg c13:L, reg c14:V, reg c16:L, reg trySrcLines:cls, reg srcfile:*, reg srcfile1:V, reg p:p(V +), reg lastshown4:*, reg lastshown5:V, reg r7:V, reg p1:p(V +), reg showto3:*, reg showto4:V, reg p2:p(V +), reg r10:V, reg startsWith:cls, reg dce:*, reg dce1:V, reg p3:p(V +), reg r12:V, reg dce2:*, reg dce3:V, reg c17:L, reg dce5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg linedirs:*, reg linedirs1:V, reg r13:V, reg __:cls, reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg dce6:*, reg dce7:V, reg length:cls, reg r17:V, reg c18:L, reg putSinput:cls, reg dce8:*, reg dce9:V, reg p4:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg dce10:*, reg dce11:V, reg length1:cls, reg r21:V, reg p5:p(V +), reg r23:V, reg showto5:*, reg showto6:V |
    mkenv;
    st showto = showto;
    options = ld options;
    check L8() else D0();
  D0():
    deopt 0 [options];
  L8():
    options1 = force? options;
    checkMissing(options1);
    c = `is.object`(options1);
    if c then L10() else L11(options1);
  L9(dx1):
    c1 = `as.logical`(dx1);
    if c1 then L13() else L0(c1);
  L10():
    dr = tryDispatchBuiltin.1("$", options1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(options3):
    r = `$`(options3, <sym echo>);
    goto L9(r);
  L0(c3):
    c10 = `as.logical`(c3);
    if c10 then L19() else L2(c10);
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L13():
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L1(c6, r2):
    r4 = `!`(r2);
    c7 = `as.logical`(r4);
    c8 = `&&`(c6, c7);
    goto L0(c8);
  L2(c12):
    c16 = `as.logical`(c12);
    if c16 then L23() else L3();
  L14():
    lastshown = ld lastshown;
    check L16() else D1();
  L15():
    r1 = dyn base(<sym lastshown>);
    goto L1(c1, r1);
  L19():
    lastshown2 = ld lastshown;
    check L20() else D3();
  D1():
    deopt 5 [c1, lastshown];
  D3():
    deopt 11 [c10, lastshown2];
  L3():
    invisible.0();
    popenv;
    return NULL;
  L16():
    lastshown1 = force? lastshown;
    checkMissing(lastshown1);
    is_na = ldf `is.na` in base;
    r3 = dyn is_na(lastshown1);
    check L17() else D2();
  L20():
    lastshown3 = force? lastshown2;
    checkMissing(lastshown3);
    showto1 = ld showto;
    check L21() else D4();
  L23():
    trySrcLines = ldf trySrcLines;
    check L24() else D5();
  D2():
    deopt 8 [c1, r3];
  D4():
    deopt 12 [c10, lastshown3, showto1];
  D5():
    deopt 17 [];
  L17():
    goto L1(c1, r3);
  L21():
    showto2 = force? showto1;
    checkMissing(showto2);
    r5 = `<`(lastshown3, showto2);
    c13 = `as.logical`(r5);
    c14 = `&&`(c10, c13);
    goto L2(c14);
  L24():
    p = prom<V +>{
      srcfile = ld srcfile;
      srcfile1 = force? srcfile;
      checkMissing(srcfile1);
      return srcfile1;
    };
    p1 = prom<V +>{
      lastshown4 = ld lastshown;
      lastshown5 = force? lastshown4;
      checkMissing(lastshown5);
      r7 = `+`(lastshown5, 1);
      return r7;
    };
    p2 = prom<V +>{
      showto3 = ld showto;
      showto4 = force? showto3;
      checkMissing(showto4);
      return showto4;
    };
    r10 = dyn trySrcLines(p, p1, p2, NULL);
    check L25() else D6();
  D6():
    deopt 22 [r10];
  L25():
    st dce = r10;
    startsWith = ldf startsWith;
    check L26() else D7();
  D7():
    deopt 25 [];
  L26():
    p3 = prom<V +>{
      dce = ld dce;
      dce1 = force? dce;
      checkMissing(dce1);
      return dce1;
    };
    r12 = dyn startsWith(p3, "#line ");
    check L27() else D8();
  D8():
    deopt 28 [r12];
  L27():
    st linedirs = r12;
    dce2 = ld dce;
    check L28() else D9();
  D9():
    deopt 30 [dce2];
  L28():
    dce3 = force? dce2;
    checkMissing(dce3);
    c17 = `is.object`(dce3);
    if c17 then L29() else L30(dce3);
  L4(dx3):
    st dce = dx3;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L29():
    dr2 = tryDispatchBuiltin.1("[", dce3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L31() else L30(dr2);
  L30(dce5):
    linedirs = ld linedirs;
    check L32() else D10();
  D10():
    deopt 32 [dce5, linedirs];
  L5(r16):
    c18 = `as.logical`(r16);
    if c18 then L37() else L6();
  L31():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L32():
    linedirs1 = force? linedirs;
    checkMissing(linedirs1);
    r13 = `!`(linedirs1);
    __ = ldf `[` in base;
    r14 = dyn __(dce5, r13);
    goto L4(r14);
  L33():
    dce6 = ld dce;
    check L35() else D11();
  L34():
    r15 = dyn base1(<sym dce>);
    goto L5(r15);
  D11():
    deopt 39 [dce6];
  L6():
    goto L7();
  L7():
    showto5 = ld showto;
    check L41() else D15();
  L35():
    dce7 = force? dce6;
    checkMissing(dce7);
    length = ldf length in base;
    r17 = dyn length(dce7);
    check L36() else D12();
  L37():
    putSinput = ldf putSinput;
    check L38() else D13();
  D12():
    deopt 42 [r17];
  D13():
    deopt 44 [];
  D15():
    deopt 50 [showto5];
  L36():
    goto L5(r17);
  L38():
    p4 = prom<V +>{
      dce8 = ld dce;
      dce9 = force? dce8;
      checkMissing(dce9);
      return dce9;
    };
    p5 = prom<V +>{
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      dce10 = ld dce;
      dce11 = force? dce10;
      checkMissing(dce11);
      length1 = ldf length in base;
      r21 = dyn length1(dce11);
      goto L0(r21);
    L2():
      r19 = dyn base2(<sym dce>);
      goto L0(r19);
    };
    r23 = dyn putSinput(p4, p5);
    check L39() else D14();
  L41():
    showto6 = force? showto5;
    checkMissing(showto6);
    sst lastshown = showto6;
    invisible.0();
    popenv;
    return showto6;
  D14():
    deopt 47 [r23];
  L39():
    goto L7();
  }
}