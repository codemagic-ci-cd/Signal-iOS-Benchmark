//
// Copyright 2024 Signal Messenger, LLC
// SPDX-License-Identifier: AGPL-3.0-only
//

import Foundation

#if TESTABLE_BUILD

open class AttachmentManagerMock: AttachmentManager {

    open func createAttachmentPointers(
        from protos: [SSKProtoAttachmentPointer],
        owner: AttachmentReference.OwnerId,
        tx: DBWriteTransaction
    ) {
        // Do nothing
    }

    open func createAttachmentBuilder(
        from proto: SSKProtoAttachmentPointer,
        tx: DBWriteTransaction
    ) throws -> OwnedAttachmentBuilder<Void> {
        return .withoutFinalizer(())
    }

    open func createAttachmentBuilder(
        rawFileData: Data,
        mimeType: String,
        tx: DBWriteTransaction
    ) throws -> OwnedAttachmentBuilder<Void> {
        return .withoutFinalizer(())
    }

    open func createAttachmentStreams(
        consumingDataSourcesOf unsavedAttachmentInfos: [OutgoingAttachmentInfo],
        owner: AttachmentReference.OwnerId,
        tx: DBWriteTransaction
    ) throws {
        // Do nothing
    }

    open func newQuotedReplyMessageThumbnailBuilder(
        originalMessage: TSMessage,
        tx: DBReadTransaction
    ) -> OwnedAttachmentBuilder<OWSAttachmentInfo>? {
        return nil
    }

    open func removeAttachment(
        _ attachment: TSResource,
        from owner: AttachmentReference.OwnerId,
        tx: DBWriteTransaction
    ) {
        // Do nothing
    }

    open func removeAllAttachments(
        from owners: [AttachmentReference.OwnerId],
        tx: DBWriteTransaction
    ) {
        // Do nothing
    }
}

#endif
