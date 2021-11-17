'use strict';

/**
 * Module dependencies.
 */

const express = require('express');
const router = express.Router();

/**
 * GET users listening.
 */

router.get('/', function (req, res, next) {

    // render html page.
    res.render('users', {
        title: 'SmartHochschule',
    });
});

module.exports = router;
