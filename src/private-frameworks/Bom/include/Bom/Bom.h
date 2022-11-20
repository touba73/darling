/*
 This file is part of Darling.

 Copyright (C) 2019 Lubos Dolezel

 Darling is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Darling is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Darling.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef _Bom_H_
#define _Bom_H_

void* BOMAppleDoubleADPathToPath(void);
void* BOMAppleDoubleCopyHeader(void);
void* BOMAppleDoubleIsADFile(void);
void* BOMAppleDoublePathToADPath(void);
void* BOMAppleDoubleReadHeader(void);
void* BOMAppleDoubleSize(void);
void* BOMAppleDoubleWriteHeader(void);
void* BOMArchFlagForFile(void);
void* BOMArchFlagForFileWithSys(void);
void* BOMArchFlagForHeader(void);
void* BOMBomApproximateBytesRepresented(void);
void* BOMBomApproximateBytesRepresented64(void);
void* BOMBomApproximateBytesRepresentedByVariant(void);
void* BOMBomApproximateBytesRepresentedByVariant64(void);
void* BOMBomApproximateBytesRepresentedByVariantIsValid(void);
void* BOMBomApproximateBytesRepresentedByVariantWithBlockSize(void);
void* BOMBomApproximateBytesRepresentedByVariantWithBlockSize64(void);
void* BOMBomApproximateBytesRepresentedWithBlockSize(void);
void* BOMBomApproximateBytesRepresentedWithBlockSize64(void);
void* BOMBomCommit(void);
void* BOMBomDumpLinks(void);
void* BOMBomEInsertFSObject(void);
void* BOMBomEInvalidateCachedData(void);
void* BOMBomELinkFromPathToPath(void);
void* BOMBomEnumeratorFree(void);
void* BOMBomEnumeratorNew(void);
void* BOMBomEnumeratorNewWithOptions(void);
void* BOMBomEnumeratorNext(void);
void* BOMBomEnumeratorSkip(void);
void* BOMBomEnumeratorSkipAll(void);
void* BOMBomFSObjectCount(void);
void* BOMBomFSObjectExistsAtPath(void);
void* BOMBomFree(void);
void* BOMBomGetFSObjectAtPath(void);
void* BOMBomGetRootFSObject(void);
void* BOMBomInsertFSObject(void);
void* BOMBomLinkToFSObjectFromPath(void);
void* BOMBomLinkToPathFromPath(void);
void* BOMBomMaskWithBom(void);
void* BOMBomMaskWithPatternList(void);
void* BOMBomMergeInto(void);
void* BOMBomMergeIntoBom(void);
void* BOMBomMergeIntoBomWithPatternList(void);
void* BOMBomNew(void);
void* BOMBomNewFromBom(void);
void* BOMBomNewFromBomWithOptions(void);
void* BOMBomNewFromBomWithStripping(void);
void* BOMBomNewFromDirectory(void);
void* BOMBomNewFromDirectoryWithSys(void);
void* BOMBomNewFromPath(void);
void* BOMBomNewFromPathWithSys(void);
void* BOMBomNewWithStorage(void);
void* BOMBomNewWithSys(void);
void* BOMBomOpen(void);
void* BOMBomOpenWithStorage(void);
void* BOMBomOpenWithSys(void);
void* BOMBomPathIDAndArchsForKey(void);
void* BOMBomPathIDForKey(void);
void* BOMBomPathsTree(void);
void* BOMBomRemoveFSObject(void);
void* BOMBomSync(void);
void* BOMBomVariantAdd(void);
void* BOMBomVariantCount(void);
void* BOMBomVariantGet(void);
void* BOMBomVariantGetList(void);
void* BOMBomVariantRemove(void);
void* BOMBomVerifyBom(void);
void* BOMCFArrayMaxRange(void);
void* BOMCFGetBoolValue(void);
void* BOMCFPropertyListReadFromPath(void);
void* BOMCFPropertyListReadFromPathWithSys(void);
void* BOMCFPropertyListWriteToPath(void);
void* BOMCFPropertyListWriteToPathWithSys(void);
void* BOMCFStringGetUTF8String(void);
void* BOMCKTreeBuildKey(void);
void* BOMCKTreeCount(void);
void* BOMCKTreeGet(void);
void* BOMCPIOFree(void);
void* BOMCPIOGetFile(void);
void* BOMCPIONew(void);
void* BOMCPIORead(void);
void* BOMCPIOReadHeader(void);
void* BOMCPIOSeek(void);
void* BOMCPIOWrite(void);
void* BOMCPIOWriteDevice(void);
void* BOMCPIOWriteDirectory(void);
void* BOMCPIOWriteHeader(void);
void* BOMCPIOWriteSymlink(void);
void* BOMCPIOWriteTerminator(void);
void* BOMCRC32ForBuffer(void);
void* BOMCRC32ForBufferSegment(void);
void* BOMCRC32ForBufferSegmentFinal(void);
void* BOMCRC32ForFile(void);
void* BOMCRC32ForFileDesc(void);
void* BOMCRC32ForFileDescWithSys(void);
void* BOMCRC32ForFileWithSys(void);
void* BOMCopierCancelCopy(void);
void* BOMCopierCopy(void);
void* BOMCopierCopyWithOptions(void);
void* BOMCopierCountFilesInArchive(void);
void* BOMCopierCountFilesInDirectory(void);
void* BOMCopierFree(void);
void* BOMCopierGetArchiveFileDescriptor(void);
void* BOMCopierMultiCopy(void);
void* BOMCopierMultiCopyWithOptions(void);
void* BOMCopierNew(void);
void* BOMCopierNewWithSys(void);
void* BOMCopierRedirectPath(void);
void* BOMCopierRedirectSourcePath(void);
void* BOMCopierSetCopyFileFinishedHandler(void);
void* BOMCopierSetCopyFileStartedHandler(void);
void* BOMCopierSetCopyFileUpdateHandler(void);
void* BOMCopierSetCountFilesUpdateHandler(void);
void* BOMCopierSetFatalErrorHandler(void);
void* BOMCopierSetFatalFileErrorHandler(void);
void* BOMCopierSetFileConflictErrorHandler(void);
void* BOMCopierSetFileErrorHandler(void);
void* BOMCopierSetMultiCopySourceStartedHandler(void);
void* BOMCopierSetPKZipPasswordRequester(void);
void* BOMCopierSetUserData(void);
void* BOMCopierUserData(void);
void* BOMExceptionHandlerMessage(void);
void* BOMExceptionHandlerSet(void);
void* BOMFSEnumeratorFree(void);
void* BOMFSEnumeratorNew(void);
void* BOMFSEnumeratorNewWithSys(void);
void* BOMFSEnumeratorNext(void);
void* BOMFSObjectArchCount(void);
void* BOMFSObjectBlockID(void);
void* BOMFSObjectChecksum(void);
void* BOMFSObjectContainsArchitecture(void);
void* BOMFSObjectCopy(void);
void* BOMFSObjectDeviceID(void);
void* BOMFSObjectENewFromPath(void);
void* BOMFSObjectENewFromPathWithSys(void);
void* BOMFSObjectFree(void);
void* BOMFSObjectGetArch(void);
void* BOMFSObjectGetArchSize(void);
void* BOMFSObjectGetArchSubtype(void);
void* BOMFSObjectGetHardlinkCount(void);
void* BOMFSObjectGetHardlinkPath(void);
void* BOMFSObjectGroupID(void);
void* BOMFSObjectIsBinaryObject(void);
void* BOMFSObjectIsHardlink(void);
void* BOMFSObjectModTime(void);
void* BOMFSObjectMode(void);
void* BOMFSObjectNew(void);
void* BOMFSObjectNewFromPath(void);
void* BOMFSObjectNewFromPathDeferred(void);
void* BOMFSObjectNewFromPathDeferredWithSys(void);
void* BOMFSObjectNewFromPathString(void);
void* BOMFSObjectNewFromPathStringWithSys(void);
void* BOMFSObjectNewFromPathWithSys(void);
void* BOMFSObjectNewWithSys(void);
void* BOMFSObjectOpaqueData(void);
void* BOMFSObjectOpaqueDataSize(void);
void* BOMFSObjectParentPathID(void);
void* BOMFSObjectParseSummary(void);
void* BOMFSObjectParseSummaryWithSys(void);
void* BOMFSObjectPathID(void);
void* BOMFSObjectPathName(void);
void* BOMFSObjectPathNameString(void);
void* BOMFSObjectSetBlockID(void);
void* BOMFSObjectSetChecksum(void);
void* BOMFSObjectSetDeviceID(void);
void* BOMFSObjectSetFlags(void);
void* BOMFSObjectSetGroupID(void);
void* BOMFSObjectSetModTime(void);
void* BOMFSObjectSetMode(void);
void* BOMFSObjectSetOpaqueData(void);
void* BOMFSObjectSetParentPathID(void);
void* BOMFSObjectSetPathID(void);
void* BOMFSObjectSetPathName(void);
void* BOMFSObjectSetShortName(void);
void* BOMFSObjectSetSize(void);
void* BOMFSObjectSetSymlinkTarget(void);
void* BOMFSObjectSetUserID(void);
void* BOMFSObjectSetVisitOrder(void);
void* BOMFSObjectShortName(void);
void* BOMFSObjectShortNameString(void);
void* BOMFSObjectSize(void);
void* BOMFSObjectSummary(void);
void* BOMFSObjectSummaryWithFormat(void);
void* BOMFSObjectSymlinkTarget(void);
void* BOMFSObjectSymlinkTargetString(void);
void* BOMFSObjectThinKeepingArchs(void);
void* BOMFSObjectType(void);
void* BOMFSObjectTypeForMode(void);
void* BOMFSObjectTypeFromRawData(void);
void* BOMFSObjectUserID(void);
void* BOMFSObjectVisitOrder(void);
void* BOMFileClose(void);
void* BOMFileNewFromFD(void);
void* BOMFileNewFromFDWithSys(void);
void* BOMFileNewMirror(void);
void* BOMFileNewMirrorWithSys(void);
void* BOMFileOffset(void);
void* BOMFileOpen(void);
void* BOMFileOpenSTDIN(void);
void* BOMFileOpenSTDOUT(void);
void* BOMFileOpenWithSys(void);
void* BOMFileRead(void);
void* BOMFileSeek(void);
void* BOMFileUncompressedOffset(void);
void* BOMFileWrite(void);
void* BOMFilesystemInfoCreate(void);
void* BOMFilesystemInfoDestroy(void);
void* BOMFilesystemInfoQuery(void);
void* BOMHardLinkTableFree(void);
void* BOMHardLinkTableGet(void);
void* BOMHardLinkTableGetPathAndData(void);
void* BOMHardLinkTableNew(void);
void* BOMHardLinkTableSet(void);
void* BOMHardLinkTableSetPathAndData(void);
void* BOMMemoryDump(void);
void* BOMNameForFSObjectType(void);
void* BOMPatternCompileString(void);
void* BOMPatternFree(void);
void* BOMPatternListExtractFromFile(void);
void* BOMPatternListExtractFromStrings(void);
void* BOMPatternListFree(void);
void* BOMPatternListFromStringList(void);
void* BOMPatternListMatch(void);
void* BOMPatternListNew(void);
void* BOMPatternMatch(void);
void* BOMStackCount(void);
void* BOMStackFree(void);
void* BOMStackIsEmpty(void);
void* BOMStackNew(void);
void* BOMStackPeek(void);
void* BOMStackPoke(void);
void* BOMStackPop(void);
void* BOMStackPush(void);
void* BOMStorageCommit(void);
void* BOMStorageCompact(void);
void* BOMStorageCopyFromBlock(void);
void* BOMStorageCopyFromBlockRange(void);
void* BOMStorageCopyToBlock(void);
void* BOMStorageCopyToBlockRange(void);
void* BOMStorageCount(void);
void* BOMStorageDump(void);
void* BOMStorageDumpFreeList(void);
void* BOMStorageFileName(void);
void* BOMStorageFindActualFreeSpace(void);
void* BOMStorageFree(void);
void* BOMStorageFreeBlock(void);
void* BOMStorageFreeNamedBlock(void);
void* BOMStorageGetNamedBlock(void);
void* BOMStorageGetSys(void);
void* BOMStorageIsOpenForWriting(void);
void* BOMStorageIsStorageFile(void);
void* BOMStorageIsStorageFileWithSys(void);
void* BOMStorageNew(void);
void* BOMStorageNewBlock(void);
void* BOMStorageNewInRAM(void);
void* BOMStorageNewNamedBlock(void);
void* BOMStorageNewWithOptions(void);
void* BOMStorageNewWithOptionsAndSys(void);
void* BOMStorageNewWithSys(void);
void* BOMStorageOpen(void);
void* BOMStorageOpenInRAM(void);
void* BOMStorageOpenWithSys(void);
void* BOMStorageSetBlockData(void);
void* BOMStorageSizeOfBlock(void);
void* BOMStreamFlush(void);
void* BOMStreamFree(void);
void* BOMStreamGetByteOrder(void);
void* BOMStreamGetSys(void);
void* BOMStreamReadAddress(void);
void* BOMStreamReadBuffer(void);
void* BOMStreamReadUInt16(void);
void* BOMStreamReadUInt32(void);
void* BOMStreamReadUInt8(void);
void* BOMStreamSetByteOrder(void);
void* BOMStreamWithAddress(void);
void* BOMStreamWithBlockID(void);
void* BOMStreamWithFile(void);
void* BOMStreamWithFileAndSys(void);
void* BOMStreamWriteBuffer(void);
void* BOMStreamWriteUInt16(void);
void* BOMStreamWriteUInt32(void);
void* BOMStreamWriteUInt8(void);
void* BOMTreeCommit(void);
void* BOMTreeCopyToTree(void);
void* BOMTreeCount(void);
void* BOMTreeFree(void);
void* BOMTreeGetValue(void);
void* BOMTreeGetValueSize(void);
void* BOMTreeIteratorFree(void);
void* BOMTreeIteratorIsAtEnd(void);
void* BOMTreeIteratorKey(void);
void* BOMTreeIteratorKeySize(void);
void* BOMTreeIteratorNew(void);
void* BOMTreeIteratorNext(void);
void* BOMTreeIteratorSet(void);
void* BOMTreeIteratorValue(void);
void* BOMTreeIteratorValueSize(void);
void* BOMTreeNew(void);
void* BOMTreeNewWithName(void);
void* BOMTreeNewWithOptions(void);
void* BOMTreeOpen(void);
void* BOMTreeOpenWithName(void);
void* BOMTreeRemoveAndFree(void);
void* BOMTreeRemoveValue(void);
void* BOMTreeSetCompareFunc(void);
void* BOMTreeSetValue(void);
void* BOMTreeStorage(void);
void* BOM_calloc(void);
void* BOM_malloc(void);
void* BOM_malloczero(void);
void* BOM_realloc(void);
void* BOM_realloczero(void);
void* BOM_strrncmp(void);
void* BomSys_access(void);
void* BomSys_chdir(void);
void* BomSys_chflags(void);
void* BomSys_chmod(void);
void* BomSys_close(void);
void* BomSys_closedir(void);
void* BomSys_default(void);
void* BomSys_fcntl(void);
void* BomSys_free(void);
void* BomSys_fstat(void);
void* BomSys_fstatfs(void);
void* BomSys_fsync(void);
void* BomSys_getattrlist(void);
void* BomSys_getcwd(void);
void* BomSys_getxattr(void);
void* BomSys_init(void);
void* BomSys_lchown(void);
void* BomSys_link(void);
void* BomSys_listxattr(void);
void* BomSys_log_attach(void);
void* BomSys_log_attached(void);
void* BomSys_log_config(void);
void* BomSys_log_detach(void);
void* BomSys_log_pause(void);
void* BomSys_log_resume(void);
void* BomSys_lseek(void);
void* BomSys_lstat(void);
void* BomSys_mkdir(void);
void* BomSys_mknod(void);
void* BomSys_mktemp(void);
void* BomSys_mmap(void);
void* BomSys_munmap(void);
void* BomSys_open(void);
void* BomSys_openFor(void);
void* BomSys_opendir(void);
void* BomSys_read(void);
void* BomSys_readdir(void);
void* BomSys_readdir_r(void);
void* BomSys_readlink(void);
void* BomSys_realpath(void);
void* BomSys_removexattr(void);
void* BomSys_rename(void);
void* BomSys_rmdir(void);
void* BomSys_set_access(void);
void* BomSys_set_chdir(void);
void* BomSys_set_chflags(void);
void* BomSys_set_chmod(void);
void* BomSys_set_close(void);
void* BomSys_set_closedir(void);
void* BomSys_set_fcntl(void);
void* BomSys_set_fstat(void);
void* BomSys_set_fstatfs(void);
void* BomSys_set_fsync(void);
void* BomSys_set_getattrlist(void);
void* BomSys_set_getcwd(void);
void* BomSys_set_getxattr(void);
void* BomSys_set_lchown(void);
void* BomSys_set_link(void);
void* BomSys_set_listxattr(void);
void* BomSys_set_lseek(void);
void* BomSys_set_lstat(void);
void* BomSys_set_mkdir(void);
void* BomSys_set_mknod(void);
void* BomSys_set_mktemp(void);
void* BomSys_set_mmap(void);
void* BomSys_set_munmap(void);
void* BomSys_set_open(void);
void* BomSys_set_openFor(void);
void* BomSys_set_opendir(void);
void* BomSys_set_read(void);
void* BomSys_set_readdir(void);
void* BomSys_set_readdir_r(void);
void* BomSys_set_readlink(void);
void* BomSys_set_realpath(void);
void* BomSys_set_removexattr(void);
void* BomSys_set_rename(void);
void* BomSys_set_rmdir(void);
void* BomSys_set_setxattr(void);
void* BomSys_set_stat(void);
void* BomSys_set_statfs(void);
void* BomSys_set_symlink(void);
void* BomSys_set_unlink(void);
void* BomSys_set_utimes(void);
void* BomSys_set_write(void);
void* BomSys_setxattr(void);
void* BomSys_stat(void);
void* BomSys_statfs(void);
void* BomSys_symlink(void);
void* BomSys_unlink(void);
void* BomSys_utimes(void);
void* BomSys_write(void);
void* _BOMBomPathTreePrint(void);
void* _BOMBomPrint(void);
void* _BOMCFArrayPrint(void);
void* _BOMExceptionHandlerCall(void);
void* _BOMFatalException(void);

#endif